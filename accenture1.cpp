/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>a1;
    vector<int>a2;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a1.push_back(a[i]);
        }
        else{
            a2.push_back(a[i]);
        }
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    int s=0;
    
    s=(a1[a1.size()-2])+(a2[a2.size()-2]);
    cout<<s<<endl;
    

    return 0;
}
