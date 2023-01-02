//firstandlast
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long start=0;
        long long end=v.size()-1;
        long long ans=-1,uttar=-1;
        long long mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
            if(v[mid]==x){
                ans=mid;
                end=mid-1;
                continue;
            }
            else if(v[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
                
            
        }
        
        start=0;
        end=v.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(v[mid]==x){
                uttar=mid;
                start=mid+1;
                continue;
            }
            else if(v[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
                
            
        }
        
        return {ans,uttar};
    }
};
