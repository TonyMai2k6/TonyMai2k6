#include <bits/stdc++.h>
using namespace std;

int T, n;
long long arr[100010], k;
bool ok;
void solve() {
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += arr[i];
    }
    if(sum % k != 0) {
        cout << "NO\n";
        return;
    }
    for(int i = 1; i <= n; i++) { 
        if(arr[i] > sum / k) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("EQLARRAY.INP", "r", stdin);
//    freopen("EQLARRAY.OUT", "w", stdout);
    cin >> T;
    while(T --) {
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            cin >> arr[i];
        solve();
    }
}
