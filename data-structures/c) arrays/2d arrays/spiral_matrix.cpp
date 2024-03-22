#include <bits/stdc++.h>
using namespace std;

#define VV vector<vector< int > >

vector<int> spiralMatrix(vector<vector<int > > &mat) {
    vector<int> res;

    int row = mat[0].size();
    int col = mat.size();
    int top=0, right=mat[0].size()-1, left=0, bottom=mat.size()-1;

    while(top<=bottom && left<=right) {
        // traverse left to right
        for(int i=left; i<=right; i++) {
            res.push_back(mat[top][i]);
        }
        top++;

        // traverse top to bottom
        for(int i=top; i<=bottom; i++) {
            res.push_back(mat[i][right]);
        }
        right--;

        // traverse right to left
        if(left <= right) {
            for(int i=right; i>=left; i--) {
                res.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // traverse left row
        if(top <= bottom) {
            for(int i=bottom; i>=top; i--) {
                res.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return res;
}

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

int main() {
    int m, n;
    cin >> m >> n;

    VV mat(m, vector<int>(n));

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> res = spiralMatrix(mat);

    cout << "Original Matrix" << endl;
    displayMatrix(mat);

    int idx = 0;
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            mat[i][j] = res[idx];
            idx++;
        }
    }

    cout << "Spiral Matrix" << endl;
    displayMatrix(mat);

    cout << "Spiral Flat Array" << endl;
    for(int i=0; i<res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}