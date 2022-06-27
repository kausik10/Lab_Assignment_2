#include<stdio.h>
#include<math.h>
int main()
{
	int num, store, n = 0, rem;
	printf("Enter a number to check for armstrong: ");
	scanf("%d", &num);
	//assigning the original number's value to store variable so that the original value is unchanged after looping
	store = num;
	while (store != 0){
		//rem contains the last digit of input number 
		//i.e. rem = 3 for store = 153 after the following operation
		rem = store % 10;
		//pow(rem,3) performs (rem * rem * rem )
		n += pow(rem, 3);
		//removes last digit from the input number
		//i.e. the value of store = 153 becomes store = 15 after the operation.
		store /= 10;
	}
	//checking whether n is equal to original number
	if(n == num){ 
		printf("\nThe number %d is armstrong.\n", num);
	}
	else{
		printf("\nThe number %d is not armstrong.\n", num);
	}
	return 0;
}
