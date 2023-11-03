class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        int num=0;
        
        for(int i=1;i<=n;i++){
            num=i;
            int c=0;
            while(num){
                num=num&(num-1);
                c++;
            }
            ans.push_back(c);
        
    #proud of you
       }
       return ans;
    }
};
