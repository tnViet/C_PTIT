#include <stdio.h>

void solve(){
    long long n;
    long long maxx = -10e9;
    long long minn = 10e9;
    while( scanf("%lld", &n) == 1){
        if (n > maxx) maxx = n;
        if (n < minn) minn = n;
    }
    printf("%lld %lld", maxx, minn);
    return;
}
int main(){
    solve();
    return 0;
}