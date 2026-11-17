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
    long long c1, c2;
    scanf("%lld %lld", &c1, &c2);
    c1--; c2--;
    long long tmp ;
    for(int i=0; i<n; i++){
        tmp = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] = tmp;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%lld ",a[i][j]);
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