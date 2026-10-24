#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[105] = {};
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    long long m; scanf("%lld", &m);
    for(int i=m; i<n; i++) printf("%lld ", a[i]);
    for(int i=0; i<m; i++) printf("%lld ", a[i]);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}
