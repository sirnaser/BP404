
#include "stdio.h"
#define ll              long long
#define inp(n)          scanf("%lli", &n)
#define out(n)          printf("%lli", n)
#define endl            printf("\n")
#define mfor(i, n)      for(ll i=0; i<n; ++i)
#define maxn            (2*100*1000)


int main(){
    ll n;
    inp(n);

    mfor(i, 1<<n){
        mfor(j, n)
            out(((i ^ (i>>1)) & (1<<(n-j-1))) != 0);
        endl;
    }
}
