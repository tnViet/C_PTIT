#include <stdio.h>
long long prime[1000005] = {0};
void solve(){
    long long n;
    scanf("%lld", &n);
    for(int i=2 ; i<=n; i++){
        if(prime[i] == 0)
            printf("%d\n", i);
    }
    return;
}
int main(){
    long long t;
    for(int i = 2; i * i < 1000005; i++){
        if(prime[i] == 0){
            for(int j=i*i; j<1000005; j+=i){
                prime[j] = 1;
            }
        }
    }
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}