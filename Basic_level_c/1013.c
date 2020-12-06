#include <stdio.h>

int main(void) {
	int m, n;
	int i; 
	scanf("%d%d", &m, &n);
	int prime[n];
	prime[0] = 2;

	int cnt = 1;
	int walker = 3;
	int isPrime;
	while(cnt<n) {
		isPrime = 1;
		for(i = 0; prime[i]<=(walker/prime[i]); i++) {
			if(walker%prime[i] == 0)
				isPrime = 0;
		}
		if(isPrime) {
			prime[cnt] = walker;
			cnt++;
		}
		walker++;
	}

	int r = 1;
	for(i = m; i<n; i++) {
		if(r%10==0)
			printf("%d\n", prime[i-1]);
		else
			printf("%d ", prime[i-1]);
		r++;
	}
	printf("%d\n", prime[n-1]);
	return 0;
}
