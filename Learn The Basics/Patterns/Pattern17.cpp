// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int nsp=n-1;
    for (int i = 1; i <= n; i++)
    {
        
        for(int j=1;j<=nsp;j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int q = 1; q <= i; q++)
        {
            cout << char(q + 64) << " ";
        }
        int a=i-1;
        for (int k = 1; k <= i-1; k++)
        {
            cout << char(a+64) << " ";
            a--;
        }
        cout << endl;
    }
}