#include <stdio.h>
#include <string.h>

void solve(){
    char s[100] ;
    scanf("%s", s);
    int even = 0, odd = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if((s[i] - '0') % 2 == 0) even ++;
        else odd ++;
    }
    printf("%d %d\n", odd, even);
    return;
}
int main(){
    long long t;
    scanf("%lld", &t);
    while(t--)
        solve();
    return 0;
}