#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].math_marks >> a[i].cls;
    }
    Student topper;
    topper.math_marks = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].math_marks > topper.math_marks)
        {
            topper = a[i];
        }
        else if (a[i].math_marks == topper.math_marks)
        {
            if (a[i].roll < topper.roll)
            {
                topper = a[i];
            }
        }
    }
    cout << topper.name << " " << topper.roll << " " << topper.section << " " << topper.math_marks << " " << topper.cls;
    return 0;
}