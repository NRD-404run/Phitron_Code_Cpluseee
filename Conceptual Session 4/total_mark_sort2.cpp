#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int bangla_marks;
    int english_marks;
    int physics_marks;
    int ict_marks;
    int cls;
};
bool cmp(Student l,Student r){
    int sum1 = l.math_marks + l.bangla_marks + l.english_marks + l.physics_marks + l.ict_marks;
    int sum2 = r.math_marks + r.bangla_marks + r.english_marks + r.physics_marks + r.ict_marks;
    if(sum1 > sum2){
        return true;
    }else if(sum1 == sum2){
        return l.roll < r.roll;
    }else{
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
        cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].math_marks >> a[i].bangla_marks >> a[i].english_marks >> a[i].physics_marks >> a[i].ict_marks >> a[i].cls;
    }
    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].section << " " << a[i].math_marks << " " << a[i].bangla_marks << " " << a[i].english_marks <<  " " << a[i].physics_marks << " " << a[i].ict_marks << " " << a[i].cls << endl;
    }
    return 0;
}