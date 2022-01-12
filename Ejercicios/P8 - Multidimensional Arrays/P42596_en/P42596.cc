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
    minimum = mat[0][0];
    maximum = mat[0][0];

    int rows = mat.size();
    int columns = mat[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (mat[i][j] < minimum)
                minimum = mat[i][j];

            if (mat[i][j] > maximum)
                maximum = mat[i][j];
        }
    }
}


int main() {
    int rows, columns, diff = 0, matrix = 1, counter = 0;

    while (cin >> rows >> columns) {
        ++counter;

        Matrix data = read_data(rows, columns);
        int min, max;

        min_max(data, min, max);

        if (max - min > diff) {
            diff = max - min;
            matrix = counter;
        }
    }

    cout << "la diferencia maxima es " << diff << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << matrix << endl;
}