#include <stdio.h>
int maxx = 2 * 1e6;
long long prime[8000000] = {0};
void solve(){
    long long n;
    scanf("%lld", &n);
    long long cnt = 0 ;
    for(int i=2 ; i < maxx ; i++){
        if(cnt >= n) break;
        if(prime[i] == 0){
            printf("%d\n", i);
            cnt++;
        
        }
    }
    return;
}
int main(){
    long long t;
    for(int i = 2; i * i < maxx; i++){
        if(prime[i] == 0){
            for(int j=i*i; j< maxx; j+=i){
                prime[j] = 1;
            }
        }
    }
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}