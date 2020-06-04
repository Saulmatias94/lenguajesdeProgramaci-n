#include<stdio.h>
void main() {

float codigo;
float valor;
float cantidad;
float descuento;
float iva;

printf("ingrese el codigo:\n");
scanf("%f",&codigo);
printf("ingrese el valor:\n");
scanf("%f",&valor);
printf("ingrese el cantidad:\n");
scanf("%f",&cantidad);
printf("ingrese el descuento:\n");
scanf("%f",&descuento);
printf("ingrese el iva:\n");
scanf("%f",&iva);

float valor1 = valor * cantidad;
float descuento1= (valor1*descuento)/100;
float valorS= valor1-descuento1;
float valorT= valorS+((valorS*iva)/100);

printf("valor total:%f\n", valorT);
}
