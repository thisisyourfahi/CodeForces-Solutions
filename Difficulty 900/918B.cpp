#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n, m; cin >> n >> m;
    map<string, string> mp;

    while(n--) {
        string server, ip;
        cin >> server >> ip;
        mp[ip] = server;
    }
    
    while(m--) {
        string server, ip;
        cin >> server >> ip;
        ip = ip.substr(0, ip.size() - 1); // removing the last semicolon;
        cout << server << " " << ip << "; #" << mp[ip] << endl; 
    }

    return 0;
}
