#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    int numero;
    int acumNumero=0;
    int pares=0;
    int impares=0;
    int acumImpar=0;
    int promedio;
    int menorImpar;
    int mayorNumero;
    int contador=0;
    int contador1=0;
    int contador2=0;
    int contador3=0;
    int contador4;
    char seguir='s';
    int flag=0;
    int flag1=0;


    while(seguir=='s')
    {
        printf("ingresa un numero:" );
        scanf("%d",&numero);

        acumNumero+=numero;

        if(!((numero%2)==0))
        {
            impares++;
            acumImpar+=numero;

            if(flag1==0)
            {
                menorImpar=numero;

                flag1=1;
            }

            if (numero<menorImpar)
            {
            menorImpar=numero;
            }
        }
        else
        {
            pares++;
        }

        if(flag==0)
        {
            mayorNumero=numero;

            flag=1;
        }

        if (numero>mayorNumero)
        {
            mayorNumero=numero;
        }


        if(numero>3&&numero<15)
        {
            contador1++;
        }
        else
        {
            if(numero>16&&numero<29)
            {
                contador2++;
            }
            else
            {
                if(numero>30)
                {
                    contador3++;
                }
            }



        }

    contador++;

    printf("desea continuar? s/n \n");
    seguir=tolower(getch());



    }
    for(contador4=acumImpar;contador4>=0;contador4--)
        {
            printf("el numero anterior es: %d \n",contador4);
        }

    promedio=(float)acumNumero/contador;

    printf("la cantidad de numeros pares es: %d \n",pares);
    printf("la cantidad de numeros impares es: %d \n",impares);
    printf("la suma de todos los numeros impares es: %d \n",acumImpar);
    printf("el promedio es: %d \n",promedio);
    printf("el mayor numero ingresado es: %d \n",mayorNumero);
    printf("el numero impar menor ingresado es: %d \n",menorImpar);
    printf("entre el 3 y el 15 hay: %d numeros ,entre el 16 y el 29 hay: %d numeros y mas de 30: %d numeros \n",contador1,contador2,contador3);


    return 0;
}
