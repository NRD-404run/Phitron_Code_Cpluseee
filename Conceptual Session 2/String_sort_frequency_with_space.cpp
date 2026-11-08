#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int freq[26] = {0};
    for(int i=0; i<str.length(); i++){
        if(str[i] != ' '){ //space handle
        freq[str[i]-'a']++;
        }
    }
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            for(int j=0; j<freq[i]; j++){
                cout << char(i+'a');
            }
        }
    }
}