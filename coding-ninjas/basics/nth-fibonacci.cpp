#include <bits/stdc++.h> 
using namespace std;

void multiplyMatrix(int a[3][3], int b[3][3]) {
    int mul[3][3];
    const unsigned int M = 1000000007;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            mul[i][j] = 0;
            for(int k=0; k<3; k++) {
                mul[i][j] = mul[i][j] + (((a[i][k] % M) * (b[k][j]) % M)) ;
            }
        }
    }

    // store
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            a[i][j] = mul[i][j];
        }
    }
}

int power(int F[3][3], int n) {
    int M[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}};

    if(n==1) {
        return F[0][0] + F[0][1];
    }

    power(F, n/2);

    multiplyMatrix(F, F);

    if(n%2 != 0) {
        multiplyMatrix(F, M);
    }

    return F[0][0] + F[0][1];
}

int fibonacciNumber(int n){
    int F[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}};
    const unsigned int M = 1000000007;
    if(n==0) {
        return 0;
    }

    if(n==1 || n==2) {
        return 1;
    }

    return power(F, n-3) % M;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacciNumber(n) << endl;

    return 0;
}