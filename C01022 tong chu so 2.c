#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long res = 0;
    while(n > 0){
        res += n %10;
        n /= 10;
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