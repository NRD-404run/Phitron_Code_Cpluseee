#include<bits/stdc++.h>
using namespace std;
int n;
int *sort_fun(){
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
     cin >> arr[i];   
    }
    //sort an ascending order
    sort(arr, arr+n);
    return arr;
}
int main(){
    int *return_arr = sort_fun();
    for(int i=0; i<n; i++){
        cout << return_arr[i] << " ";
    }
}