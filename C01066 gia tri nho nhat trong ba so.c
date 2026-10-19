#include <stdio.h>

void solve(){
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long res = a;
    if (b < res) res = b;
    if (c < res) res = c;
    printf("%lld", res);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}