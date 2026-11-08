#include<bits/stdc++.h>
using namespace std;
int n;
int *sort_fun(){
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n,greater<int>());
    return arr;
}
int main(){
    int *return_arr = sort_fun();
    for(int i=0; i<n; i++){
        cout << return_arr[i] << " ";
    }
    delete[] return_arr;
}