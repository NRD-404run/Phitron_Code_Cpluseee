#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello"; //1st type string naoar
    cout << s << endl; 
    string s1("Heelo"); //2nd type string naoar
    cout << s1 << endl;
    string s2("Hello Naimur",7); //3rd type string nisi then size nisi
    cout << s2 << endl;
    string s3 = "Hello Durjoy";
    string t(s3,2); //4th type string nisi then arekta constructor nisi t
                    //oi t diye s3 call korsi and size disi but oi size ta falai dai 1st er theke
    cout << t << endl;
    string s4(5,'D'); //5th tye size nisi the character 
    cout << s4 << endl;
}