#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    cout << s.size() <<endl; //string er object s oita call kore
                     //Built-in-function size call kore string
                     //length print kora hoi
                    
    cout << s.max_size() << endl; // locally er size max 10^6 porjonto rakha jai
                        // globally 10^7 porjonto rakha jai
                        
    cout << s.capacity() << endl; //string er capacity print kore

    s.clear(); //clear function full string delet kore
    cout << s.size() << endl; // size print korle 0 ashe 
}   