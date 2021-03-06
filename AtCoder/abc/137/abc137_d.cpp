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
    int N, M; cin >> N >> M;
    vector<priority_queue<int>> jobs(100010);
    repp(i,0,N) {
        int A, B; cin >> A >> B;
        jobs[A].push(B);
    }
    ll ans = 0;

    repp(i,0,M+1) {
        int x = -1;
        repp(j, 0, i+1) {
            if (jobs[j].empty()) continue;
            if (x < 0) x = j;
            else x = jobs[x].top() > jobs[j].top() ? x : j;
        }
        if (x < 0) continue;
        ans += jobs[x].top(); jobs[x].pop();
    }
    cout << ans << endl;
}
