#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long i = 2;
    while(n > 1){
        while(n % i == 0){
            printf("%lld ", i);
            n /= i;
        }
        i ++;
    }
    printf("\n");
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}