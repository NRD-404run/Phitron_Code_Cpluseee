#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
    string name;
    int roll;
    char section;
    int math_marks;
    int english_marks;
    int cls;
};
int main()
{
    int n;
    cin >> n;
    Student *a = new Student[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].math_marks >> a[i].english_marks >> a[i].cls ;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].section << " " << a[i].math_marks << " " << a[i].english_marks << " " << a[i].cls << endl;
    }
    delete[] a;
    return 0;
}