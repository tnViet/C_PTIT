#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long a[11] = {1};
void solve(){
    long long n;
    scanf("%lld", &n);
    long long sum = 0;
    for(int i=1; i<=9; i++){
        a[i] = a[i-1] * i;
    }
    long long m = n;
    while(n > 0){
        int tmp = n % 10;
        sum += a[tmp];
        n /= 10;
    }
    if(sum == m) printf("1"); 
    else printf("0");
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}