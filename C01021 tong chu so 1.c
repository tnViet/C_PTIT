#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long res = 0;
    while(n > 0){
        res += n %10;
        n /= 10;
    }
    printf("%lld", res);
    return;
}
int main(){
    solve();
    return 0;
}