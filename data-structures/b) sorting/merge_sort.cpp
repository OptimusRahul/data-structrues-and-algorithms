#include <bits/stdc++.h>
using namespace std;


// void merge(int *arr, int low, int mid, int high)
// {
//     int i, j, k;
//     int sizeL = mid - low + 1;
//     int sizeR = high - mid;

//     int L[sizeL], R[sizeR];

//     for (i = 0; i < sizeL; i++)
//         L[i] = arr[low + i];
//     for (j = 0; j < sizeR; j++)
//         R[j] = arr[mid + 1 + j];

//     i = 0;
//     j = 0;
//     k = low;

//     while (i < sizeL && j < sizeR)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k++] = L[i++];
//         }
//         else
//         {
//             arr[k++] = R[j++];
//         }
//     }

//     while (i < sizeL)
//     {
//         arr[k++] = L[i++];
//     }

//     while (j < sizeR)
//     {

//         arr[k++] = R[j++];
//     }
// }

// void mergeSortHelper(int *arr, int low, int high)
// {
//     if (low < high)
//     {
//         int mid = (low + high) / 2;
//         mergeSortHelper(arr, low, mid);
//         mergeSortHelper(arr, mid + 1, high);
//         merge(arr, low, mid, high);
//     }
// }

// void merge(int *arr, int low, int mid, int high)
// {
//     int size = high - low + 1;
//     int temp[size];
//     int left = low, right = mid + 1;
//     int i = 0;
//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp[i] = arr[left];
//             i++;
//             left++;
//         }
//         else
//         {
//             temp[i] = arr[right];
//             i++;
//             right++;
//         }
//     }

//     while (left <= mid)
//     {
//         temp[i] = arr[left];
//         i++;
//         left++;
//     }

//     while (right <= high)
//     {
//         temp[i] = arr[right];
//         i++;
//         right++;
//     }

//     for (int j = 0; j < size; j++)
//     {
//         arr[low + j] = temp[j];
//     }
// }

void merge(vector<int> &arr, int l, int m, int r)
{
    vector<int> temp;
    int left = l, right = m + 1;

    while (left <= m && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= m)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= r)
    {
        temp.push_back(arr[right++]);
    }

    for (int j = 0; j < temp.size(); j++)
    {
        arr[l + j] = temp[j];
    }
}

void mergeSortHelper(vector<int> &arr, int l, int r)
{
    if (l == r)
        return;
    int m = (l + r) / 2;
    mergeSortHelper(arr, l, m);
    mergeSortHelper(arr, m + 1, r);
    merge(arr, l, m, r);
}

void mergeSort(vector<int> &arr, int n)
{
    mergeSortHelper(arr, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;

    // int *arr = new int[n];
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array before sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, n);

    cout << "Array after sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}