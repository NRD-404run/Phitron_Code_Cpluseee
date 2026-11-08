#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    s.resize(4); // resize kore soto kora hole
                 //oi size porjonto print kore 
                 //baki shob falaia daoa hoi 
    cout << s << endl;

    string s2 = "Hello";
    s2.resize(8,'D'); //resize kore bariye character 
                     // rekhe dile null e oi character
                     //bar bar print hoi
    cout << s2 << endl;
}