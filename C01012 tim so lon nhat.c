#include <stdio.h>

void solve(){
    long long n;
    long long maxx = -10e9;
    
    while( scanf("%lld", &n) == 1){
        if (n > maxx) maxx = n;
    }
    printf("%lld", maxx);
    return;
}
int main(){
    solve();
    return 0;
}