#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll , int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total(){
        cout << "Total marks of "<<name << " = " << math+english << endl;
    }
};
int main(){
    Student naimur("Naimur Rahman",1110,85,92);
    naimur.total();
    Student alamgir("Alamgir Hossain",1169,77,92);
    alamgir.total();
    Student asadullah("Asadullah Mollah",1123,34,55);
    asadullah.total();

}