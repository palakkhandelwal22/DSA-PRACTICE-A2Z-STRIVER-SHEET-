#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a digit (0 to 9) : ";
    int d;
    cin >> d;
    int i = 1;
    int sum = 0;
    while (i <= 50)
    {
        sum = sum + d;
        d = d + 10;
        i++;
    }
    cout << "Sum is : " << sum;
    return 0;
}