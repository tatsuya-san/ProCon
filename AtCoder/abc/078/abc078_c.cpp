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
    long long res = res = pow(2, M) * (M * 1900 + (N - M) * 100);
    cout << res << endl;
}
