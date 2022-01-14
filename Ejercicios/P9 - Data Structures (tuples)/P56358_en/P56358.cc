#include <iostream>

using namespace std;

struct Time {
    int hour, minute, second;
};

Time seconds_to_time(int time) {
    Time t;

    time += 24*60*60;

    time %= 24*60*60;

    t.second = time%60;
    t.minute = (time/60)%60;
    t.hour = time/(60*60);

    return t;
}

void one_second(const Time& t, Time& t1, Time& t2) {
    int time = t.second + (t.minute + t.hour*60)*60;

    t1 = seconds_to_time(time + 1);
    t2 = seconds_to_time(time - 1);
}


void print(Time t) {
    cout << t.hour << ' ' << t.minute << ' ' << t.second << endl;
}


int main() {
    Time t, t1, t2;

    while (cin >> t.hour >> t.minute >> t.second) {
	one_second(t, t1, t2);

	print(t1);
	print(t2);
    }
}


