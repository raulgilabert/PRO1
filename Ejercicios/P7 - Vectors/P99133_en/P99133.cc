#include <vector>
#include <string>
#include <iostream>

using namespace std;


void print_data(const string& data) {
    for (int i = data.length() - 1; i >= 0; --i) {
	cout << data[i];
    }

    cout << endl;
}


void execute(int num, int current) {
    string data;
    cin >> data;

    if (current < num)
	execute(num, current + 1);

    print_data(data);
}




int main() {
    int num;
    cin >> num;
    
    if (num >= 1)
	execute(num, 1);
}
