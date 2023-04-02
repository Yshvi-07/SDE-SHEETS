class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        list<int>y;
        int i=0,j=0,m=0;
        while(j<nums.size()){
            while(y.size()>0 && y.back()<nums[j]){
                y.pop_back();
            }
            y.push_back(nums[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                ans.push_back(y.front());
            
            if(nums[i]==y.front()){
                y.pop_front();
                
            }
            i++;j++;
            
        }
        }
            return ans;
    }
};
