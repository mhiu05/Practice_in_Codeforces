#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k; cin >> x >> y >> k;
        int mov_x = ceil(1.0 * x / k), mov_y = ceil(1.0 * y / k);
        if (mov_x == mov_y) {
            cout << mov_x + mov_y << endl;
        }
        else if(mov_x > mov_y){
            cout << 2 * mov_x - 1 << endl;
        }
        else{
            cout << 2 * mov_y << endl;
        }
    }
    
    return 0;
}