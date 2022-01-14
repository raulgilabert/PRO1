// Return the sorted difference of two sorted vector

#include <iostream>
#include <vector>

using namespace std;


vector<double> difference(const vector<double>& v1, const vector<double>& v2) {
    int v1Size = v1.size(), v2Size = v2.size();

    vector<double> aux(v1Size);

    int i = 0, j = 0, k = 0;
    while (i < v1Size and j < v2Size) {
	if (v1[i] < v2[j]) {
	    if (k == 0 or v1[i] != aux[k - 1]) {
		aux[k] = v1[i];
		++k;
	    }
	    ++i;
	}
	else if (v1[i] > v2[j])
	    ++j;
	else
	    ++i;
    }

    while (i < v1Size) {
	if (k == 0 or aux[k - 1] != v1[i]) {
	    aux[k] = v1[i];
	    ++k;
	}
	++i;
    }

    vector<double> result(k);

    for (i = 0; i < k; ++i)
	result[i] = aux[i];

    return result;
} 



int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = difference(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = difference(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" <<
	  endl;
    }
  }
}
