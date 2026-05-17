#include <iostream>
using namespace std;
int GCD(int num1, int num2)
{
    if (num1 > num2)
    {
        for (int i = num1; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                cout << "GCD of the two numbers is : " << i;
                break;
            }
        }
    }
    else if (num1 < num2)
    {
        for (int i = num2; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {

                cout << "GCD of the two numbers is : " << i;
                break;
            }
        }
    }
}
int main()
{
    int n1;
    cout << "Enter the value of n1 :";
    cin >> n1;
    int n2;
    cout << "Enter the value of n2 :";
    cin >> n2;
    GCD(n1, n2);
}