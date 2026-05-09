// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int nsp = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp -= 2;
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}