#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int bangla_marks;
    int cls;
};
bool cmp(Student l, Student r)
{
    if (l.math_marks + l.bangla_marks > r.math_marks + r.bangla_marks)
    {
        return true;
    }
    else if (l.math_marks + l.bangla_marks == r.math_marks + r.bangla_marks)
    {
        return l.roll < r.roll ;
        
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].math_marks >> a[i].bangla_marks >> a[i].cls;
    }
    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].section << " " << a[i].math_marks << " " << a[i].bangla_marks << " " << a[i].cls << endl;
    }
    return 0;
}