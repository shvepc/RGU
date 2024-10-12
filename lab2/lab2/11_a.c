//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int ones_line(int n) {
//	int i, res = 0;
//
//	for (i = 0; i < n; ++i) {
//		res += pow(2, i);
//	}
//	return res;
//}
//
//void printb(unsigned int v) {
//	unsigned int i, s = 1 << ((sizeof(v) << 3) - 1);
//	for (i = s; i; i >>= 1) printf("%d", v & i || 0);
//}
//
//int main() {
//
//	int n, i, len, r, l, res = 0;
//	printf("Enter number: ");
//	scanf("%d", &n);
//	printf("Enter i: ");
//	scanf("%d", &i);
//	printf("Enter len: ");
//	scanf("%d", &len);
//
//	r = ones_line(i) & n;
//	l = (ones_line(i) & (n >> (len - i))) << i;
//	res = r | l;
//	printb(res);
//	return 0;
//}