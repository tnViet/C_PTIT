#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[100];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    long long limit = -1;
    long long res = 0;
    for(int i=0; i < n; i++){
        if(a[i] > limit){
            limit = a[i];
            res ++;
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