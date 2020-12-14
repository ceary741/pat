import java.util.Scanner;

public class P1007 {
	public static void main(String args[]) {
		int[] prime = new int[10000];
		prime[0] = 2;
		int cnt = 1;
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int walker = 3;
		boolean isPrime;
		while (walker <= n) {
			isPrime = true;
			for (int i = 0; prime[i] <= (walker / prime[i]); i++) {
				if (walker % prime[i] == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				prime[cnt] = walker;
				cnt++;
			}
			walker++;
		}
		
		int num = 0;
		for(int i = 0; i < cnt - 1; i++) {
			if(prime[i + 1] - prime[i] == 2)
				num++;
		}
		
		System.out.println(num);
	}
}
