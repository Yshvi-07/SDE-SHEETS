#include <bits/stdc++.h> 
void reverse(queue<int> &q,int k)
{
    // Write your code here.
    stack<int>qt;
   for(int i=0;i<k;i++){
       int d=q.front();
       q.pop();
       qt.push(d);
   }
   while(!qt.empty()){
       int r=qt.top();
       qt.pop();
       q.push(r);
   }

   int t=q.size()-k;
   while(t--){
       int r=q.front();
       q.pop();
       q.push(r);

   }
   
}
