#include <iostream>
#include <vector>

using namespace std;

int position_maximum(const vector<double>& v, int m) {
    int max = 0;
    double max_value = v[0];

    for (int i = 1; i <= m; ++i) {
	if (v[i] > max_value) {
	    max = i;
	    max_value = v[i];
	}
    }

    return max;
}
