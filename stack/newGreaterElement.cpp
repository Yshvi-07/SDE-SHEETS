class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>s;
    //s.push(-1);
    vector<long long>ans(n);
    for(int i=n-1;i>=0;i--){
        long long c=arr[i];
        while(!s.empty() && s.top()<=c){
            s.pop();
        }
        if(s.empty())
        ans[i]=-1;
        
        else
        
        ans[i]=s.top();
        s.push(c);
        
    
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
