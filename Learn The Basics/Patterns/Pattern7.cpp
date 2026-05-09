// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nsp--;
        nst += 2;
        cout << endl;
    }
}