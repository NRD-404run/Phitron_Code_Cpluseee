#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        if(word=="good"){
             cout << "YES" << endl;
            break;        
        }
    }

    return 0;
}