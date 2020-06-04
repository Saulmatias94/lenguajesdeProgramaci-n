#include<stdio.h>
void main() {

float precio;
float descuento;
float a;
float valor;
printf("Ingrese el precio\n");
scanf("%f", &precio);
printf("Ingresa el por ciento de descuento\n");
scanf("%f", &descuento);

a= (precio *descuento)/100;
valor = precio - a;
printf("El precio con el descuento es:%f\n",valor);

}
