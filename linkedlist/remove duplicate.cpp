class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //int c=0;
       // vector<int>ans;
        int s=nums.size();
        int k=0;
        for(int i=1;i<s;i++){
            if(nums[i]!=nums[k]){
                k++;
               nums[k]=nums[i];
                
            }
            
        }
        return k+1;
    }
};
Console
