// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long stones_length = ceil((double)n / a);
    long long stones_width = ceil((double)m / a);

    long long total_stones = stones_length * stones_width;

    cout << total_stones << endl;

    return 0;
}
