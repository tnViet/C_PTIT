#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
void solve(){
    long long n;
    scanf("%lld", &n);
    long long res = 0;
    for(int i=1; i * i <= n; i ++){
        if(n % i == 0 ){
            if(i % 2==0) res ++;
            if((n/i) % 2 == 0) res ++;
            if(i % 2 == 0 && i * i == n) res --; 
        }
        
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