#include<bits/stdc++.h> // 56 70 "Baklol, Take it easy"
using namespace std;
using ll = long long int;
using ld = long double;
using ull = unsigned long long int;

#define rep(x, k, n)        for(int x = (k); x <= (n); ++x)
#define rept(x, k, n)       for(int x = (k); x < (n); ++x)
#define repr(x, k, n)       for(int x = (k); x >= (n); --x)
#define pb                  push_back
#define F                   first
#define S                   second
#define siz(x)              ((int)(x).size())
#define o2(x)               ((x) * (x))
#define all(x)              (x).begin(), (x).end()
#define clr(x, k)           memset(x, k, sizeof(x)) // 0, -1
#define printv(v, k, n)     rep(i, k, n) cout << v[i] << " \n"[i==n];
#define print2dv(V,k,n,m)   rep(j, k, n) printv(V[j], k, m);
#define report(x)           cout << ((x) ? "Yes" : "No") << '\n'
#define setbits(x)          __builtin_popcountll(x)
#define int                 long long // "be carefull"

typedef vector<int>         vi;
typedef pair<int, int>      pii;

template <typename Arg1>
void debug_out(const char* name, Arg1&& arg1){
    cerr << name << " = " << arg1  << " ]" << "\n";
}
template <typename Arg1, typename... Args>
void debug_out(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << ",";
    debug_out(comma+1, args...);
}

#ifdef LOCAL
#define deb(...)            cerr << "[ ", debug_out(#__VA_ARGS__, __VA_ARGS__)
#define debv(v, k, n)       rep(i, k, n) cerr << v[i] << " \n"[i==n];
#define deb2dv(V, k, n, m)  rep(j, k, n) debv(V[j], k, m);
#define line                rep(i, 1, 50) cerr << "-\n"[i==50];
#else
#define deb(...)
#define debv(v, k, n)
#define deb2dv(V, k, n, m)
#define line
#endif

constexpr long long inf = 2e9, ninf = -2e9;
constexpr long double eps = 1e-9;
constexpr int mod = 1e9 + 7; // 998244353;
constexpr int N = 100 + 5, M = 2e5 + 5;

/*/------------------------------ CODE BEGINS ------------------------------/*/

int n, k;
string s;
set<string> st[N];

void DONT_ASSUME_BLINDLY() {

    cin >> n >> k >> s;
    st[0].insert(s);
    k -= siz(st[0]);
    int res = 0;
    for(int i = 1; i <= siz(s) && k > 0; i++){
        bool done = false;
        for(auto &str : st[i-1]){
            for(int j = 0; j < siz(str) && !done; j++){
                st[i].insert(str.substr(0, j) + str.substr(j+1, n-j-1));
                if(siz(st[i]) >= k) done = true;
            }
            if(done) break;
        }
        k -= siz(st[i]);
        res += i * siz(st[i]);
    }
    if(k > 0) cout << -1 << '\n';
    else cout << res << '\n';
}

/*/------------------------------- CODE ENDS -------------------------------/*/

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    // cout << setprecision(12) << fixed;
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) {
        DONT_ASSUME_BLINDLY();
#ifdef LOCAL
        auto brute_force = [&]()->void{

        };
        // brute_force();
        // break;
#endif
    }

    cerr << "[time:" << 1.0*clock()/CLOCKS_PER_SEC << "s] ";
    return 0;
}


/*
-> Please, don't get stuck at one approach only.
-> Understood the problem?, misread?
-> edge cases, n = 1 ?
-> binary search ?, brute_force ?
-> time complexity - 1 sec : 4e8 will work but risky.
-> space complexity - 256 mb : 6e7(int), 3e7(ll), 2e8(bool, char), will work.
-> entire input - multiple testcases.
-> mod : sort ?, mint, remove #define int.
-> Iterative > Recursive.
-> clear - global variables.
-> builtin function - add ll.
-> Move on - if completely_stuck > 30 minute.
-> Submit - right file.
*/

/*
-> Don't assume blindly.
-> Focus on problem.
-> Do consider worst case time complexity.
-> If solution is barely passing then do submit again after doing optimization.
-> Be carefull in nested loop. Iterating variable name should be different for both loop.
-> Think simple first.
-> Don't be stupid.
-> Be comfortable and in your control.
*/