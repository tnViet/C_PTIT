#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    int maxx = 0, minn = 9;
    while(n > 0){
        int tmp = n % 10;
        n /= 10;
        if (tmp > maxx) maxx = tmp;
        if (tmp < minn) minn = tmp;
    }
    printf("%d %d\n", maxx, minn);
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}