vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int>g;
    stack<int>s;
    s.push(-1);
    for(int i=0;i<A.size();i++){
        while(!s.empty() && A[i]<=s.top()){
            s.pop();
            
        }
        if(s.empty()){
            g.push_back(-1);
        }
        else{
            g.push_back(s.top());
        }
        s.push(A[i]);
    }
    return g;
}
