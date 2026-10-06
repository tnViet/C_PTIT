#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    for(int i=1; i<=10; i++){
        printf("%lld ", n*i);
    }
    return;
}
int main(){
    solve();
    return 0;
}