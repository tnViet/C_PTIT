#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int a[10] = {};
void solve(){
    char s[100];
    gets(s);
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7'){
            char tmp = s[i];
            int cnt = 0;
            for(int j=0; j<len; j++){
                if(tmp == s[j]){
                     cnt ++;
                    s[j] = '1';
                }
            }
            printf("%c %d\n", tmp, cnt);
        }
    }

    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}