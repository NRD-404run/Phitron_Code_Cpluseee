#include<bits/stdc++.h>
using namespace std;
int n;
int *sort_fun(){
    cin>>n;
    int* arr =new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    return arr;
}
int main(){
    int *return_arr =  sort_fun();
    for(int i=0; i<n; i++){
        cout << return_arr[i] << " ";
    }
    delete[] return_arr; //return_array delet kora hoise
                        //because static emni delet hoi
                        //dynamic hoi nah delete korte hoi

}