#include <stdio.h>

void solve(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a == 0 && b == 0) printf("Vo so nghiem\n");
    else if (a == 0 && b != 0) printf("Vo nghiem");
    else printf("%.2lf", 1.0 * (-b) / a);
    return;
}
int main(){
    solve();
    return 0;
}