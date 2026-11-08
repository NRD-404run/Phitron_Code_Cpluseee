#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i=0, j=n-1; 
    int palindrome = 1;
    while(i<j){
        if(arr[i] != arr[j]){
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(palindrome == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}