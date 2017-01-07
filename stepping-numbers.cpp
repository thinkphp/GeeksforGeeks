#include<bits/stdc++.h>
using namespace std;
#define fr(i, p, n) for(int i = p; i < n; i++)
#define rev(i, n, p) for(int i = n; i >= p; i--)
#define MX INT_MAX
#define MN INT_MIN
typedef long long int LL;
const int mod =  1e9 + 7;

bool is_stepping(int n) {
    int d = n % 10;
    n /= 10;
    while(n > 0) {
        int dn = n % 10;
        if(d != dn + 1 && d != dn - 1)
            return false;
        n /= 10;
        d = dn;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        fr(i, n, m + 1) {
            if(is_stepping(i))
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
