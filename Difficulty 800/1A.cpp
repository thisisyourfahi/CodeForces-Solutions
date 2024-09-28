// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, m, a;
    cin >> n >> m >> a;

    long alongLength = ceil((float)n / a);
    long alongWidth = ceil((float)m / a);
    long totalStones = alongLength * alongWidth;

    cout << totalStones << endl;
}
