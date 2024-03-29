/*
 * * * * * *
 * *     * *
 *         *
 *         *
 * *     * *
 * * * * * *
 */

#include <iostream>
using namespace std;

/*
    Time Complexity : O( N*N )
    Space complexity: O( 1 )

    Where N is the given input integer.
*/

void symmetry(int n) {

    // Update n with 2*n

    n = 2*n ;

    // For loop 'row' in range 0 to N-1.
    for(int row = 0; row < n; row++) {

        // For loop 'col' in range 0 to N-1.
        for(int col = 0; col < n; col++) {

            // Condition for first half of the rows.
            if(row < n/2 && (col < (n/2 - row) || col >= (n/2 + row))) {
                cout << '*';
            }

            // Condition for the second half of the rows.
            else if(row >= n/2 && (col <= (row-n/2) || col >= (n-row+n/2-1))) {
                cout << '*';
            }

            else {
                cout << ' ';
            }

            cout << ' ';
        }

        // End the current row of the pattern.
        cout << '\n';
    }
}

// void symmetry(int n)
// {
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "*"
//                  << " ";
//         }

//         if (row > 0)
//         {
//             for (int space = 0; space < ((row + row) * 2); space++)
//             {
//                 cout << " ";
//             }
//         }

//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "*"
//                  << " ";
//         }

//         cout << endl;
//     }

//     for (int row = 0, t = n - 1; row < n; row++, t--)
//     {
//         for (int col = 0; col <= row; col++)
//         {
//             cout << "*" << " ";
//         }

//         if (row != n - 1)
//         {
//             for (int space = 0; space < ((t + t) * 2); space++)
//             {
//                 cout << " ";
//             }
//         }

//         for (int col = 0; col <= row; col++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;

    symmetry(n);
}