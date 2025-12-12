
#include <bits/stdc++.h>
#include <string>
#define ll              long long
#define mfor(i, n)      for(ll i=1; i<=n; ++i)
#define nfor(i, n)      for(ll i=n; i>=1; --i)
#define ffor(i, m, n)   for(ll i=m; i<=n; ++i)
#define bfor(i, m, n)   for(ll i=m; i>=n; --i)
using namespace std;

const ll maxn = (1<<16) + 9;

string gray[maxn];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ll i = 1;
    while (i < (1<<n)){
        mfor(j, i)
            gray[i+j] = "1" + gray[i-j+1];
        mfor(j, i)
            gray[j] = "0" + gray[j];
        i <<= 1;
    }

    mfor(i, 1<<n)
        cout << gray[i] << endl;

    return 0;
}
