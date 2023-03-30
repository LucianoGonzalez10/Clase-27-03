#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    // EJERCICIO 1
    /* int i, cont1 = 0, cont2 = 0;

    Pila (pilita);
    Pila (aux1);
    Pila(aux2);
    inicpila(&pilita);
    inicpila(&aux1);
    inicpila(&aux2);

    for(i = 0; i<5; i++)
    {
        leer(&pilita);

        if(cont1 < 3)
        {
            apilar(&aux1, desapilar(&pilita));
            cont1++;
        }
        else if(cont2 < 2)
        {
            apilar(&aux2, desapilar(&pilita));
            cont2++;
        }
    };

    printf("CONTADOR PRIMARIO \n");
    mostrar(&pilita);
    printf("CONTADOR AUXILIAR 1 \n");
    mostrar(&aux1);
    printf("CONTADOR AUXILIAR 2 \n");
    mostrar(&aux2);

    // EJERCICIO 2
    Pila (origen);
    Pila (destino);
    inicpila (&origen);
    inicpila (&destino);

    int i, cantidad;
    printf("Ingrese la cantidad de elementos \n");
    scanf("%i", &cantidad);
    for(i=0; i<cantidad; i++)
    {
        leer (&origen);
        apilar(&destino, desapilar(&origen));
    }

    printf("PILA ORIGEN \n");
    mostrar(&origen);
    printf("PILA DESTINO \n");
    mostrar(&destino);


    // EJERCICIO 3
    Pila (dada);
    Pila (destino);
    Pila(basura);
    inicpila (&dada);
    inicpila (&destino);
    inicpila(&basura);

    int i, cantidad, num;
    printf("Ingrese la cantidad de elementos \n");
    scanf("%i", &cantidad);
    for(i=0; i<cantidad; i++)
    {
        leer (&dada);
        num = tope(&dada);
        if(num != 8){
            apilar(&destino, desapilar(&dada));
        }
        else{
            apilar(&basura, desapilar(&dada));
        }
    }
    printf("PILA DADA \n");
    mostrar(&dada);
    printf("PILA DESTINO \n");
    mostrar(&destino);
    printf("PILA BASURA \n");
    mostrar(&basura);

    // EJERCICIO 4
    Pila (origen);
    Pila (destino);
    inicpila (&origen);
    inicpila (&destino);

    int i, cantidad;
    printf("Ingrese la cantidad de elementos \n");
    scanf("%i", &cantidad);
    for(i=0; i<cantidad; i++)
    {
        leer (&origen);
        apilar(&destino, desapilar(&origen));
    }

    printf("PILA ORIGEN \n");
    mostrar(&origen);
    printf("PILA DESTINO \n");
    mostrar(&destino);

    // EJERCICIO 5

    Pila (origen);
    Pila (destino);
    inicpila (&origen);
    inicpila (&destino);

    int i, cantidad;
    printf("Ingrese la cantidad de elementos \n");
    scanf("%i", &cantidad);
    for(i=0; i<cantidad; i++)
    {
        leer (&origen);
    }
    while(pilavacia(&origen)== 0)
    {
        apilar(&destino, desapilar(&origen));
    }

    printf("PILA ORIGEN \n");
    mostrar(&origen);
    printf("PILA DESTINO \n");
    mostrar(&destino);

    /// EJERCICIO 6

    Pila origen, elemento, aux;
    inicpila(&origen);
    inicpila(&elemento);
    inicpila(&aux);
    leer(&elemento);
    int i, num = 0, flag = 0;
    for(i=0; i<5; i++)
    {
        num = num + 3;
        apilar(&origen, num);
    }
    while(!pilavacia(&origen) && (flag == 0))
    {
        if(tope(&origen) < tope(&elemento))
        {
            apilar(&origen, desapilar(&elemento));
            flag = 1;
        }
        else
        {
            apilar(&aux, desapilar(&origen));
        }
    }
    while(pilavacia(&origen))
    {
        apilar(&origen, desapilar(&elemento));
    }
    while(!pilavacia(&aux))
    {
        apilar(&origen, desapilar(&aux));
    }
    printf("BASE ORIGEN");
    mostrar(&origen);
    printf("BASE ELEMENTO");
    mostrar(&elemento);
    printf("BASE AUX");
    mostrar(&aux);

        /// EJERCICIO 7

    int busqueda, num = 0, i, flag = 0;
    Pila A, aux;
    inicpila(&A);
    inicpila(&aux);

    printf("Que elemento desea buscar en la pila? \n");
    scanf("%i", &busqueda);
    printf("El numero es %d \n", busqueda);
    for(i=0; i<3; i++)
    {
        num = num + 3;
        apilar(&A, num);
    }

    while(!pilavacia(&A) && flag == 0){
        if(tope(&A) == busqueda){
        printf("El elemento esta.");
        flag = 1;
    }
    else{
        apilar(&aux, desapilar(&A));
    }
    }

    /// EJERCICIO 8
    Pila dada, aux, eliminada;
      inicpila(&dada);
      inicpila(&aux);
      inicpila(&eliminada);
      int num=0, i, numE;
      for(i=0; i<5; i++)
      {
          num=num+3;
          apilar(&dada,num);
      }
      mostrar(&dada);
      printf("Ingresa el numero que deseas eliminar de la pila \n");
      scanf("%d", &numE);
      while (!pilavacia(&dada))
      {
          if (tope(&dada)== numE)
          {
              apilar(&eliminada,desapilar(&dada));
          }
          else
          {
              apilar(&aux,desapilar(&dada));
          }
      }
          while(!pilavacia(&aux))
          {
              apilar(&dada, desapilar(&aux));
          }
      printf("En la pila DADA quedaron:\n");
      mostrar(&dada);
      printf("En la pila AUX quedaron:\n");
      mostrar(&aux);
      printf("En la pila ELIMINADA quedaron:\n");
      mostrar(&eliminada);


    /// EJERCICIO 9
    Pila dada, dadainvertida, aux1, aux2;
    inicpila(&dada);
    inicpila(&dadainvertida);
    inicpila(&aux1);
    inicpila(&aux2);

    int dato, flag =1;

    apilar(&dada, 1);
    apilar(&dada, 3);
    apilar(&dada, 5);
    apilar(&dada, 3);
    apilar(&dada, 1);

    mostrar(&dada);

    while(!pilavacia(&dada)){
        dato = tope(&dada);
        apilar(&dadainvertida, dato);
        apilar(&aux1, desapilar(&dada));
    }

    while(!pilavacia(&aux1)){
        apilar(&dada, desapilar(&aux1));
    }

    mostrar(&dada);
    mostrar(&dadainvertida);

    while(!pilavacia(&dada) && flag==1){
        if(tope(&dada) == tope(&dadainvertida)){
            apilar(&aux1, desapilar(&dada));
            apilar(&aux2, desapilar(&dadainvertida));
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        printf("La pila es capicua \n");
    }
    else{
        printf("La pila no es capicua \n");
    }


    /// EJERCICIO 10
    Pila A,B,C,aux,aux2,basura;
    inicpila(&A);
    inicpila(&B);
    inicpila(&C);
    inicpila(&aux);
    inicpila(&basura);
    apilar(&A,1);
    apilar(&A,2);
    apilar(&A,3);
    apilar(&B,2);
    apilar(&B,3);
    apilar(&B,5);
    apilar(&B,7);
    while (!pilavacia(&B))
    {
        while (!pilavacia (&A))
        {
            if (tope(&A) == tope(&B))
            {
                apilar(&basura,desapilar(&A));
            }
            else
            {
                apilar(&aux, desapilar(&A));
            }
        }

        while (!pilavacia(&aux))
        {
            apilar(&A, desapilar(&aux));

        }
        apilar(&C,desapilar(&B));
    }

    printf("En A: \n");
    mostrar(&A);
    printf("En B: \n");
    mostrar(&B);
    printf("En aux: \n");
    mostrar(&aux);
    printf("En C: \n");
    mostrar(&C);

    /// EJERCICIO 11
    Pila A,B , ordenadafinal, aux1,aux2;
    inicpila(&A);
    inicpila(&B);
    inicpila(&ordenadafinal);
    inicpila(&aux1);
    inicpila(&aux2);
    int i, num1 = 0, num2 = 1;
    for(i=0; i<3; i++)
    {
        num1 = num1 + 2;
        apilar(&A, num1);
    }

    for(i=0; i<3; i++)
    {
        num2 = num2 + 2;
        apilar(&B, num2);
    }
    while(!pilavacia(&A)){
        apilar(&aux1, desapilar(&A));
    }

    while(!pilavacia(&B)){
        apilar(&aux2, desapilar(&B));
    }

    while(!pilavacia(&aux1) || !pilavacia(&aux2)){

        if(tope(&aux1) < tope(&aux2)){
            apilar(&ordenadafinal, desapilar(&aux1));
        }
        else{
            apilar(&ordenadafinal, desapilar(&aux2));
        }
    }

    mostrar(&A);
    mostrar(&B);
    mostrar(&ordenadafinal);
    mostrar(&aux1);
    mostrar(&aux2); */


    /// EJERCICIO 13
    Pila puntosjug1, puntosjug2, mazo, aux1, aux2;
    inicpila(&puntosjug1);
    inicpila(&puntosjug2);
    inicpila(&mazo);
    inicpila(&aux1);
    inicpila(&aux2);
    int i, num = 0, flag = 0;

    for(i=0; i<4; i++)
    {
        num = num + 4;
        apilar(&mazo, num);
    }


    while(!pilavacia(&mazo))
    {
        apilar(&puntosjug1, desapilar(&mazo));
        apilar(&puntosjug2, desapilar(&mazo));
    }

    mostrar(&puntosjug1);
    mostrar(&puntosjug2);

    apilar(&aux1, desapilar(&puntosjug1));
    apilar(&aux2, desapilar(&puntosjug2));

    if((tope(&puntosjug1) + tope(&aux1) > (tope(&puntosjug2) + tope(&aux2))))
    {
        printf("Gano el Jugador 1 \n");
        flag = 1;

        while(!pilavacia(&aux2))
    {
        apilar(&puntosjug1, desapilar(&puntosjug2));
        apilar(&puntosjug1, desapilar(&aux1));
        apilar(&puntosjug1, desapilar(&aux2));

    }
    }

    else if((tope(&puntosjug1) + tope(&aux1) == (tope(&puntosjug2) + tope(&aux2))))
    {
        printf("Gano el Jugador 1 \n");
        while(!pilavacia(&aux2))
    {
        apilar(&puntosjug1, desapilar(&puntosjug2));
        apilar(&puntosjug1, desapilar(&aux1));
        apilar(&puntosjug1, desapilar(&aux2));

    }

    }
    else
    {
        printf("Gano el Jugador 2 \n");
         while(!pilavacia(&aux2))
    {
        apilar(&puntosjug2, desapilar(&puntosjug1));
        apilar(&puntosjug2, desapilar(&aux1));
        apilar(&puntosjug2, desapilar(&aux2));
    }
    }

    printf("Mazo Jugador 1: \n");
    mostrar(&puntosjug1);

    return 0;
}
