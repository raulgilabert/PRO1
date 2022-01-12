#include <iostream>
#include <vector>

using namespace std;

struct Submission {
    string idn;
    string exer;
    int time;
    string res;
};

struct Green {
    string idn;
    int num;
};

typedef vector<Submission> History;

void green_submissions(History& history) {
    Green green_empty;
    green_empty.idn = "";
    green_empty.num = 0;

    vector<Green> data(20, green_empty);

    int hSize = history.size();

    for (int i = 0; i < size; ++i) {
        int j = 0;
        bool found = false;

        while (not found and data[j].idn != "") {
            if (data[j].idn == history[i].idn and history[i].res == "Green")
                ++data[j].num;

            ++j;
        }
    }

    int i = 0;

    while ()
}




int main() {
    int num;
    cin >> num;

    History history(num);

    for (int i = 0; i < num; ++i) {
        // One interation for submission to add

        cin >> history[i].idn >> history[i].exer >> history[i].time >>
        history[i].res;
    }


}
