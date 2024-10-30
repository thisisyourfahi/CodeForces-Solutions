#include <bits/stdc++.h>
using namespace std;

string clock_conversion(string s) {
    int hour = ((s[0] - '0') * 10) + (s[1] - '0');
    string part_of_the_day;
    if(hour >= 12) {
        part_of_the_day = "PM";
    }
    else{
        part_of_the_day = "AM";
    }
    
    if(hour == 00) {
        hour = 12;
    }
    else if(hour > 12) {
        hour = hour - 12;
    }

    string minutes = s.substr(3, 2);

    string time;
    if(hour < 10) {
        time = "0" + to_string(hour);
    }
    else {
        time = to_string(hour);
    }
    time = time + ":" + minutes + " " + part_of_the_day;
    return time;
}
int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        string s;
        cin >> s;

        cout << clock_conversion(s) << endl;
    }
    return 0;
}
