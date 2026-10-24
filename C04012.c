#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[n], b[200000] ={};
    int exits = 0;

    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        b[a[i]] ++;
    }
    for(int i = 0; i<n; i++){
        if(b[a[i]] > 1){
            printf("%lld ", a[i]);
            exits = 1;
            b[a[i]] = 0;
        }
    }
    if(exits == 0){
        printf("0");
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