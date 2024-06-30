#include <iostream>

int main()
{
	int a;
	char znak;
	int b;

	printf("Entered operation: ");
	scanf_s("%d %c %d", &a, &znak, 1, &b);

	switch (znak)
	{
	case '+':

		int c;
		c = a + b;
		printf("Sum= %d\n", c);
		break;

	case '-':
		

		c = a - b;
		printf("Raznoct= %d\n", c);
		break;

	case '*':


		c = a * b;
		printf("Ymnozenie= %d\n", c);
		break;

	case '/':


		c = a / b;
		printf("Delenie= %d\n", c);
		break;


	
	default:
		printf("???????");
		break;
	}
}


