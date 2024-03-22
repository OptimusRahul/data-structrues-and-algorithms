#include <bits/stdc++.h>
using namespace std;

#define VV vector<vector< int > >


void displayMatrix(vector<vector<int> > &mat) {
    int col = mat.size();
    int row = mat[0].size();

    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

void rotateMatrix(vector<vector<int > > &mat) {
    int size = mat[0].size()-1;

    VV rotate(size+1, vector<int>(size+1));

    for(int i=0; i<=size; i++) {
        for(int j=0; j<=size; j++) {
            rotate[j][size-i] = mat[i][j];
        }
    }

    for(int i=0; i<=size; i++) {
        for(int j=0; j<=size; j++) {
            mat[i][j] = rotate[i][j];
        }
    }
}


void optimalRotateMatrix(VV &mat) {
    int size = mat.size();
    
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    cout << "Transpose Matrix" << endl;
    displayMatrix(mat);

    for(int i=0; i<size; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }

    cout << "Rotated matrix" << endl;
    displayMatrix(mat);

}

int main() {
    int m, n;
    cin >> m >> n;

    VV mat(m, vector<int>(n));

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    // cout << "Original Matrix" << endl;
    // displayMatrix(mat);

    // rotateMatrix(mat);

    // cout << "Rotated Matrix" << endl;
    // displayMatrix(mat);

    optimalRotateMatrix(mat);

    return 0;
}