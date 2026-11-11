#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve(){
    long long n;
    scanf("%lld", &n);
    long long a[105];
    long long m1 = -1, m2 = -1;
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        if(a[i] > m2 && a[i] != m1) m2 = a[i];
        if(m2 > m1){
            m1 = m2 + m1;
            m2 = m1 - m2;
            m1 = m1 - m2;
        }
    }
    printf("%lld %lld", m1, m2);
    return;
}
int main(){
    long long t;
    // scanf("%lld", &t);
    // while(t--)
        solve();
    return 0;
}