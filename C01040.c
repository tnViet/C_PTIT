#include <stdio.h>
#include <stdlib.h>
void solve(){
    long long n;
    scanf("%lld", &n);
    long long sum = 1;
    for(int i=2; i <= sqrt(n); i++ ){
        if(n % i == 0){
            sum += i;
            sum += n/i;
            if(i == sqrt(n)) sum -= i;
        }
    }
    if(sum == n) printf("1"); 
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