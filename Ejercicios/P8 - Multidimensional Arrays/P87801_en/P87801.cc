#include <iostream>
#include <vector>

using namespace std;

typedef vector<char> rowChar;
typedef vector<rowChar> matrixChar;
typedef vector<int> rowInt;
typedef vector<rowInt> matrixInt;


matrixChar get_matrix_char(int x, int y) {
    matrixChar data(y, rowChar(x));

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> data[i][j];
        }
    }

    return data;
}


void print_matrix_char(matrixChar& data) {
    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data[0].size(); ++j) {
            cout << data[i][j] << ' ';
        }

        cout << endl;
    }
}

matrixInt get_matrix_int(int x, int y) {
    matrixInt data(y, rowInt(x));

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> data[i][j];
        }
    }

    return data;
}


void print_matrix_int(matrixInt& data) {
    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data[0].size(); ++j) {
            cout << data[i][j] << ' ';
        }

        cout << endl;
    }
}

int get_num(const matrixChar& letters, const matrixInt& values, const
string& word) {
    int x = letters[0].size(), y = letters.size();
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            
        }
    }
}


int main() {
    int y, x;

    cin >> y >> x;

    matrixChar letters = get_matrix_char(x, y);
    print_matrix_char(letters);

    matrixInt values = get_matrix_int(x, y);
    print_matrix_int(values);

    int num;
    cin >> num;

    for (int i = 0; i < num; ++i) {
        string word;
        cin >> word;

        int value = get_num(letters, values, word);
    }

    
}