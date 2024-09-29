#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c = 0, maax = 0;
    cin >> n;

    while(n--){
        cin >> a >> b;
        c = (b - a) + c;
        if(c > maax){
            maax = c;
        }
    }

    cout << maax;
}
