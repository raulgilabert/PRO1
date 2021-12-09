/*
 * Read a matrix from the user and then an undetermined quantity of function
 * to execute:
 *  - row (num):
 *      Prints the row at the position inputted
 *  - column (num):
 *      Prints the column at the position inputted
 *  - element (x) (y):
 *      Prints the element at the position inputted
*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> row;
typedef vector<row> matrix;

/*
 * Precondition:
 *      ---
 *
 * Postcondition:
 *      Returns the matrix read from the user
*/
matrix read_data() {
    // Read rows and columns
    int rows, columns;
    cin >> rows >> columns;

    matrix data(rows, row(columns));

    // Read the matrix
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j) {
            int num;
            cin >> num;

            data[i][j] = num;
        }

    return data;
}


/*
 * Prints a row from the matrix
 *
 * Precondition:
 *      A matrix of integers
 *
 * Postcondition:
 *      ---
*/
void print_row(const matrix& data) {
    int rowNum;
    cin >> rowNum;

    cout << "row " << rowNum << ':';
    --rowNum;

    int rowSize = data[rowNum].size();

    for (int i = 0; i < rowSize; ++i)
        cout << ' ' << data[rowNum][i];
}


/*
 * Prints a column from the matrix
 *
 * Precondition:
 *      A matrix of integers
 *
 * Postcondition:
 *      ---
*/
void print_column(const matrix& data) {
    int columnNum;
    cin >> columnNum;

    cout << "column " << columnNum << ':';
    --columnNum;

    int columnSize = data.size();

    for (int i = 0; i < columnSize; ++i)
        cout << ' ' << data[i][columnNum];
}


/*
 * Prints an element from the matrix
 *
 * Precondition:
 *      A matrix of integers
 *
 * Postcondition:
 *      ---
*/
void print_element(const matrix& data) {
    int rowNum, columnNum;
    cin >> rowNum >> columnNum;

    cout << "element " << rowNum << ' ' << columnNum << ": " <<
        data[rowNum - 1][columnNum - 1];
}


int main() {
    matrix data = read_data();

    // Execute the print function
    string function;
    while (cin >> function) {
        if (function == "row")
            print_row(data);

        else if (function == "column")
            print_column(data);

        else
            print_element(data);

        cout << endl;
    }

}
