#include <stdio.h>
#include <math.h>

void solve(){
    long long m, n;
    scanf("%lld %lld", &m, &n);
    printf("%lld\n", (long long)floor(sqrt(n)) - (long long)ceil(sqrt(m)) + 1);
    for(int i=(int)ceil(sqrt(m)); i<=floor(sqrt(n)); i++){
        printf("%lld\n", (long long)pow(i,2));
    }
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}