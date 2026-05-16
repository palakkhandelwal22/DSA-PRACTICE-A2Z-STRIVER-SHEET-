#include <iostream>
using namespace std;
int Divisors(int n)
{
    cout << "Divisors are :";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    Divisors(n);
}