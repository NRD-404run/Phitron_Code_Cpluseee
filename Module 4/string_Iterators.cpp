#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello";
    // for(int i=0; i<s.size(); i++){
    // cout << s[i] << endl;
    // }
    cout << *s.begin() << endl; //s.begin ke print korte parbo nah
                                // karon begin akta pointer tai de-reference kore korte hobe
    cout << *(s.end()-1) << endl;  
}