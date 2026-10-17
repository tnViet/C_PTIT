#include <stdio.h>
#include <string.h>

void solve(){
    char s[100] ;
    scanf("%s", s);
    int len = strlen(s);
    printf("%c %c", s[0], s[len -1 ] );
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}