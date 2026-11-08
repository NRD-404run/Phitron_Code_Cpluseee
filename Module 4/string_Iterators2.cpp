#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello";
    //for(string :: iterator it = s.begin(); it<s.end(); it++){
    //     cout << *it << endl; //iterator akta pointer tai 
                              //de-reference kore print korte hobe
    //}
    for(auto it = s.begin(); it<s.end(); it++){
        cout << *it << endl;
    }
}