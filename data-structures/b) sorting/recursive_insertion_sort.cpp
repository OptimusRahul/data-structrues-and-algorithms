#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int i, int n)
{
    if (i == n)
        return;

    for (int j = i; j > 0; j--)
    {
        if (arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
        }
    }

    insertion_sort(arr, i+1, n);
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

    cout << "Array before sorting : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    insertion_sort(arr, 0, n);

    cout << "Array after sorting : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}