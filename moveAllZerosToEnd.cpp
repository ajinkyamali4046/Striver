#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
    Input--->0,1,2,3,0,4,5

    Moving all zeros to end

    Output--->1,2,3,4,5,0,0

*/
void movingZeros(int arr[], int n)
{
    int zerosCount = 0;
    int nonzerocount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerosCount++;
        }
        else
        {
            nonzerocount++;
        }
    }
    int zerosCountArr[zerosCount];
    int nonZeroCountArr[nonzerocount];
    int k = 0;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerosCountArr[m] = arr[i];
            m++;
            // cout<<zerosCountArr[i]<<" ";
        }
        else
        {
            nonZeroCountArr[k] = arr[i];
            k++;
        }
    }
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < nonzerocount)
        {
            cout << nonZeroCountArr[i] << " ";
        }
        else
        {
            cout << zerosCountArr[l] << " ";
            l++;
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

    movingZeros(arr, n);
    return 0;
}