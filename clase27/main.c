#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{/* TRABAJO PRACTICO Nª2: PILAS AVANZADO
    EJERCICIO 1
   Pila A,aux;
   inicpila (&A);
   inicpila(&aux);
   int i,num=0,suma=0;
   for (i=0;i<5;i++){
       num=num+2;
        apilar (&A,num);
   }

   while (!pilavacia(&A)){
    apilar(&aux,desapilar(&A));
    suma=suma+(tope(&aux));
   }
   printf("La suma es de :%i",suma);
   EJERCICIO 2

   Pila A,aux;
   inicpila(&A);
   inicpila(&aux);
   int cont=0,i;
   for (i=0;i<5;i++){
    apilar(&A,i);
   }
   while (!pilavacia(&A)){
    apilar(&aux,desapilar(&A));
    cont=cont+1;
   }
   while(pilavacia(&aux)){
    apilar (&A,desapilar(&aux));
   }
   printf("La cantidad de elementos en la pila A es de :%i",cont);
    EJERCICIO 3
    Pila A,aux;
    inicpila(&A);
    inicpila(&aux);
    int cont=0,i,num=0,suma=0;
    for (i=0;i<5;i++){
       num=num+2;
        apilar (&A,num);
   }

    while (!pilavacia(&A)){
    apilar(&aux,desapilar(&A));
    cont=cont+1;
    }

    while (!pilavacia(&aux)){
    apilar(&A,desapilar(&aux));
    suma=suma+(tope(&A));
   }
   int promedio=0;
   promedio=suma/cont;
   printf("El promedio de los valores de pila A es:%i",promedio);
   EJERCICIO 4 */
    Pila A,B,aux;
    inicpila(&A);
    inicpila(&B);
    inicpila(&aux);
    int i,num=0;

for (i=0;i<5;i++){
    num=num+2;
    apilar(&A,num);
}
apilar(&aux,desapilar(&A));
while(!pilavacia(&A)){
    if(tope(&A < tope(&aux)){

       }

}

mostrar(&A);
mostrar(&aux);
    return 0;
}
