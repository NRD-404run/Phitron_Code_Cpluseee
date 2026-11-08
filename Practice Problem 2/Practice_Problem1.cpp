#include<bits/stdc++.h>
using namespace std;
class Student{
    public : 
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name,int roll,char section,int math_marks,int cls){
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main(){
    Student durjoy("Durjoy",1110,'B',90,14);
    Student alamgir("Alamgir",1169,'C',91,14);
    Student sifat("Sifat",1215,'C',92,14);
    //cout << durjoy.name << " " << durjoy.roll << " " << durjoy.section << " " << durjoy.math_marks << " " << durjoy.cls << endl;
    if(durjoy.math_marks>alamgir.math_marks && durjoy.math_marks>sifat.math_marks){
        cout << durjoy.name << endl;
    }
    else if(alamgir.math_marks>durjoy.math_marks && alamgir.math_marks>sifat.math_marks){
        cout << alamgir.name  << endl;
    }else{
        cout << sifat.name << endl;
    }
}