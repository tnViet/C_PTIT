#include <stdio.h>


void solve(){
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long a[1005], b[1005];
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    for(int i=0; i<m; i++) scanf("%lld", &b[i]);
   
    for(int i=0; i<k; i++){
        printf("%lld ", a[i]);
    }
    for(int i=0; i<m; i++){
        printf("%lld ", b[i]);
    }
    for(int i=k; i<n; i++){
        printf("%lld ", a[i]);
    }
    printf("\n");
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    for(int i=1; i<=t; i++){
        printf("Test %d:\n", i);
        solve();
    }
    return 0;
}