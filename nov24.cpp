https://www.youtube.com/shorts/tV2_4HXE9Z0
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    vector<int>ans;
	    int mid=n/2;
	    
	    for(int i=0;i<n/2;i++){
	        ans.push_back(arr[i]);
	        ans.push_back(arr[mid++]);
	    }
	    for(int i=0;i<n;i++){
	        arr[i]=ans[i];
	    }
	}
		 

};
