#include <stdio.h>

int main(void) {
	int num;
	int r[5] = {};
	char c = ' ';
	int cnt = 1;
	int cnt2 = 0;
	scanf("%d", &num);
	while (c == ' ') {
		scanf("%d", &num);
		switch (num % 5) {
			case 0:
				if (num % 2 == 0)
					r[0] += num;
				break;
			case 1:
				if ((cnt++) % 2 == 0)
					r[1] -= num;
				else
					r[1] += num;
				break;
			case 2:
				r[2]++;
				break;
			case 3:
				r[3] += num;
				cnt2++;
				break;
			case 4:
				if (r[4] < num)
					r[4] = num;
				break;
		}
		scanf("%c", &c);
	}

	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			if (r[3] == 0)
				printf("N ");
			else
				printf("%.1f ", r[3] / (float)cnt2);
		} else {
			if (i == 4) {
				if (r[i] == 0)
					printf("N");
				else
					printf("%d", r[i]);
			} else {
				if (r[i] == 0)
					printf("N ");
				else
					printf("%d ", r[i]);
			}
		}
	}
	printf("\n");
	return 0;
}
