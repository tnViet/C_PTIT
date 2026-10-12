#include <stdio.h>
#include <stdlib.h>

int prime(long long n){
    if (n < 2) return 0;
    if (n % 2 == 0) return 0;
    if (n == 2 || n == 3) return 1;
    for(long long i = 3; i <= sqrt(n); i+=2){
        if(n % i == 0) return 0;
    }
    return 1;
}
void solve(){
    long long n;
    scanf("%lld", &n);
    if (prime(n) == 0) printf("NO\n");
    else printf("YES\n");
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}