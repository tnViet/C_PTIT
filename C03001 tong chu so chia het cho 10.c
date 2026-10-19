#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long res = 0;
    while(n > 0){
        res += n % 10;
        n /= 10;
    }
    if(res % 10 == 0) printf("YES\n");
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