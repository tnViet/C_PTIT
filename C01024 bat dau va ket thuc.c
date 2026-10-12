#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    int s, e;
    e = n % 10;
    n /= 10;
    while(n > 0){
        s = n % 10;
        n /= 10;
    }
    if( s == e ) printf("YES\n");
    else printf("NO\n");
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}