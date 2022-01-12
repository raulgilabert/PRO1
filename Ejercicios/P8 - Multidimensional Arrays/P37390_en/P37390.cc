#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> row;
typedef vector<row> Matrix;


Matrix product(const Matrix& a, const Matrix& b) {
    int n = a.size();
    Matrix c(n, row(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int sum = 0;

            for (int k = 0; k < n; ++k) {
                sum += a[i][k] * b[k][j];
            }

            c[i][j] = sum;
        }
    }

    return c;
}


