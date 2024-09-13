#include <stdio.h>

int menor (a, b, c) {
	if (a<b) {
		return a;
	} else 
	return b;
} 
    
int main () {
	int a, b, c;
	printf("escolha um valor:", a);
	scanf("%i", &a);
	printf("escolha outro valor:", b);
	scanf("%i", &b);
	
	printf("%i", menor(a,b,c));
	
	
	
	return 0;
}
