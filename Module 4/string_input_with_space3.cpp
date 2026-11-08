#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    string s;
    cin.ignore(); //ignore ta nile string er space 
                  //ta print korte pare ar na nile 
                  //string ta getline er enter er string ta 
                  //nite pare nah 
    //cin >> s;
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
}