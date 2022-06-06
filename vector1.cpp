#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main(){
vector<int> v1(10,9); // create vector of 10 elements with value 9
    cout<< v1.size() << endl;
    cout<< v1[0] <<" "<< v1[1] <<" "<< v1[2] <<endl;
    cout<< v.size() << endl;
    v.push_back(1); // add first element
    v.push_back(2); // add seccond element
    v.push_back(3);  // add 3rd element
    cout<< v.size() << endl; // 3

    // cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
     //or    this one cout<<v.at(0)<<" "<<v.at(1)<<" "<<v.at(2)<<endl; 
    v.pop_back(); //remove last element
    cout<< v.size() << "\n"; // 2

    v.push_back(4); // add element at last
    cout<< v.size() << endl; // 3


    // cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

    v.clear(); // remove all elements
    cout<< v.size() << endl; // 0


}