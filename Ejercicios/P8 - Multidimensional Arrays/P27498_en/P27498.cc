/*
 * transpose a matrix
*/

#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> row;
typedef vector<row> Matrix;


/*
 * Precondition:
 *      a is an integer
 *      b is an integer
 *
 * Postcondition:
 *      a = b
 *      b = a
*/
void swap(int& a, int& b) {
    int aux = a;

    a = b;
    b = aux;
}

/*
 * Precondition:
 *      A matrix nxn
 *
 * Postcondition:
 *      The same matrix transposed
*/
void transpose(Matrix& m) {
    int mNum = m.size();
    for (int i = 0; i < mNum; ++i) {
        for (int j = 1 + i; j < mNum; ++j) {
            swap(m[i][j], m[j][i]);
        }
    }
}


/*
 * Precondition;
 *      ---
 *
 * Postcondition:
 *      A matrix nxn
*/
Matrix read_data() {
    int n;
    cin >> n;

    Matrix m(n, row(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;

            m[i][j] = num;
        }
    }

    return m;
}


/*
 * Prints a matrix
*/
void print_data(const Matrix& data) {
    int n = data.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << data[i][j] << ' ';
        }
        cout << endl;
    }
}


int main() {
    Matrix m = read_data();
    transpose(m);

    print_data(m);
}
