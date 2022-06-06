#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main(){
    int a[4]= {5,4,1,2};
    sort(a,a+3); // sort element from 0 to 2 
    for (int i=0;i<4;i++)
        cout<<a[i]<<" ";
        
    cout<<endl;

    vector<int> v= {15,14,11,12};
    sort(v.begin(),v.end()); // sort element from 0 to 3
    for (int i=0;i<4;i++)
        cout<<v[i]<<" ";    
 
    
} 