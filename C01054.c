#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

long long res = 0;
long long MAX = 2000005;
long long prime[2000005] = {0};

void solve(){
    long long n;
    scanf("%lld", &n);
    res += prime[n];
    return;
}

int main(){
    long long t;
    scanf("%lld", &t);

    for(int i=2; i < MAX; i++){
        if(prime[i] == 0){
            for(int j=i; j< MAX; j+=i){
                long long tmp = j;
                while(tmp % i == 0){
                    prime[j] += i;
                    tmp /= i;
                }
            }
        }
    }
    // for(int i=2; i<= MAX; i++){
    //     if(prime[i] == 0) prime[i] += i;
    // }
    // for(int i=1; i<=105; i++){
    //     printf("%d %lld\n", i, prime[i]);
    // }
    while(t--){
        solve();
    }

    printf("%lld", res);
    return 0;
}