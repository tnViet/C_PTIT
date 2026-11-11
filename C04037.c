#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(const void *a, const void *b){
    long long x = *(long long*)a;
    long long y= *(long long*)b;
    if(x > y ) return 1;
    if(x < y) return -1;
    return 0;
}
void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[n], b[200000] ={};
    long long cnt = 0;
    long long res[10005];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        b[a[i]] ++;
        if(b[a[i]] > 1){
            res[cnt++] = a[i];
        }
    }
    printf("%lld\n", cnt);
    qsort(res, cnt, sizeof(long long), cmp);
    for(int i=0; i<cnt; i++){
        printf("%lld ", res[i]);
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