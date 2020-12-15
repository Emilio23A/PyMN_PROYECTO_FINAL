
#include <stdio.h>

int main ()
{
int a,b,c,numero,i;
a = 0;
b = 1;
c = 1;
printf("ingrese un numero");
scanf("%d",&numero);

for(i=1;i<=numero;i++){
    c= a+b;
    a=b;
    b=c;
    printf("%d,",c);
}


}


