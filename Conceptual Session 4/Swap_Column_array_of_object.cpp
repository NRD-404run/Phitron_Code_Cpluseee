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
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].math_marks >> a[i].cls;
    }
    int i=0,j=n-1;
    while (i<j)
    {
        swap(a[i].math_marks , a[j].math_marks);
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].section << " " << a[i].math_marks << " " << a[i].cls << endl;
    }
    
    return 0;
}