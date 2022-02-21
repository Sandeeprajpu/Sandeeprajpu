# include<stdio.h>

int main()

{
	int ch;
	
	printf(" Enter the no. for dish:\n");
	
	scanf("%d",&ch);
	
	switch(ch)
	
	{
		case 1:
		
		printf("Pizza, Rs 239");
		
		break;
		
		
		case 2:
		
		printf("Burger, Rs 129");
		
		break;
		
		
		case 3:
		
		printf("Pasta Rs 179");
		
		break;
		
		
		case 4:
		
		printf(" French  Fries, Rs 90");
		
		break;
		
		
		case 5:
		
		printf("Sandwich, Rs 149");
		
		break;
		
		
		default:
		printf("wrong choice , please enter a no. between (1-5)");
		
	}
	
	
	
	
}
