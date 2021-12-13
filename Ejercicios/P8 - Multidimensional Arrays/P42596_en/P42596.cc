#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> row;
typedef vector<row> Matrix;


Matrix read_data(int rows, int columns) {
    Matrix data(rows, row(columns));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            int num;
            cin >> num;

            data[i][j] = num;
        }
    }

    return data;
}


void min_max(const Matrix& mat, int& minimum, int& maximum) {
    min = mat[0][0];
    max = mat[0][0];

    rows = mat.size();
    columns = mat[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (mat[i][j] < min)
                min = mat[i][j];

            if (mat[i][j] > max)
                max = mat[i][j];
        }
    }
}


int main() {
    int rows, columns, diff = 0;

    while (cin >> rows >> columns) {
        Matrix data = read_data(rows, columns);
        int min, max;

        min_max(data, min, max);


    }
}