/*
 * Check if n sudokus are correct solutions
*/


#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;


void read_data(Matrix& sudoku) {
    int rows = sudoku.size(), columns = sudoku[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            int num;
            cin >> num;

            sudoku[i][j] = num;
        }
    }
}

bool check_row(const Matrix& sudoku) {
    bool error = false;

    int i = 0;
    while (not error and i < 9) {
        vector<int> numbers(9, 0);

        int j = 0;
        while (not error and j < 9) {
            if (numbers[sudoku[i][j] - 1] == 0)
                ++numbers[sudoku[i][j] - 1];
            else
                error = true;

            ++j;
        }
        ++i;
    }
    return (not error);
}

bool check_column(const Matrix& sudoku) {
    bool error = false;

    int i = 0;
    while (not error and i < 9) {
        vector<int> numbers(9, 0);

        int j = 0;
        while (not error and j < 9) {
            if (numbers[sudoku[j][i] - 1] == 0)
                ++numbers[sudoku[j][i] - 1];
            else
                error = true;

            ++j;
        }
        ++i;
    }
    return (not error);
}

bool check_square(const Matrix& sudoku) {
    bool error = false;

    for (int i = 0; i < 9; ++i) {
        for (int j = 3*i; j < 3*(i + 1); ++j) {

        }
    }
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Matrix sudoku(9, Row(9));

        read_data(sudoku);

        if (check_row(sudoku) and check_column(sudoku) and check_square(sudoku))
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }
}