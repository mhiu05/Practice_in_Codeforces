#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll cnt_x = 0, cnt_y = 0;
        ll n; cin >> n;
        vector<ll> v_x(n + 1, 0), v_y(n + 1, 0);
        for(ll i = 1; i <= n; ++i){
            ll x, y; cin >> x >> y;
            if (y == 0){
                ++cnt_x;
                v_x[x]++;
            }
            else {
                ++cnt_y;
                v_y[x]++;
            }
        }
        ll ans = 0;
        for(ll i = 0; i <= n; ++i){
            if(v_x[i] == 1 && v_y[i] == 1){
                ans += cnt_x - 1;
                ans += cnt_y - 1;
            }
            if(v_x[i] == 1){
                ll l = i - 1, r = i + 1;
                if(l >= 0 && r <= n && v_y[l] == 1 && v_y[r] == 1){
                    ans += 1;
                }
            }
            if(v_y[i] == 1){
                ll l = i - 1, r = i + 1;
                if(l >= 0 && r <= n && v_x[l] == 1 && v_x[r] == 1){
                    ans += 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}