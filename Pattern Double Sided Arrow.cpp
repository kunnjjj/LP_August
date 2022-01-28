#include <bits/stdc++.h>
using namespace std;
#define int long long
#define LL long long
#define float long double
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'
#define mkunique(a) a.resize(unique(a.begin(), a.end()) - a.begin());
#define vpii vector<pair<int, int>>
#define vi vector<int>
#define sz(a) (int)a.size()
// #define NL cout << '\n'
template <typename T>
void _print(T x, bool end_line = 1, bool bracket = 0)
{
    if (bracket)
        cout << "{ ";
    cout << x;
    if (bracket)
        cout << " }";
    if (end_line)
        cout << '\n';
}
void _print(string x, bool end_line = 1, bool bracket = 0)
{
    if (bracket)
        cout << "{ ";
    cout << "\"";
    cout << x;
    cout << "\"";
    if (bracket)
        cout << " }";
    if (end_line)
        cout << '\n';
}
void _print(char x, bool end_line = 1, bool bracket = 0)
{
    if (bracket)
        cout << "{ ";
    cout << "\'";
    cout << x;
    cout << "\'";
    if (bracket)
        cout << " }";
    if (end_line)
        cout << '\n';
}
template <typename T>
void _print(set<T> &s, bool end_line = 1)
{
    cout << "{ ";
    for (auto ele : s)
    {
        _print(ele, 0);
        cout << " ,";
    }
    cout << "}";
    if (end_line)
        cout << "\n";
}
template <typename T>
void _print(multiset<T> &s, bool end_line = 1)
{
    cout << "{ ";
    for (auto ele : s)
    {
        _print(ele, 0);
        cout << " ,";
    }
    cout << "}";
    if (end_line)
        cout << "\n";
}
template <typename T, typename S>
void _print(pair<T, S> &p, bool end_line = 1)
{
    cout << "{ ";
    _print(p.first, 0);
    cout << " , ";
    _print(p.second, 0);
    cout << " }";
    if (end_line)
        cout << "\n";
}
template <typename T>
void _print(vector<T> &A, bool end_line = 1)
{
    cout << "{ ";
    for (auto ele : A)
    {
        _print(ele, false);
        cout << " ,";
    }
    cout << "}";
    if (end_line)
        cout << '\n';
}
template <typename T>
void _print(vector<vector<T>> &A)
{
    // cout<<"[";
    if (A.size())
    {
        _print(A[0]);
    }
    for (int i = 1; i < A.size(); i++)
    {
        if (i == (int)A.size() - 1)
        {
            cout << "      ";
            _print(A[i]);
        }
        else
        {
            cout << "      ";
            _print(A[i]);
        }
    }
    // cout<<"]"<<'\n';
}
template <typename T, typename S>
void _print(map<T, S> &mp)
{
    cout << '\n';
    for (auto ele : mp)
    {
        _print(ele.first, 0);
        cout << " -> ";
        _print(ele.second);
    }
}
template <typename T, typename S>
void _print(unordered_map<T, S> &mp)
{
    cout << '\n';
    for (auto ele : mp)
    {
        _print(ele.first, 0);
        cout << " -> ";
        _print(ele.second);
    }
}
#define deb(x)            \
    cout << #x << " -> "; \
    _print(x);
long long power(long long x, long long y, long long p = (long long)1e9 + 7)
{
    long long res = 1LL;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (1LL * res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}
bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    long long p = sqrt(n);
    for (long long i = 5; i <= p; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}
int modInverse(int b, int m = (int)1e9 + 7)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(b, m, &x, &y);
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
    // m is added to handle negative x
    return (x % m + m) % m;
}
int mod_sum(int a, int b, int M = (int)1e9 + 7)
{
    return ((a % M + b % M) % M + M) % M;
}
int mod_mul(int a, int b, int M = (int)1e9 + 7)
{
    return ((1LL * (a % M) * (b % M)) % M + M) % M;
    ;
}
int mod_diff(int a, int b, int M = (int)1e9 + 7)
{
    return ((a % M - b % M) % M + M) % M;
}
void inp(vector<int> &A, int idx = 0)
{
    for (int i = idx; i < A.size(); i++)
        cin >> A[i];
}
void to_binary(int n, int dig = 6)
{
    string ans = "";
    int orig = n;
    while (n > 0)
    {
        ans += (char)((n & 1) + '0');
        n >>= 1;
    }
    while (ans.size() < dig)
    {
        ans += '0';
    }
    reverse(ans.begin(), ans.end());
    cout << orig << ": " << ans << endl;
    // return ans;
}
int max_n = 2e5 + 1;
vector<int> seive(max_n + 20, 1);
void make_seive(int max_n)
{
    seive[0] = 0;
    seive[1] = 0;
    for (int i = 2; i * i <= max_n; i++)
    {
        if (seive[i])
            for (int j = i * i; j <= max_n; j += i)
                seive[j] = 0;
    }
}
int max_N = 2e5 + 1;
vector<int> min_prime(max_n + 20, 0);
void make_min_prime(int max_N)
{
    for (int i = 2; i <= max_N; i++)
    {
        if (seive[i])
            for (int j = i; j <= max_N; j += i)
                min_prime[j] = i;
    }
}
void ask(int i)
{
    cout<<"? "<<i<<endl;
    cout.flush();
}
inline void solve()
{ // look at other approaches

    int n; cin>>n;
    vector<int> ans(n+1);
    vector<int> visited(n+1);
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        vector<int> me;
        // ask(i);

        while(1)
        {
            ask(i);
            int x;
            cin>>x;
            if(visited[x]) break;
            visited[x]=1;
            me.push_back(x);
        }
        // if((int)me.size()==1)
        // {
        //     ans[me[0]]=me[0];
        // }
        // else
        {
            int n=me.size();
            for(int i=0;i+1<n;i++)
            {
                ans[me[i]]=me[i+1];
            }
            ans[me[n-1]]=me[0];
        }

    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << setprecision(12) << fixed;
    int t = 1;
    cin >> t;
    //    change max n back
    for (int i = 1; i <= t; i++)
    {
        //   cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}
// SET/PQ COMPARATOR
//  struct compare{
//  bool operator()(const pair<int,int> &a,const pair<int,int> &b) const
//  {
//      return a.ff+a.ss<b.ff+b.ss;
//  }
//  };
//  auto y = [] (auto first, auto second)
//  {
//      return first + second;
//  };
//

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define float long double
// #define deb(x) cout<<#x<<" -> "<<x<<"\n";
// void solve()
// {

// }
// signed main()
// {
//     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     int t=1;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }
// // CALM DOWN
// // think alternate definitions of dp
// // IF YOU GET AN INTUITION OF A SOLUTION THINK MORE RATHER THAN IMPLEMENTING WITH USING UGLY DATA STRUCTURES
// //  THINK BRUTE FORCEh
// // THINK IN REVERSE PROCESS remember codeforces 714 reverse dp
// // MAXIMING A MATHEMATICAL EXPRESSION, TRY SHUFFLING THE SIMILAR TERMS TOGETHER
// // clear global vectors and Aays
// // print auxiliary Aay maybe it is Monotonic hence bsearch can be applied
// // LOOK FOR UPPER BOUNDS ON SOMETHING TO FIT INTO CONSTRAINTS
// // in a bitwise question see if there is an upper bound after which ans is always yes or no
// // factors can be computed in log n are precomputing seive
// // in game theory questions work out some examples
// // cout<<fixed<<setprecision(9)<<ans<<endl;
// // if(gcd(a,b)=g) then consider a=A*g , b=B*g where A and B are coprime
// // in a graph you can at times dfs over unvisited vertices
// // iterate over odd and even lengths
// // colin galen convex hull gives us max value
// // max seg tree Cg, to update we need to add the extra value
// // dont forget to think of compliment of somethig in PnC etc
