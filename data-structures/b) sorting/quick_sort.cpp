#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);

    return j;
}

void quickSortHelper(int *arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quickSortHelper(arr, low, partitionIndex - 1);
        quickSortHelper(arr, partitionIndex + 1, high);
    }
}

void quickSort(int *arr, int n)
{
    quickSortHelper(arr, 0, n-1);
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    // vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array before sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, n);

    cout << "Array after sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}