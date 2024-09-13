#include <stdio.h>
#include <math.h>

int absoluto (a, b, c, d, e) {
	int r = a + b + c + d + e;
	return absoluto (r);
} 
 
int main () {
	int a, b, c, d, e;
	printf("escolha um valor:");
	scanf("%i", &a);
	printf("escolha outro valor:");
	scanf("%i", &b);
	printf("escolha outro valor:");
	scanf("%i", &c);
	printf("escolha outro valor:");
	scanf("%i", &d);
	printf("escolha outro valor:");
	scanf("%i", &e);
	
	printf("%i\n", absoluto (a, b, c, d, e));
	
	return 0;
}
