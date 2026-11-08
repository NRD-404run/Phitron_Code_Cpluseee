#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    s.push_back('D'); //push mane last e akta ch add kora
                     //push akta ch kora jai multiple ch 
                      //and string kora jai na
                    
    cout << s << endl; 
    string s2 = "hello";
    //s2[5] ='s';//aybhabe array size er moddhe ch change kora jai 
                 //beshi hole add kore print korte pare nah
    s2 += 'N'; //aybabe add kora jai push use na kore
    cout << s2 << endl;

    string s3 = "Durjoy";
    s3.pop_back(); //pop mane last ch delete hobe
    cout << s3 << endl;
    s3.pop_back(); 
    cout << s3 << endl;
    
}