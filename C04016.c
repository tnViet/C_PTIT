#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
long long prime[20000] = {};

void cal(){
    prime[1] = 1;
    prime[0] = 1;

    for(int i = 2; i * i <20000; i++){
        for(int j = i * i; j < 20000; j+=i){
            prime[j] = 1;
        }
    }
}
void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[n];
    long long cnt = 0;
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        if(prime[a[i]] == 0) cnt ++;
    }
    printf("%lld ", cnt);
    for(int i=0 ; i < n; i++){
        if(prime[a[i]] == 0)
            printf("%lld ", a[i]);
    }

    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
    cal();
solve();
        return 0;
}