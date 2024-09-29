#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), :: tolower);
    transform(b.begin(), b.end(), b.begin(), :: tolower);

    if(a == b){
        cout << "0\n";
        return 0;
    }


    else{
        int length = sizeof(a);
        for(int i = 0; i < length; i++){
            if(a[i] != b[i]){
                char c, d;
                c = a[i];
                d = b[i];
                if(c > d){
                    cout << "1\n";
                    return 0;
                }
                else{
                    cout << "-1\n";
                    return 0;
                }
            }
        }
    }
}
