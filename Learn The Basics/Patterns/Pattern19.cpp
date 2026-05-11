// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the value of n : ";
    cin >> n;
    // upper half
    int nsp = 2;
    int nst = n - 1;
    for (int i = 1; i <= 2 * n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        for (int q = 1; q <= nst; q++)
        {
            cout << "* ";
        }
        nst--;
        nsp += 2;
        cout << endl;
    }
    // lower half
    int nspp = 2 * n - 2;
    int nstt = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= nstt; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= nspp; k++)
        {
            cout << "  ";
        }
        for (int q = 1; q <= nstt; q++)
        {
            cout << "* ";
        }
        nstt++;
        nspp -= 2;
        cout << endl;
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        cout << "* ";
    }
    cout << endl;
}