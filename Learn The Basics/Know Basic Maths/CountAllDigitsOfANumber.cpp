#include <iostream>
using namespace std;
int CountDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "Number of digits are :" << count;
}
int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    CountDigits(n);
}