#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout << s << endl;
    stringstream ss(s);//stringstream er akta object niyesi ss name
                      //then string ta ss er moddhe pathaia disi
                      //stringstream full sentence ke akta akta word e bag kore
    string word;
    ss >>  word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
}