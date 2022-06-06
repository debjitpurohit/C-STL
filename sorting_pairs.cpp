#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main(){
    pair<int,int>p[5]; //array of pair
    //vector<pair<int,int>> v; // vector of pair
    p[0]={1,2};
    p[1]={5,2};
    p[2]={8,1};
    p[3]={1,0};
    p[4]={3,4};
    sort(p,p+5);
    for(int i=0;i<5;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;



}