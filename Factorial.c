#include <stdio.h>
int factorial(int);
 
int main(void)
{
	int num = 0;
	printf("Ingrese un numero");
	scanf("%d", &num);
	printf("El factorial es: %d ", factorial(num));
}

int factorial(int num)
{
	if(num>1)
		return num*(factorial(num-1));

	else 
		return 1;

}