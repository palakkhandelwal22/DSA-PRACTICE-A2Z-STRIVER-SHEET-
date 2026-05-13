#include <iostream>
using namespace std;
int Palindrome(int num)
{
    int orig = num;
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (rev == orig)
    {
        cout << "It is a Palindrome Number";
    }
    else
    {
        cout << "It is not a Palindrome Number";
    }
}
int main()
{
    int n;
    cout << " Enter the value of n :";
    cin >> n;
    Palindrome(n);
}