#include <stdio.h>
long long res = 1;
long long cal(long long n){
    
    if(n == 1) return 1;
    long long tmp = n*cal(n-1);
    res += tmp;
    return tmp;
}

void solve(){
    long long n;
    scanf("%lld", &n);
    cal(n);
    printf("%lld", res);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}