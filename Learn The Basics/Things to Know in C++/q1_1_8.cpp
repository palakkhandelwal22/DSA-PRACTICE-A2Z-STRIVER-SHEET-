#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of array : ";
    int n;
    cin >> n;
    cout << "Enter the elements: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    return 0;
}