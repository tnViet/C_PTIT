#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(const void *a, const void *b){
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if(x > y ) return -1;
    if(x < y ) return 1;
    return 0; 
}
void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[1005] = {}, b[1005] = {};
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        b[i] = a[i];
    }
    
    // for(int i=n-2; i>=0; i--){
    //     if(b[i] < b[i+1]) b[i] = b[i+1]; 
    // }
    long long res[1005] = {0};
    int ptr = 0;
    // for(int i=0; i < n; i++){
    //     if(a[i] == b[i]){
    //         res[ptr++] = a[i];
    //     }
    // }
    // qsort(res, ptr, sizeof(long long), cmp);


    long long limit = -1;
    for(int i=n-1; i>=0; i--){
        if(a[i] > limit){
            res[ptr++] = a[i];
            limit = a[i];
        }
    }

    for(int i=ptr-1; i>=0; i--){
        printf("%lld", res[i]);
        printf(" ");
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