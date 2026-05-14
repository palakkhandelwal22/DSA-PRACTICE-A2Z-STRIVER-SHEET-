#include <iostream>
using namespace std;
int Armstrong(int n)
{
    int orig = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if (sum == orig)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }
}
    int main()
    {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        Armstrong(n);
    }