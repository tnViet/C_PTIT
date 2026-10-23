#include <stdio.h>


void solve(){
    long long n, m, k;
    scanf("%lld %lld", &n, &m);
    long long a[1005], b[1005];
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    for(int i=0; i<m; i++) scanf("%lld", &b[i]);
    scanf("%lld", &k);
    for(int i=0; i<k; i++){
        printf("%lld ", a[i]);
    }
    for(int i=0; i<m; i++){
        printf("%lld ", b[i]);
    }
    for(int i=k; i<n; i++){
        printf("%lld ", a[i]);
    }

    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // for(int i=1; i<=t; i++){
    //     printf("Test %d:\n", i);
    //     solve();
    // }
    solve();
    return 0;
}