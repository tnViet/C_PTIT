#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(const void  *a, const void *b){
    int x = *(int*)a;
    int y = *(int*)b;
    if(x > y) return 1;
    if(x < y) return -1;
    return 0;
}
void solve(){
    long long n;
    scanf("%lld", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int m2=1000;

    qsort(a, n, sizeof(int), cmp);
    for(int i=1; i<n; i++){
        if(a[i] != a[0]){
            m2 = a[i];
            break;
        }
    }
    printf("%d %d", a[0], m2);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}