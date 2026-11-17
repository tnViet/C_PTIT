#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


void solve(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long a[105][105] ;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            printf("%lld ", a[i][j]);

        }
        printf("\n");
    }
    
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    for(int i=1; i<=t; i++){
        printf("Test %d:\n", i);
        solve();

    }
    return 0;
}