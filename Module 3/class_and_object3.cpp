#include<bits/stdc++.h>
using namespace std;
class Student{
    public : 
    char name[100];
    int id ; 
    double cgpa;
};
int main(){
    Student a,b;
    cin.getline(a.name,100);
    cin >> a.id >> a.cgpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin >> b.id >> b.cgpa;

    cout << a.name << " " << a.id << " " << a.cgpa << endl;
    cout << b.name << " " << b.id << " " << b.cgpa << endl;

}