#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
long long gcd(long long a, long long b){
    long long tmp;
    while(b > 0){
        tmp = a % b;
        a = b ;
        b = tmp;
    }
    return a;
}
void solve(){
    long long n, m;
    scanf("%lld %lld", &n ,&m);
    printf("%lld \n%lld", gcd(m, n), m / gcd(m,n) * n);

    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}