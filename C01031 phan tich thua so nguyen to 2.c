#include <stdio.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long i = 2;
    int check = 1;
    while(n > 1){
        while(n % i == 0){
            if(check == 0){
                printf("x%lld", i);
            } else {
                printf("%lld", i);
                check = 0;
            }
            n /= i;
        }
        i ++;
    }
    printf("\n");
    return;
}
int main(){


        solve();
    return 0;
}