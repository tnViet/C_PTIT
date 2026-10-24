#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
long long prime[20000] = {};
int cmp(const void *a, const void *b){
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if(x > y) return 1;
    if(x < y) return -1;
    return 0;
}
void cal(){
    prime[1] = 1;
    prime[0] = 1;

    for(int i = 2; i * i <20000; i++){
        for(int j = i * i; j < 20000; j+=i){
            prime[j] = 1;
        }
    }
}
void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[n], b[200000] ={};

    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        b[a[i]] ++;
    }
    qsort(a, n, sizeof(long long), cmp);
    for(int i = 0; i<n; i++){
        if(prime[a[i]] == 0)
        if(b[a[i]] > 0){
            printf("%lld xuat hien %lld lan\n\n", a[i], b[a[i]]);
            b[a[i]] = 0;
        }
    }

    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    // while(t--)
    cal();
    for(int i=1; i<=t; i++){
        printf("Test %d:\n", i);
        solve();
    }
        return 0;
}