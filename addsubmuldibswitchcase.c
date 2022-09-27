#include<stdio.h>
int main()
{
	char op;
	int a, b, result;
		
		printf("enter the operator (+,-,*,/):");
		scanf("%c",&op);
		
		printf("enter two operends a and b \n");
		scanf("%d %d",&a,&b);
		
		
		switch(op){
			case '+':
				result=a +b;
				break;
				
				case '-':
				result=a - b;
				break;
				
				case '*':
					result= a * b;
					break;
					
					case '/':
						result= a / b;
						break;
			
		
		}
		printf("result = %d",result);
		return 0;
	}
	