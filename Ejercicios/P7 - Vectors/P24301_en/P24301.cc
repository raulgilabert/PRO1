#include <vector>

using namespace std;

/*
 * Return the concatenation of two vectors
*/

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int v1size = v1.size();
    int v2size = v2.size();

    vector<int> v(v1size + v2size);

    for (int i = 0; i < v1size; ++i) {
	v[i] = v1[i];
    }

    for (int i = 0; i < v2size; ++i) {
	v[v1size + i] = v2[i];
    }

    return v;
}
