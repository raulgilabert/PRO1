#include <vector>
#include <iostream>

using namespace std;


vector<int> read_data() {
    int num;
    cin >> num;

    
    vector<int> data(num);
    for (int i = 0; i < num; ++i) {
	int input;
	cin >> input;

	data[i] = input;
    }

    return data;
}


void print_data(vector<int> data) {
    int vsize = data.size();

    int num_to_check = data[vsize - 1], counter = 0;

    for (int i = 0; i < vsize - 1; ++i) {
	    if (data[i] == num_to_check)
	        ++counter;
    }

    cout << counter << endl;
}


int main() {
    print_data(read_data());
}
