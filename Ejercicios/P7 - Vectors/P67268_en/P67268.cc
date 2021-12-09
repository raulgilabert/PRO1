#include <vector>
#include <iostream>

using namespace std;


vector<int> read_data(int num) {
    vector<int> data(num);

    for (int i = 0; i < num; ++i) {
	int input;
	cin >> input;
	data[i] = input;
    }

    return data;
}

void print_data(const vector<int>& data) {
    int vsize = data.size();

    for (int i = vsize - 1; i >= 0; --i) {
	if (i < vsize - 1)
	    cout << ' ';

	cout << data[i];
    }

    cout << endl;
}

int main() {
    int num;
    while (cin >> num)
	print_data(read_data(num));
}
