#include <iostream>
#include <vector>

using namespace std;

struct Pair {
    int value;
    int pos;
};

typedef vector<Pair> Com_Vec;


void read(Com_Vec& v) {
    int vSize = v.size();

    cout << vSize << ' ';

    for (int i = 0; i < vSize; ++i) {
	cout << v[i].value << ';' << v[i].pos << ' ';
    }

    cout << endl;
}


Com_Vec sum(const Com_Vec& v1, const Com_Vec& v2) {
    int v1Size = v1.size(), v2Size = v2.size();
 
    Com_Vec v3(v1Size + v2Size);

    int i = 0, j = 0, k = 0;

    while (i < v1Size and j < v2Size) {
	if (v1[i].pos < v2[j].pos) {
	    v3[k] = v1[i];

	    ++i;
	    ++k;
	}

	else if (v1[i].pos > v2[j].pos) {
	    v3[k] = v2[j];

	    ++j;
	    ++k;
	}

	else if (v1[i].value + v2[j].value != 0) {
	    v3[k].pos = v1[i].pos;
	    v3[k].value = v1[i].value + v2[j].value;

	    ++i;
	    ++j;
	    ++k;
	}

	else {
	    ++i;
	    ++j;
	}
    }



    read(v3);

    return v3;
}


vector<Pair> get_data() {
    int num;

    cin >> num;

    vector<Pair> data(num);

    for (int i = 0; i < num; ++i) {
	char x;
	cin >> data[i].value >> x >> data[i].pos;
    }

    return data;
}


int main() {
    int num;

    cin >> num;

    for (int i = 0; i < num; ++i) {
	Com_Vec pizza = sum(get_data(), get_data());
    }
}


