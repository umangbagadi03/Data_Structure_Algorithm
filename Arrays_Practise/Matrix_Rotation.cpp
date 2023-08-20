// Matrix Rotation - Given a matrix, rotate the matrix 90 degrees clockwise.

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotateMatrix90Clockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> rotated(m, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }

    return rotated;
}

int main() {
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> rotated_matrix1 = rotateMatrix90Clockwise(matrix1);
    for (const auto& row : rotated_matrix1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<vector<int>> matrix2 = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    vector<vector<int>> rotated_matrix2 = rotateMatrix90Clockwise(matrix2);
    for (const auto& row : rotated_matrix2) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
