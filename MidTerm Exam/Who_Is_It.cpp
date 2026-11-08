#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    string Name;
    char Section;
    int Total_Marks;
};
int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        Student topper;
        for (int i = 1; i <= 3; i++)
        {
            Student temp;
            cin >> temp.ID >> temp.Name >> temp.Section >> temp.Total_Marks;
            if (i == 1)
            {
                topper = temp;
            }
            else if (temp.Total_Marks > topper.Total_Marks)
            {
                topper = temp;
            }
            else if (topper.Total_Marks == temp.Total_Marks)
            {
                if (temp.ID < topper.ID)
                {
                    topper = temp;
                }
            }
        }
        cout << topper.ID << " " << topper.Name << " " << topper.Section << " " << topper.Total_Marks << endl;
    }
}