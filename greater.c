#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter first number A: ");
	scanf("%d", &a);
	printf("Enter second number B: ");
	scanf("%d", &b);
	printf("Enter third number C: ");
	scanf("%d", &c);
	
	if(a > b && a > c){
		printf("\nThe greatest number is: %d\n", a);
	}
	else if(b > a && b > c){
		printf("\nThe greatest number is: %d\n", b);
	} 
	else{
		printf("\nThe greatest number is: %d\n", c);
	}
	return 0;
}

