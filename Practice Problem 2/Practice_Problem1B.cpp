#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name,int roll,char section, int math_marks,int cls){
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main(){
    Student* s1 = new Student("Durjoy",1110,'B',78,5);
    Student* s2 = new Student("Rasel",1111,'B',79,5);
    Student* s3 = new Student("Opu",1183,'B',79,5);
    if(s1->math_marks == s3->math_marks){
        if(s1->roll < s3->roll){
            cout << s1->name;
        }else {
            cout << s3->name;
        }
    } else if(s1->math_marks == s3->math_marks){
        if(s1->roll < s3->roll){
            cout << s1->name;
        }else {
            cout << s3->name;
        }
    }
    //else if(s2->math_marks == s3->math_marks)
    else{
        if(s2->roll < s3->roll){
            cout << s2->name;
        }else{
            cout << s3->name;
        }
    }
}