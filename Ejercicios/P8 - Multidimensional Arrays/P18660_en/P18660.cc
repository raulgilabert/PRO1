#include <vector>
#include <iostream>

using namespace std;

typedef vector<char> row;
typedef vector<row> Matrix;

//
// Funcionamiento:
// 	Leer línea a línea, letra a letra, buscando la letra de inicio de cada
// 	palabra. Una vez encontrada esta, comprobar las posiciones: derecha,
// 	abajo y abajo a la derecha. Si es la siguiente letra de la palabra, en
// 	caso afirmativo seguir comprobando en esa dirección y si se ha encontrado
// 	la palabra marcarlas todas en mayúscula en la matriz a devolver.
//

//
// Datos de entrada:
// 	Un número indeterminado de conjuntos siguiendo la estructura de
// 		3 enteros:
// 			- Palabras a buscar
// 			- Filas de la matriz
// 			- Columnas de la matriz
//
// 		Palabras a buscar
//
// 		Matriz de letras
//

vector<string> read_words(int num) {
    vector<string> words(num);

    for (int i = 0; i < num; ++i) {
        cin >> words[i];
    }

    return words;
}

Matrix read_matrix(int y, int x) {
    Matrix data(y, row(x));

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> data[j][i];
        }
    }

    return data;
}

bool check_word(const Matrix& letters, const string& word, int x, int y,
                int dirX, int dirY) {
    int wordSize = word.size();

    int i = 1;
    bool nope = false;
    while (not nope and i < wordSize - 1) {
        x += dirX;
        y += dirY;

        if (letters[y][x] != word[i])
            nope = true;

        ++i;
    }

    return (not nope);
}

Matrix found_words(const Matrix& letters, const vector<string>& words) {
    Matrix letters_to_return = letters;

    int x = letters[0].size(), y = letters.size(), wSize = words.size();
    for (int i = 0; i < y; ++i) {
        // Read lines
        for (int j = 0; j < x; ++j) {
            // Read letters
            for (int k = 0; k < wSize; ++k) {
                // Check letter

                if (words[k][0] == letters[j][i]) {
                    // To right
                    if (check_word(letters, words[k], j, i,
                                   1, 0)) {
                        int wordSize = words[k].size();
                        for (int l = 0; l < wordSize; ++l) {
                            if (letters_to_return[i + l][j] < 'z' and
                            letters_to_return[i + l][j] > 'a')
                                letters_to_return[i + l][j] =
                                        letters_to_return[i + l][j] + 'A' - 'a';
                        }
                    }
                }
            }
        }
    }

    return letters_to_return;
}

void print_matrix(const Matrix& matrix) {
    int rows = matrix.size(), columns = matrix[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int nWords, x, y;
    while (cin >> nWords >> x >> y) {
        vector<string> words = read_words(nWords);
        Matrix letters = read_matrix(x, y);

        Matrix letters_found = found_words(letters, words);

        print_matrix(letters_found);
    }
}
