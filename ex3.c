#include <stdio.h>
#include <math.h>
 
int potencia (base, expo) {
	return pow(base, expo);
}

int main () {
	int base, expo;
	printf("base:", base);
	scanf("%i", &base);
	printf("expoente (>=1) :", expo);
	scanf("%i", &expo);
	
	printf("%i", potencia(base,expo));
	

	
	
	return 0;
}
