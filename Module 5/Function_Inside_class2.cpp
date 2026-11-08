#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    string name;
    int roll;
    Student(string name,int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout << "Hello from " << name << " "<< roll <<endl;
    }
};
int main(){
    Student durjoy("Naimur Rahman",1110);
    durjoy.hello();
    Student nirjon("Nohanur Rahman",1114);
    nirjon.hello();
}