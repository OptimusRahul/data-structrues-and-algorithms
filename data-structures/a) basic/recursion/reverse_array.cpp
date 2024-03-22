#include <bits/stdc++.h>
using namespace std;

// void helper(int end, vector<int> &nums, vector<int> &rev)
// {
//     if (end < 0)
//         return;
//     rev.push_back(nums[end]);
//     return helper(end - 1, nums, rev);
// }

// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     // Write your code here.
//     vector<int> rev;
//     helper(n - 1, nums, rev);
//     return rev;
// }

void helper(int start, int end, vector<int> &rev)
{
    if (start >= end / 2)
        return;
    swap(rev[start], rev[end - start - 1]);
    helper(start + 1, end, rev);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    helper(0, n, nums);
    return nums;
}

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
    where n is the size of the input array.
*/

// // Recursive function to reverse the array elements between 'start' and 'end' indices.
// void reverseArray(int start, int end, vector<int> &nums)
// {
//     // Base case: If 'end' is less than 'start', the array is already reversed.
//     if (start > end)
//         return;

//     // Swapping the elements at 'start' and 'end' indices.
//     swap(nums[start], nums[end]);

//     // Recursively call the function to reverse the remaining elements.
//     return reverseArray(start + 1, end - 1, nums);
// }

// // Function to reverse the elements of the given array 'nums'.
// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     // Calling the recursive function to reverse the array.
//     reverseArray(0, n - 1, nums);

//     // Returning the reversed array.
//     return nums;
// }

// // for loop
// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     // Create a new vector to store the reversed elements.
//     vector<int> reversedArray(n);

//     // Traverse the original array in reverse order and store the elements in the new array.
//     for (int i = n - 1; i >= 0; i--)
//     {
//         reversedArray[n - i - 1] = nums[i];
//     }

//     // Returning the reversed array.
//     return reversedArray;
// }

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
    where n is the size of the input array.
*/

// // Function to reverse the elements of the given array 'arr'.
// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     // Initialize two pointers, left and right,
//     // pointing to the first and last indices of the array, respectively.
//     int left = 0, right = n - 1;

//     // Iterate until left crosses right.
//     while (left < right)
//     {
//         // Swap the elements at positions left and right.
//         swap(nums[left], nums[right]);

//         // Move left one step forward.
//         left++;

//         // Move right one step backward.
//         right--;
//     }

//     // Returning the reversed array.
//     return nums;
// }

// /*
//     Time Complexity : O(n)
//     Space Complexity : O(1)
//     where n is size of input array
// */

// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     // Reverse the elements in the vector using the reverse function.
//     // The reverse function takes two iterators representing the range of elements to be reversed.
//     reverse(nums.begin(), nums.end());
//     // In this case, nums.begin() represents the iterator pointing to the first element of the vector.
//     // nums.end() represents the iterator pointing to the element just past the end of the vector.

//     // Return the reversed vector.
//     return nums;
// }

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before reverse : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ] " << endl;

    arr = reverseArray(n, arr);

    cout << "After reverse : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ] " << endl;
}