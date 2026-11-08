#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};
int main(){
    int n;
    cin >> n;
    //Student topper;
    for(int i=1; i<=n; i++){
        Student temp;
        cin >>  temp.name >> temp.roll >> temp.section >> temp.math_marks >> temp.cls;
        cout <<  temp.name << " " << temp.roll << " " << temp.section << " " << temp.math_marks << " " << temp.cls << endl;
        
    }

}