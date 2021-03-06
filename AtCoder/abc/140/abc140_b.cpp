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
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N-1);
    repp(i,0,N) cin >> A[i];
    repp(i,0,N) cin >> B[i];
    repp(i,0,N-1) cin >> C[i];
    int ans = 0;

    repp(i,0,N) {
        ans += B[A[i]-1];
        if (i > 0 && A[i] - A[i-1] == 1) {
            ans += C[A[i-1]-1];
        }
    }
    cout << ans << endl;
}
