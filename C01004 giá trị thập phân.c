#include <stdio.h>

int main(){
    long long t;
    scanf("%lld", &t);
    for(int i=1; i<=t; i++){
        long long n;
        scanf("%lld", &n);
        printf("%.15lf\n", 1.0/n);
    }
        return 0;
}