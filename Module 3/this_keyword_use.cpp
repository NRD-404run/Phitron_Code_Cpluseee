#include<bits/stdc++.h>
using namespace std;
class Student{
    public : 
    int roll;
    int cls;
    double gpa;
    Student(int roll , int cls , double gpa){
        (*this).roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    } 
};
int main(){
    Student Modon(45,5,3.3);
    Student Dodon(34, 3 , 4.3);
    cout << Modon.roll << " " << Modon.cls << " " << Modon.gpa << endl;
    cout << Dodon.roll << " " << Dodon.cls << " " << Dodon.gpa;
}