class Solution
{
    public:
    bool isRotated(string s, string t) {
        string a="";
        string b="";
        for(int i=2;i<s.size();i++){
            a+=s[i];
        }
        a+=s[0];
        a+=s[1];
        b+=s[t.size()-2];
        b+=s[t.size()-1];
        for(int i=0;i<t.size()-2;i++){
            b+=s[i];
        }
        if(t==a || b==t){
            return 1;
        }
        return 0;
        
    }
};
