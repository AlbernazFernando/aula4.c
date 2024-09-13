#include <stdio.h>
#include <math.h>

float dis (float x1,float y1,float x2,float y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

    
int main () {
	float x1, y1, x2, y2;
	printf("escolha o valor de x1:", x1);
	scanf("%f", &x1);
	printf("escolha o valor de y1:", y1);
	scanf("%f", &y1);
	printf("escolha  valor de x2:", x2);
	scanf("%f", &x2);
	printf("escolha o valor de y2:", y2);
	scanf("%f", &y2);
	
	float dist= dis(x1, y1, x2, y2);
	printf("%.2f", dist);
	
	
	
	
	
	return 0;
}
