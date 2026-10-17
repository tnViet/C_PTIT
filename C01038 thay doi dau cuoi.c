#include <stdio.h>
#include <math.h>
void solve(){
    long long n;
    scanf("%lld", &n);
    long long m = n, poww = 0;
    int f, l = n % 10;
    n /= 10;
    while(n > 0){
        f = n % 10;
        n /= 10;
        poww++;
    }
    if (l == 0){}
    else printf("%d", l);
    printf("%lld", (m % (long long)(pow(10, poww))) / 10);
    printf("%d", f);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}