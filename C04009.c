#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[1005];
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            printf("%lld ", a[i]); 
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 1){
            printf("%lld ", a[i]); 
        }
    }
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}