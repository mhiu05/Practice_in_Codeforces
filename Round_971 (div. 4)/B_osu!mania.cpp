#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        vector<int> v;
        int n; cin >> n;
        while(n--){
            string s; cin >> s;
            for(int i = 0; i < s.size(); ++i){
                if (s[i] == '#') {
                    v.push_back(i + 1);
                    break;
                }
            }
        }
        for (int i = v.size() - 1; i >= 0; --i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}