#include <bits/stdc++.h>

using namespace std;
#define int long long

const int N = 2e5 + 20;
using ll = long long;


int32_t main() {
    /*ios::sync_with_stdio(false);
    cin.tie(nullptr);*/
    
    int t,n, a[N];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];

        int last = 0, ans = 0;
        for(int i = 1; i < n; i++){
            //Prevnumber 
            int v1 = a[i-1];
            //currentnumber
            int v2 = a[i];
            //counters
            int c1 = 0, c2 = 0;

            if(v2 == 1 && v1 > 1){
                ans = -1;
                break;
            }
            while(v2 < v1){
                v2 *= v2;
                c2++;
            }
            while(v1 * v1 <= v2){
                if(v1 == 1){
                    c1 = -1;
                    break;
                }
                v1 *= v1;
                c1++;

            }
            if(c2){last += c2;}
            else if(c1 == -1) last = 0;
            else last = max(0ll, last - c1);

            ans += last;
        }
        cout << ans << endl;
        

    }

}
