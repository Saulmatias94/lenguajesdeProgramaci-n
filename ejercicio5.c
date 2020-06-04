#include<stdio.h>
void main() {
 int dia;
 int hora ;
 int min;

int segD,segH,segM, segT;

printf("Ingrese los dias\n");
scanf("%d", &dia);
printf("Ingrese las horas\n");
scanf("%d", &hora);
printf("Ingrese los minutos\n");
scanf("%d", &min);


 segD= ((dia*24)*60)*60;
 segH= (hora*60)*60;
 segM=min*60;
 segT= segD+segH+segM;

 
printf("segundos segundos:%d\n",segT);

}

