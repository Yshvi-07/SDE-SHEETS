#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int>neq;

    int r=q.size()/2;
    while(r--){
        int c=q.front();
        neq.push(c);
        q.pop();

    }
    while(!neq.empty()){
        q.push(neq.front());
        neq.pop();
        int g=q.front();
        q.push(g);
        q.pop();
        
    }

}fird
