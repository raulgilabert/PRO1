#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int idn;
    string name;
    double mark;    // The mar is between 0 and 10 oe -1 if it represents NP
    bool repeater;
};


void information(const vector<Student>& stu, double& min, double& max,
                  double& avg) {
    int num = stu.size();

    min = 10;
    max = 0;
    avg = 0;

    int counter = 0;

    for (int i = 0; i < num; ++i) {
        if (not stu[i].repeater and stu[i].mark != -1) {
            if (stu[i].mark > max) max = stu[i].mark;
            if (stu[i].mark < min) min = stu[i].mark;

            avg += stu[i].mark;
            ++counter;
        }
    }

    if (counter == 0) {
        min = -1;
        max = -1;
        avg = -1;
    }

    else
        avg /= double(counter);
}

