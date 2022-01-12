#include <iostream>
#include <vector>

using namespace std;

double get_avg(const vector<int>& v) {
    int counter = 0, vSize = v.size();
    double avg = 0;

    // Add to avg all the even elements of the vector: starts from position 1
    // and increments i by 2 all the time, doing the sequence 1, 3, 5, 7...
    for (int i = 0; i < vSize; ++i) {
	if (v[i]%2 == 0) {
	    avg += v[i];
	    ++counter;
	}
    }

    avg /= double(counter);

    return avg;
}

// Pre: --
// Post: returns the position of the last element in v smaller than x, -1 if 
// that element does not exist
int last_position_of(const vector<int>& v, double x) {
    int numToReturn = -1, vSize = v.size();

    for (int i = 0; i < vSize; ++i) {
	if (v[i] < x) numToReturn = i;
    }

    return numToReturn;
}


vector<int> read_vector(int num) {
    vector<int> data(num);

    for (int i = 0; i < num; ++i) {
	cin >> data[i];
    }

    return data;
}

int main() {
    int num;

    while (cin >> num) {
	vector<int> data = read_vector(num);

	cout << last_position_of(data, get_avg(data)) << endl;
    }
}
