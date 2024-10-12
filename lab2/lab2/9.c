//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int xor_all_digits(int n) {
//	int res = n % 10;
//	n /= 10;
//	while (n > 0) {
//		res = res ^ (n % 10);
//		n /= 10;
//	}
//	return res;
//}
//
//int main() {
//	int n = 0;
//	printf("Enter number: ");
//	scanf("%d", &n);
//	printf("Result: %d\n", xor_all_digits(n));
//	return 0;
//}