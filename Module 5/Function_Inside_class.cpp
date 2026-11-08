#include<bits/stdc++.h>
using namespace std;
class Student{
    public : 
    string name; 
    int roll ;
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout << "Hello";
    }
};
int main(){
   Student durjoy("Naimur Rahman Durjoy", 1110);
   cout << durjoy.name << " " <<durjoy.roll << endl;
   durjoy.hello();

}