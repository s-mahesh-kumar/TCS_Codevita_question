#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ull unsigned long long 
#define lld long double 
#define endl "\n"


#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template <class T> void _print(T t) {cerr << t;} 

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")




void solve()
{
 
 int sum1=0, sum2=0,sum=0;
 int s1=0,s2=0;
 
int n;
cin>>n;

vector<int> a(n,0);
rep(i,0,n)
cin>>a[i];

int s=0;
int e=n-1;
int c=0;
while(s<=e){
    c++;
    sum=0;
    s1=0;
    s2=0;

    int S=s;
    int E=e;

    debug(a[s])
    debug(a[e])

    if(a[s]<0 && a[e]<0)
    {
        if(a[s]>a[e])
        sum+=a[s++];
        else
        sum+=a[e--];
    
    }
    else
    {

        while(a[S++]>0)
        s1+=a[S-1];
    

        while(a[E--]>0)
        s2+=a[E+1];

    S--; E++;

    if(s1>s2)
    {
        s=S;
        sum+=s1;
    }

    else
    {
        e=E;
        sum+=s2;
    }
  }
    debug(sum)

    if(c%2)
    sum1+=sum;
    else
    sum2+=sum;
}


    cout<<abs(sum2-sum1)<<endl;


}


signed main()
{

ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("Error.txt","w",stderr);
#endif

    int t=1;
    // cin>>t;

    while(t--)
    solve();   
    

    return 0;
}