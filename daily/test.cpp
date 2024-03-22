#include <bits/stdc++.h>
using namespace std;

// not the optimal code

// int sumOfDigits(int n)
// {
//     int num = n, sum = 0;
//     while (num > 0)
//     {
//         int l = num % 10;
//         sum += l;
//         num /= 10;
//     }
//     return sum;
// }

// string smallestNumber(int n, int k)
// {
//     // Write your code here
//     for (int i = 0; i < pow(10, n); i++)
//     {
//         int sum = sumOfDigits(i);
//         if (sum == k && to_string(i).length() == n)
//         {
//             return to_string(i);
//         }
//     }

//     return "-1";
// }

// string smallestNumber(int N, int K)
// {
//     vector<int> res;
//     int limit = pow(10, N);
//     for (int i = 0; i < limit; i++)
//     {
//         if (sumOfDigits(i) == K)
//         {
//             res.push_back(i);
//         }
//     }

//     for (int i = 0; i < res.size(); i++) {
//         if(to_string(res[i]).length() == N) {
//             return to_string(res[i]);
//         }
//     }

//     return "-1";
// }

int main()
{
    int T;
    cin >> T; // Number of test cases

    for (int t = 0; t < T; ++t)
    {
        int N, K;
        cin >> N >> K;

        string result = smallestNumber(N, K);
        cout << result << endl;
    }

    return 0;
}

5
2 2
3 12
21 3
3 10
4 90