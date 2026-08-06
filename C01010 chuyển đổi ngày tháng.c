#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long y = n/365, m = (n - y*365) / 7, d = (n - y *365 - m * 7); 
	printf("%lld %lld %lld", y, m, d);

	return 0;

}