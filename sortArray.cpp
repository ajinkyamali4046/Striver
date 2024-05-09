#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void arraySorting(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
        else
        {
            twoCount++;
        }
    }
    int z = 0, o = 0, t = 0;

    int zeroArr[zeroCount];
    int oneArr[oneCount];
    int twoArr[twoCount];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroArr[z] = arr[i];
            z++;
        }
        else if (arr[i] == 1)
        {
            oneArr[o] = arr[i];
            o++;
        }
        else
        {
            twoArr[t] = arr[i];
            t++;
        }
    }
    for (int i = 0; i < zeroCount; i++)
    {
        cout << zeroArr[i]<<" ";
    }
    for (int i = 0; i < oneCount; i++)
    {
        cout << oneArr[i]<<" ";
    }
    for (int i = 0; i < twoCount; i++)
    {
        cout << twoArr[i]<<" ";
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

    arraySorting(arr, n);

    return 0;
}