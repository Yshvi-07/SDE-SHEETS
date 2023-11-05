class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<int>ans;
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:m){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(auto it:v){
            if(k==0){
                break;
            }
            else{
                ans.push_back(it.second);
                k--;
            }
        }
        return ans;
    }
};
