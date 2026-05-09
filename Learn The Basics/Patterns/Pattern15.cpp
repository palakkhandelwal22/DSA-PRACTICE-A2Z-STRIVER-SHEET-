// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }
}