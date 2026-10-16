#include <stdio.h>
long long uc(long long a, long long b){
    long long tmp;
    while(b > 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
void solve(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", uc(n,m));
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}