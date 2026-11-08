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
    Student durjoy(2,5,3.3);
    Student* p = &durjoy;
    return p;
}
int main(){
    Student* p = fun();
    cout << p->roll << " " <<p->cls << " " << p->gpa << endl;
}