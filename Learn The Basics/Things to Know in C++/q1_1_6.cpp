#include <iostream>
using namespace std;
int main()
{
    int low, high;
    cout << "Enter lower value: ";
    cin >> low;
    cout << "Enter higher value:";
    cin >> high;
    int sum = 0;
    for (int i = low; i <= high; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is : " << sum;
    return 0;
}