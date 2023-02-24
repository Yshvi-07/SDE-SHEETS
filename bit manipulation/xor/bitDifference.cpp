class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int d=a^b;
        int c=0;
        while(d>0){
            if(d&1){
                c++;
            }
            d=d>>1;
        }
        
      return c;  
    }
};
