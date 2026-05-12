#include <iostream>
using namespace std;
int Reverse(int num)
{
    int rev = 0;
    while(num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << "Reversed Number is :" << rev;
}
int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    Reverse(n);
}