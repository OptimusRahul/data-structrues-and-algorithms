#include <bits/stdc++.h>
using namespace std;

int *printDivisors(int n, int &size)
{
    // Write your code here
    vector<int> divisor;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisor.push_back(i);
    }

    size = divisor.size();
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = divisor[i];
    }

    return arr;
}

void printDivisorOptimal(int n)
{
    cout << endl;
    cout << "Divisors of " << n << " are: ";

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int size;
    int *result = printDivisors(n, size);

    cout << "Divisors of " << n << " are: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    printDivisorOptimal(n);
    cout << endl;

    delete[] result; // Remember to deallocate memory

    return 0;
}