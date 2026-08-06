#include <stdio.h>

int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (b == 0) printf("0\n");
    else 
        printf("%lld %lld %lld %.2lf %lld\n", a + b, a- b, a * b, 1.0*a/b, a%b);
    return 0;
}