#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int tc=0; tc<t; tc++){
        string sentence,target_str;
        cin >> sentence >> target_str;
        // while(sentence.find(target_str) != string :: npos){
        while(sentence.find(target_str) != -1){
            sentence.replace(sentence.find(target_str),
            target_str.size(),"@");
        }
        cout << sentence << endl;
    }
    return 0;
}