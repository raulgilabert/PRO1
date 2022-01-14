#include <iostream>
#include <vector>

using namespace std;


void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}


void insert(vector<double>& v) {
    int vSize = v.size();
    double num = v[vSize - 1];

    for (int i = vSize - 1; i >= 0; --i) {
	if (v[i] > num) {
	    swap(v[i], v[i + 1]);
	    num = v[i];
	}
    }
}



int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
	}
        
	insert(V);
	for (int i=0; i<n; ++i) {
	    cout << " " << V[i];
        }
        cout << endl;
    }
}
