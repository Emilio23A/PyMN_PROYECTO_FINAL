#include <stdio.h>
#include <math.h>
float ftrig(float x);
float flog(float x);
float ferrabs(float x, float y);
void biseccion(float x0, float x1,int n,float (*f)(float),
float (*g)(float, float));
int main()
{
float x0, x1;
int e, step = 1;
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
printf("Ingresar numero de veces:\n");
scanf("%d", &e);

biseccion(x0,x1,e,ftrig,ferrabs);

printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
printf("Ingresar numero de veces:\n");
scanf("%d", &e);
biseccion(x0,x1,e,flog,ferrabs);
return 0;
}

float ftrig(float x) {
return (2*x*cos(2*x))-pow((x+1),2);
}
float flog(float x) {
return log(x)+pow(x,2)-4;
}
float ferrabs(float x, float y){
return 100*fabs((x-y)/y);}
void biseccion(float x0,float x1, int n, float (*f)(float),
float (*g)(float,float))
{
float f0, f1, x2,f2, error;
int vez =1;

f0 = (*f)(x0);
f1 = (*f)(x1);
while( f0 * f1 > 0.0)
{
printf("valores inadecuados.\n");
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
f0 = (*f)(x0);
f1 = (*f)(x1);
}
printf("\n n\tx0\tx1\tx2\tf(x2)\t error\n");
do
{
x2 = (x0 + x1)/2;
f2 = (*f)(x2);
error = (*g)(x1,x2);
printf("%d\t%3.3f\t%3.3f\t%3.3f\t%3.3f\t%2.5f\n",
vez, x0, x1, x2, f2,error);
if( f0 * f2 < 0)
{
x1 = x2;
f1 = f2;
}
else
{
x0 = x2;
f0 = f2;
}
vez = vez + 1;
}while(vez<=n);
printf("\nLa raíz es: %f\n", x2);
}
#include <stdio.h>
#include <math.h>
float ftrig(float x);
float flog(float x);

float ferrabs(float x, float y);
void falsa_posicion(float x0, float x1,int n,float (*f)(float),
float(*g)(float, float)); 
int main()
{
float x0, x1;
int e, vez = 1;
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
printf("Ingresar numero de veces:\n");
scanf("%d", &e);

falsa_posicion(x0,x1,e,ftrig,ferrabs);

printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
printf("Ingresar numero de veces:\n");
scanf("%d", &e);
falsa_posicion(x0,x1,e,flog,ferrabs);
return 0;
}

float ftrig(float x) {
return (2*x*cos(2*x))-pow((x+1),2);
}
float flog(float x) {
return log(x)+pow(x,2)-4;
}

float ferrabs(float x, float y){
return 100*fabs((y-x)/y);}

void falsa_posicion(float x0,float x1, int n, float (*f)(float),
float(*g)(float,float))
{
float f0, f1, x2,f2, error;
int vez =1;

f0 = (*f)(x0);
f1 = (*f)(x1);

while( f0 * f1 > 0.0)
{
printf("valores inadecuados.\n");
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
f0 = (*f)(x0);
f1 = (*f)(x1);
}
printf("\n n\tx0\tx1\tx2\tf(x2)\t error\n");

do
{
x2 = x0 - (x0-x1) * f0/(f0-f1);
f2 = (*f)(x2);
error = (*g)(x1,x2);
printf("%d\t%3.3f\t%3.3f\t%3.3f\t%3.3f\t%2.5f\n",vez, x0, x1, x2, f2,error);
if(f0*f2 < 0)
{
x1 = x2;
f1 = f2;
}
else
{
x0 = x2;
f0 = f2;
}
vez = vez + 1;
}while(vez<=n);
printf("\nLa raíz es: %f\n", x2);
}