#include <stdio.h>

void solve(){
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld", (a + b) * (abs(a - b)+ 1) / 2 );
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}