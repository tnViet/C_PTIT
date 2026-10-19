#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i == 1 || i == m){
                printf("*");
            } else if(j == 1 || j == n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
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