#include<stdio.h>
#include<add.h>
#include<sub.h>
#include<mult.h>
#include<mod.h>
#include<divide.h>
int main(void){

	float num1 , num2 ;
    char operation;
	printf("enter num1 : ");
	scanf("%f",&num1);
	printf("enter operator : ");
	scanf("%s",&operation);
	printf("enter num2 : ");
	scanf("%f",&num2);
	
	switch (operation){
		case '%':
			printf("the result of mod %d by %d = %d",(int)num1,(int)num2, mod((int)num1, (int)num2));
			break;
		case '+':
			printf("the result of adding %f and %f = %f",num1,num2, add(num1, num2));
			break;
		case '-':
			printf("the result of subtracting %f from %f = %f",num2,num1, subtraction(num1, num2));
			break;
		case '*':
			printf("the result of multiplication %f by %f = %f",num1,num2, multiply(num1, num2));
			break;
		case '/':
			printf("the result of dividing %f by %f = %f",num1,num2, divide(num1, num2));
			break;
		
	}
	
	return 0;
}
