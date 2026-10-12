#include <stdio.h>
#include <math.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a = sqrt(n);
    if (a*a == n) printf("YES\n");
    else printf("NO\n");

    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--){
        solve();
    }
    return 0;
}