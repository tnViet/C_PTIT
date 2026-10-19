#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long i = 2;
    long long res = 2;
    while(n % 2 ==0){
        n /= 2;
    }
    for(int i=3; i * i <= n; i += 2){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            res = i;
        }
    }
    if(n > 1){
        printf("%lld\n", n);
    } else {
        printf("%lld\n", res);
    }
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}