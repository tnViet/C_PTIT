#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[1005];
    long long m = -1;
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        if(a[i] > m ) m = a[i];
    }
    printf("%lld\n", m);
    for(int i=0; i<n; i++)
        if(a[i] == m)
            printf("%d ", i);

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