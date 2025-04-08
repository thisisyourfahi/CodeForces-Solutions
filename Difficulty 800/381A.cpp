#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> a;
int n;
pair<int, int> solution() {
    bool serejas_move = true;
    int serejas_score = 0, dimas_score = 0;
    int i = 0, j = n - 1;
    while(i <= j) {
        if(serejas_move) {
            if(a[i] > a[j]) {
                serejas_score += a[i];
                i++;
            }
            else {
                serejas_score += a[j];
                j--;
            }

        }
        else {
            if(a[i] > a[j]) {
                dimas_score += a[i];
                i++;
            }
            else {
                dimas_score += a[j];
                j--;
            }
        }
        serejas_move = !serejas_move;
    }
    return {serejas_score, dimas_score};
}

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    cout << solution().first << " " << solution().second << endl;

    return 0;
}
