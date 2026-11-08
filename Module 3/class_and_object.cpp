#include<bits/stdc++.h>
using namespace std;
class Student{
    public : 
    char name[100];
    int roll;
    double gpa;
};
int main(){
    Student a;
    a.roll = 1110;
    a.gpa = 3.87;
    char temp[100] = "Durjoy";
    strcpy(a.name , temp);
    cout << a.name << " "  << a.roll << " "<< a.gpa <<endl;
}