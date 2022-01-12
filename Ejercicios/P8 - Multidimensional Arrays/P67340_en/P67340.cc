#include <iostream>
#include <vector>

using namespace std;

typedef vector <bool>Fila;
typedef vector <Fila>Tauler;

void find_threats_direction(const Tauler& tauler, int f1, int c1, int dx, int
dy) {
	int n = tauler.size();
	int m = tauler[0].size();

	int i = f1+dx;
	int j = c1+dy;

	bool trobat = false;
	while (not trobat and i < n and i >= 0 and j < m and j >= 0) {
		if (tauler[i][j]) {
			cout << '(' << f1+1 << ',' << c1+1 << ")<->(" << i+1 << ',' << j+1
            << ')' << endl;
			trobat = true;
		}

		i += dx;
		j += dy;
	}
}

void find_threats(const Tauler& tauler, int f1, int c1) {
	find_threats_direction(tauler, f1, c1, 1, 1);  // cap a baix a la dreta
	find_threats_direction(tauler, f1, c1, 1, -1);  // cap a baix a l'esquerra
	find_threats_direction(tauler, f1, c1, -1, 1);  // cap a dalt a la dreta
	find_threats_direction(tauler, f1, c1, -1, -1);  // cap a dalt a l'esquerra
}

int main() {
	int n, m;
	cin >> n >> m;

	Tauler tauler = Tauler(n, Fila(m));

	char c;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> c;
			tauler[i][j] = (c == 'X');
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (tauler[i][j]) {
				find_threats(tauler, i, j);
			}
		}
	}
}