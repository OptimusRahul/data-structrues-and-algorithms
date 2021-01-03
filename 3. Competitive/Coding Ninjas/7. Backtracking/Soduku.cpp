#include <bits/stdc++.h>
using namespace std;

#define N 9

bool findEmptyLocation(int board[N][N], int &row, int &col) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(board[i][j] == 0) {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

bool isSafeInRow(int board[N][N], int row, int num) {
    for(int i=0; i<N; i++) {
        if(board[row][i] == num) {
            return false;
        }
    }
    return true;
}

bool isSafeInCol(int board[N][N], int col, int num) {
    for(int j=0; j<N; j++) {
        if(board[j][col] == num) {
            return false;
        }
    }
    return true;
}

bool isSafeInGrid(int board[N][N], int row, int col, int num) {
    int rowFactor = row - (row%3);
    int colFactor = col - (col%3);

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(board[i+rowFactor][j+colFactor] == num){
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int board[N][N], int row, int col, int num) {
    if(isSafeInRow(board, row, num) && isSafeInCol(board, col, num) && isSafeInGrid(board, row, col, num)) {
        return true;
    }
    return false;
}

bool solveSoduku(int board[N][N]) {
    int row, col;
    if(!findEmptyLocation(board, row, col)) {
        return true;
    }

    for(int i=0; i<=N; i++) {
        if(isSafe(board, row, col, i)) {
            board[row][col] = i;
            if(solveSoduku(board)) {
                return true;
            }
            board[row][col] = false;
        } 
    }

    return false;
}

int main() {
    int board[N][N];    
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        for(int j=0; j<s.length(); j++) {
            board[i][j] = s[j] - '0';
        }
    }

    solveSoduku(board);
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    return 0;
}