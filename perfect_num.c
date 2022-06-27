#include<stdio.h>
int main()
{
	int num, a = 0, b, i, var;
	//pritf("Program to check whether a number is perfect of not.\n\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	//printf("\nThe factors of %d are: ", num);
	
	for(i = 1; i <= num; i++){
		b = num % i;
		if (b == 0){
			//printf("%d ", i);
			a+=i;
		}
	}
	//printf("\n\nThe value of sum of factors of %d is: %d\n",num, a);
	var = a - num;
	if(var == num){
		printf("\n%d is a perfect number\n", num);
	}
	else{
		printf("\n%d is not a perfect number\n", num);
	}
	return 0;	
}
