#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s.size()<< endl;
    s[3] = ' '; //space print 3 no. index
    s[2] = 'e';
    cout << s << endl;
}