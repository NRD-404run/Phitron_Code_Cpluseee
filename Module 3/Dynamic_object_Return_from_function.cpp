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
Student* fun(){
    Student* durjoy = new Student(3 ,9,4.86);
    return durjoy;
}
int main(){
    Student* p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
}