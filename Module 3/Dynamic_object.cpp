#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

    }
};
int main(){
    Student s1(45,5,3.2); //static object
    Student* s2 = new Student(2,3,3.4); //dynamic object
    cout << s1.roll <<" "<<s1.cls << " " << s1.gpa << endl;
    cout << s2->roll << " " << s2->cls << " " << s2->gpa << endl;

}