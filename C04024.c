#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(const void *a, const void *b ){
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if(x > y) return -1;
    if(x < y) return 1;
    return 0;
}
void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[105] ;
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    qsort(a, n, sizeof(long long), cmp);
    for(int i=0; i<n; i++) printf("%lld ", a[i]);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}