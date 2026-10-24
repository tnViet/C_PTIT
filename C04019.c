#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    int a[105], b[30005] = {};
    int limit = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[a[i]] ++;
        if(b[a[i]] > limit ) limit = b[a[i]];
    }
    for(int i=0; i<n; i++){
        if(b[a[i]] == limit){
            printf("%d ", a[i]);
            b[a[i]] = 0;
        }
    }
    printf("\n");
    
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}