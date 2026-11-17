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
    long long r1, r2;
    scanf("%lld %lld", &r1, &r2);
    r1--; r2--;

    for(int i=0; i<n; i++){
        if(i == (r1)){
            for(int j=0; j<m; j++){
                printf("%lld ", a[r2][j]);
            }
        } 
        if(i == (r2)){
            for(int j=0; j<m; j++){
                printf("%lld ", a[r1][j]);
            }
        } 
        if(i != r1 && i != r2){
            for(int j=0; j<m; j++){
                printf("%lld ", a[i][j]);
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