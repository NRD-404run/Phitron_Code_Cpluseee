#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    cout << "a er address -> " << &a <<endl;
    int *ptr = &a ;
    cout << "pointer er address -> " << ptr << endl;
    *ptr = 100;
    cout << a << endl;
}