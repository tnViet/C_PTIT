#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
long long f[96] = {};
void solve(){
    long long n;
    scanf("%lld", &n);
    for(int i=0; i<96; i++){
        if(f[i] == n){
             printf("YES\n");
            return;
        }
    }
    printf("NO\n");
    return;
}
void cal(){
    f[0] = 1;
    f[1] = 1;
    for(int i=2; i<96; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    cal();
    while(t--)
        solve();
    return 0;
}