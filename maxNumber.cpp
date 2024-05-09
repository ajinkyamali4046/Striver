#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void maxElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (j < i && arr[i] == arr[j])
            {
                break;
            }

            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            cout << "Number is : " << arr[i] << " and count is : " << count << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxElements(arr, n);
    return 0;
}