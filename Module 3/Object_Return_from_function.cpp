#include<bits/stdc++.h>
using namespace std;
class Student{
    public : 
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun(){
    Student Karim(2,5,5.0);
    return Karim;
}
int main(){
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa;
}