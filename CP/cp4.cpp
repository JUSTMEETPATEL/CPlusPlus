#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
        if (arr[i] != 0)
        {
            if (i <= k)
            {
                count++;
            }

            else if (arr[i] == arr[k])
            {
                count++;
            }
        }
    }
    cout << count;
}