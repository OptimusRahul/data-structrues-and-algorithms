#include <bits/stdc++.h>
using namespace std;

// void helper(long long start, long long n, long long &sum)
// {
//     if (start > n)
//         return;
//     sum += start;
//     return helper(start + 1, n, sum);
// }

// long long sumFirstN(long long n)
// {
//     long long sum = 0;
//     helper(1, n, sum);
//     return sum;
// }

// long long sumFirstN(long long n)
// {
//     if(n == 0) {
//         return 0;
//     }
    
//     return n + sumFirstN(n-1);
// }

long long sumFirstN(long long n)
{
    if(n == 0) {
        return 0;
    }
    
    return (n * (n + 1)) / 2;
}

int main()
{
    long long n;
    cin >> n;

    cout << sumFirstN(n) << endl;
}