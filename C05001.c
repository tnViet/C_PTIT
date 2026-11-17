#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long a[105][105] ;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%lld", &a[i][j]);
        }
    } 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%lld ", a[j][i]);
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

