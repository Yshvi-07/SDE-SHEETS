class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        int a=x^y;
        while(a){
            c+=a&1;
            a=a>>1;
            
        }
       return c; 
    }
};
