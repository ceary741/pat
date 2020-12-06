#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	int result[num];
	long  a, b, c;
	
	for(int i = 0; i<num; i++){
		scanf("%ld%ld%ld", &a, &b, &c);
		if(a + b > c)
			result[i] = 1;
		else
			result[i] = 0;
	}
	for(int i = 0; i<num; i++){
		if(result[i])
			printf("Case #%d: true\n", i+1);
		else
			printf("Case #%d: false\n", i+1);
	}
	return 0;
}
