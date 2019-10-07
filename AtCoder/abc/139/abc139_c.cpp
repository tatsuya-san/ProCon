#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <numeric>

using namespace std;
#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

typedef long long ll;

long long GCD(long long a, long long b){if(b==0)return a;return GCD(b,a%b);}

int main() {
    int N; cin >> N;
    vector<ll> h(N); repp(i,0,N) cin >> h[i];

    int i = N-1;
    int count = 0;
    int ans = 0;
    while(i > 0) {
        if (h[i-1] >= h[i]) {
            ++count;
            ans = max(ans, count);
        } else {
            count = 0;
        }
        --i;
    }
    cout << ans << endl;
}
