#include <stdio.h>
void ingr_vec(int vector01[], int vector02[], int tamano);

void mostrar_vector(int sumar[], int tamano);

void suma_vectores(int vector01[], int vector02[], int
suma_resultado[], int tamano);
int main()
{
int vector01[10], vector02[10], sumar[10], sum[10], tamano, i, j, k;
printf("Ingresar entradas del vector: ");
scanf("%d",&tamano);

ingr_vec(vector01, vector02, tamano);

suma_vectores(vector01, vector02, sum, tamano);

mostrar_vector(sum,tamano);
return 0;
}
void ingr_vec(int vector01[], int vector02[], int tamano)
{
1
int i, j;
printf("\n ingrese entradas del vector a:\n");
for(i = 0; i < tamano; ++i)
{
printf("ingresar elementos a%d: ", i + 1);
scanf("%d", &vector01[i]);
}
printf("\n ingrese entradas del vector b:\n");
for(i = 0; i < tamano; ++i)
{
printf("ingresar elementos b%d: ", i + 1);
scanf("%d", &vector02[i]);
}
}

void mostrar_vector(int sumar[], int tamano)
{
int i, j;
printf("\n vector resultante:\n");
for(i = 0; i < tamano; ++i)
{
printf("%d ", sumar[i]);
}
printf("\n");
}
void suma_vectores(int vector01[], int vector02[], int sum[], int tamano)
{
int i;
for(i = 0; i < tamano; ++i)
{
sum[i] = 0;
}
for(i = 0; i < tamano; ++i)
{
sum[i] += vector01[i] + vector02[i];
}
}