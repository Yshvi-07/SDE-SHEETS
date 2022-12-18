class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=nums.size();
        int c=0,j=0;
        for(int i=0;i<s;i++){
            if(nums[i]==1){
                c++;
            }
                else{
                    c=0;
                }
            
        
        if(j<c){
                    j=c;
                }
    }
         return j;
    }
};
