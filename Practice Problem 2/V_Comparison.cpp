#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    int flag = 0;

   if(s=='<'){
    if(a<b){
        flag = 1;
    }
   }
   else if(s=='>'){
    if(a>b){
        flag = 1;
    }
   }else if(s=='='){
    if(a==b){
        flag = 1;
    }
   }

    if(flag == 1){
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
}
