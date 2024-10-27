#include <bits/stdc++.h>
using namespace std;

int solution() {
    int n, k;
    cin >> n >> k;   
    vector<int> elements(n);
    for(int i = 0; i < n; i++){
        cin >> elements[i];
    }

    sort(elements.begin(), elements.end());
    vector<int> eligible_problems;
    int problems = 1;
    for(int i = 0; i < n - 1; i++) {
        if(elements[i + 1] - elements[i] <= k){
            problems++;
        }
        else{
            eligible_problems.push_back(problems);
            problems = 1;
        }
    }
    eligible_problems.push_back(problems);
    sort(eligible_problems.begin(), eligible_problems.end());
    return n - eligible_problems.back();

}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        cout << solution() << endl;
    }
    return 0;
}
