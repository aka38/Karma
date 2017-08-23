#include <bits/stdc++.h>
using namespace std;
template <class T> int size(const T &x) { return x.size(); }
#define mp         make_pair
#define pb         push_back
#define MAX        1000005
#define mod        1000000007
#define mx(a,b,c)  max(a,max(b,c))
#define mn(a,b,c)  min(a,min(b,c))
#define pred(a)    printf("%0.8lf",a);
#define fast()     ios_base::sync_with_stdio(0)
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int inf = ~(1<<31); // 2147483647

const double eps = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) { return (a % b + b) % b; }\

ll lcm(ll x, ll y) { return x*1LL*y/__gcd(x, y);}
int modpow(ll a,ll x){
	int r=1;
	while(x>0)
    if (x&1){ r=(r*a)%mod; --x;}
    else {a=(a*a)%mod;x>>=1;}
	return r%mod ;
}
int main(){

return 0;
}
