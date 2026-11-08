#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << s[3] << endl; //access the no. of index value
    cout << s.at(4) << endl; // at function index er 
                             //value print kore
    cout << s[s.size()-1] <<endl; // aybhabe last ch print kora jai 
                                  //back fun() diye easy
    cout <<s.back() << endl; //last ch print kore
    cout << s.front() << endl;//first ch print kore

}