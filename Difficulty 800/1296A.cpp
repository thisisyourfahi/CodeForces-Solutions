#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> elements, int n) {
    int even_counts = 0;
    int odd_counts = 0;

    for(int value : elements) {
        if(value % 2 == 0) even_counts++;
        else odd_counts++;
    }

    if(odd_counts >= 1 && (even_counts >=1 || n % 2 != 0)){
        return "YES";
    }
    return "NO";
}

int main(){
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n;
        cin >> n;
        vector<int> elements(n);
        for(int i = 0; i < n; i++){
            cin >> elements[i];
        }

        cout << solution(elements, n) << endl;
    }
    return 0;
}
