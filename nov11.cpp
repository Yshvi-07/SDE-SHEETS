class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
       int n = str1.length();
       if(n!=str2.length())
       {
           return false;
       }
        unordered_map<char,char>freq1;
        unordered_map<char,char>freq2;
        
        for(int i=0;i<n;i++)
        {
           
            freq1[str1[i]] = str2[i];
            freq2[str2[i]] = str1[i];
        
        }
        
        for(int i=0;i<n;i++)
        {
           
            if(freq1[str1[i]]!=str2[i] || freq2[str2[i]]!=str1[i])
            {
                return false;
            }
        
        }
        
        
        return true;
        
    }
};
