#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4] = {10,20,30,40};
    *(arr+0) = 100;
    *(arr+1) = 230;
    for(int i=0; i<4; i++){
        cout << arr[i] << endl;
    }
}