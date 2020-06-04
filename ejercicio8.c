#include<stdio.h>
void main() {
	
	float R1;
	float R2;
	float req;
	
	
	printf("ingrese resistencia 1 :\n ");
    scanf("%f",&R1);
    printf("ingrese resistencia 2 :\n ");
    scanf("%f",&R2);
    
    req= (R1*R2)/(R1+R2);
    printf("resistencia:%f\n ", req);
}
