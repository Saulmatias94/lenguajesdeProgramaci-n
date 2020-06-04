#include<stdio.h>
void main() {
 int horas = 24;
 int min = 60;
 int seg = 60;

int input_seconds;
printf("Ingrese los segundos\n");
scanf("%d", &input_seconds);

 int segundos = input_seconds % seg;

 int minutos = input_seconds / seg % (min * horas);
 int  dias = input_seconds / seg / min / horas;

printf("segundos ingresados:%d\n",input_seconds);
printf("segundos dias:%d\n",dias);
printf("segundos minutos:%d\n",minutos);
printf("segundos segundos:%d\n",segundos);
return 0;
}

