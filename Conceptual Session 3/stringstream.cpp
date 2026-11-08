#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    stringstream ss(s1);
    string word;
    while(ss>>word){
        cout << word << endl;
    }
    ss >> word;
    cout << word << endl;
    return 0;
}