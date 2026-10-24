#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    int a[n];
    int res = 0;
    for(int i=0 ;i<n; i++){
        scanf("%d",&a[i]);
        if(i >= 1)
            if(a[i] == a[i-1]) res++;
    }
    printf("%d\n", res);
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}