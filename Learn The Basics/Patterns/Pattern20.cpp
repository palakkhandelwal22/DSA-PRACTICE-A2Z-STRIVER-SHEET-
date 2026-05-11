// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // upper half
    int nsp = 2 * n - 2;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= nst; i++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        nsp -= 2;
        nst++;
        cout << endl;
    }
    // lower half
    nsp = 2;
    nst = n - 1;
    for (int i = 1; i < n; i++)
    {
        for (int i = 1; i <= nst; i++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        nsp += 2;
        nst--;
        cout << endl;
    }
}