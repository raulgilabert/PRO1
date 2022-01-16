#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int right;
    int wrong;
};


vector<int> read_right_answers(int n) {
    vector<int> answers(n);

    for (int i = 0; i < n; ++i)
	cin >> answers[i];

    return answers;
}


vector<Student> get_info_test(const vector<int>& answer, int n) {
    vector<Student> data(n);

    for (int i = 0; i < n; ++i) {
	int m = answer.size();

	cin >> data[i].name;

	for (int j = 0; j < m; ++j) {
	    int num;
	    cin >> num;

	    if (num == answer[j])
		++data[i].right;
	    else if(num > 0)
		++data[i].wrong;
	}
    }

    return data;
}


void write_results(const vector<Student> data) {
    int n = data.size();

    for (int i = 0; i < n; ++i) {
	cout << data[i].name << ' ' << data[i].right << ' ' << data[i].wrong <<
	    endl;
    }
}


bool cmp(const Student& a, const Student& b) {
    int aPoints = a.right*2 - a.wrong, bPoints = b.right*2 - b.wrong;
    if (aPoints == bPoints) {
	if (a.wrong == b.wrong) {
	    return a.name < b.name;
	}
	return a.wrong < b.wrong;
    }
    return aPoints > bPoints;
}


int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}

