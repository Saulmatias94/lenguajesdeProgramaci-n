#include<stdio.h>
void main() {
int lado1;
int lado2;
printf("Ingresa un lado1 de el rectangulo\n");
scanf("%d", &lado1);
printf("Ingresa un lado2 de el rectangulo\n");
scanf("%d", &lado2);

int perimetro=2*(lado1+lado2);
int area= lado1*lado2;


printf("perimetro del rectangulo es:%d\n",perimetro);
printf("area del rectangulo es:%d\n",area);
}
 






