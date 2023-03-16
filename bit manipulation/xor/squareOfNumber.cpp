#include <bits/stdc++.h> 
int calculateSquare(int n)
{
    //    Write your code here.
    if(n==0){
        return 0;

    }
    if(n<0){
        n=-n;

    }
    int x=n>>1;
    if(n&1){
        return ((calculateSquare(x)<<2)+(x<<2)+1);
    }
    else{
        return (calculateSquare(x)<<2);
    }
}
