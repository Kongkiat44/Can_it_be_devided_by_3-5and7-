#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	printf("Enter one number : ");
	scanf("%d",&num);
	if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0) printf("it can be \"divided\" by 3, 5 and 7\n");
	else printf("it can't be \"divided\" by 3, 5 and 7\n");
	return 0;
}
