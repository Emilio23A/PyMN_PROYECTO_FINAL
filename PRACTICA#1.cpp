#include <iostream>
#include <math.h>
int main() {
float radio;
float pi = 3.1416;
printf("valor del radio");
	scanf("%f",&radio);
	float volumen = (4*(pi)*(pow(radio,3)))/3;
		printf("\n El valor del volumen es = %f", volumen);

float masa;
float ConstanteGravitatoria = 9.8;
printf("\n \n valor del peso de la masa de la persona");
scanf("%f",&masa);
float FuerzaDeAtraccion = masa*ConstanteGravitatoria;
printf("\n El valor  es = %f", FuerzaDeAtraccion);

char nombre[10];
int Edad;
float Estatura, Peso;


printf("\n\n  nombre");
scanf("%s",&nombre);

printf("\n edad");
scanf("%d",&Edad);

printf("\n estatura");
scanf("%f",&Estatura);

printf("\n peso");
scanf("%f",&Peso);

printf("\n nombre %s",nombre);
printf("\n edad %d",Edad);
printf("\n estatura %f",Estatura);
printf("\n peso %f",Peso);


float IMC = Peso/(pow(Estatura,2));
printf("\n el imc es %f",IMC);

return 0;





}
