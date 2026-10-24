#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[n], b[1000000] ={};

    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        b[a[i]] ++;
    }
    for(int i = 0; i<n; i++){
        if(b[a[i]] > 0){
            printf("%lld %lld\n", a[i], b[a[i]]);
            b[a[i]] = 0;
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