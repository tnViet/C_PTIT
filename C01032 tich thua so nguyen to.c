#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long i = 2;
    long long res = 1;
    while( n > 1){
        if (n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            res *= i;
        }
        i++;
    }
    printf("%lld\n", res);
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}