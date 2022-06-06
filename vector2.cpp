#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main(){
    vector<int> v(50); // create vector of 50 elements with all 0 value 
    cout<< v.size() << endl;
    cout<< v[0] <<" "<< v[1] <<" "<< v[2] << " "<<v[49] <<endl;



    vector<int> v1(10,9); // create vector of 10 elements with value 9
    cout<< v1.size() << endl;
    cout<< v1[0] <<" "<< v1[1] <<" "<< v1[2] <<endl;

     
    vector<char>v2(8,'D'); // create vector of 10 elements with char value D
    cout<< v2.size() << endl;
    cout<< v2[0] <<" "<< v2[1] <<" "<< v2[2] <<endl;

}
