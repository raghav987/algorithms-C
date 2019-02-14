#include <stdio.h>

int main(void) {
	int a;
	float b;
	scanf("%d",&a);
	scanf("%f",&b);
	if(a%5 == 0 && b-0.5>=a)
	    printf("%f",b-a-0.5);
	else
	    printf("%f",b);
	return 0;
}
