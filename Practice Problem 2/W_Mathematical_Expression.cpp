#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,result;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    } 
    if(result == c){
        cout << "Yes" ;
    }else {
        cout << result ;
    }
}