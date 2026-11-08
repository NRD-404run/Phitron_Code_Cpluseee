#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    int roll;
    int cls;
    double gpa;
};
int main(){
    Student durjoy;
    durjoy.roll = 1110;
    durjoy.cls = 3;
    durjoy.gpa = 3.87;

    Student modna;
    modna.roll = 1114;
    modna.cls = 4;
    modna.gpa = 3.34;
     cout << durjoy.roll << " " << durjoy.cls << " " << durjoy.gpa << endl;
     cout << modna.roll << " " << modna.cls << " " << modna.gpa ;
}