#include <iostream>
using namespace std;
void studentGrade(int marks)
{
    if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 70)
        cout << "Grade B";
    else if (marks >= 50)
        cout << "Grade C";
    else if (marks >= 35)
        cout << "Grade D";
    else
        cout << "Fail";
}
int main()
{
    int marks;
    cout << "Enter Marks:";
    cin >> marks;
    studentGrade(marks);
}