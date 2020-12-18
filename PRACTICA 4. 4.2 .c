#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void vector_aleatorio(int vector01[], int vector02[], int tamano);

void mostrar_vector(int sumar[], int tamano);

int main()
{
int vector01[10], vector02[10], sumar[10], sum[10], tamano, i, j, k;
printf("Ingresar entradas del vector:");
scanf("%d",&tamano);

vector_aleatorio(vector01, vector02, tamano);

printf("el primer vector es: ");
mostrar_vector(vector01,tamano);
printf("el segundo vector es: ");
mostrar_vector(vector02,tamano);
return 0;
}

void vector_aleatorio(int vector01[], int vector02[], int tamano)
{
int i, j;
srand(time(NULL));
for(i = 0; i < tamano; ++i)
{
vector01[i] = rand();}
for(i = 0; i < tamano; ++i)
{
vector02[i]=rand();}
}

void mostrar_vector(int sumar[], int tamano)
{
int i, j;

for(i = 0; i < tamano; ++i)
{
printf("%d\n ", sumar[i]);
}
printf("\n");
}
