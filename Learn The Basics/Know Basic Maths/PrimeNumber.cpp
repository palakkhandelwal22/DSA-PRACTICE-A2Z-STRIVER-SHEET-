#include <iostream>
using namespace std;
int Prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count < 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    Prime(n);
}