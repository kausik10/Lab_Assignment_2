#include<stdio.h>
int main()
{
	int a, b, add, subtract, product, division, count = 0;
	int choice;
	printf("Enter the first number A: ");
	scanf("%d", &a);
	printf("Enter the second number B: ");
	scanf("%d", &b);
	/**add = a + b;
	subtract = a - b;
	product = a * b;
	division = a / b;**/
	
	//for (int j=1; j<=3;j++){
	
	printf("\nWhat do you want to do? \n");
	top:
	if(count >= 3){
			printf("\nBetter luck next time motherfucker\n\n");

	}
	else{
	printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	printf("\nPlese type the number (1/2/3/4): ");
	add = a + b;
        subtract = a - b;
        product = a * b;
        division = a / b;		
	scanf("%d", &choice);
	printf("\n");
	switch(choice){
	
	case 1:
		printf("The sum is: %d\n", add);
		break;
	case 2:
		printf("The difference is: %d\n", subtract);
		break;
	case 3:
		printf("The product is: %d\n", product);
		break;
	case 4:
		printf("The division is: %d\n", division);
		break;
	default:
		printf("Enter the correct choice. No operation is defined for %dth choice.\n", choice);
		count +=1;
		goto top;
		}		
	}
	
	
	
	return 0;
}
