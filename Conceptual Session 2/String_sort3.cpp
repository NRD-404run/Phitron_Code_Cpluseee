#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    int freq[26] = {0};
    for(int i=0; i<str.length(); i++){
        freq[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(freq[i]>0){
            cout << char(i+'a') << " "; // this case are ok
            // but not handle multiple same character print
            // ex. helllo print it-> e h l o
        }
    }
}