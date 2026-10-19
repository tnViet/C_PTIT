#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    char s[10000] ;
    gets(s);
    int len = strlen(s);
    for(int i=1 ; i< len; i++){
        if((s[i] - '0') < (s[i-1] - '0')){
            printf("NO\n");
            return ;
        }
    }
    printf("YES\n");

    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    scanf("\n");
    while(t--)
        solve();
    return 0;
}