#include <stdio.h>
#include <stdlib.h>

#include "utn.h"
#include "operaciones.h"

void menu(int flag1, int flag2, float a, float b);
void mostrarResultado(float suma, float resta, float division,float multiplicacion,double factorialA, double factorialB);



int main()
{
    float a;
    float b;

    int rta =0;

    int flag1= 0;
    int flag2=0;

    float suma;
    float resta;
    float division;
    float multiplicacion;
    double factorialA;
    double factorialB;


    do
    {


        menu(flag1,flag2,a,b);

        rta = getInt("Ingrese opcion: ");

        system("cls");

        switch(rta)
        {

        case 1:
            a = getFloat("Ingrese valor de A: ");
            flag1 = 1;
            system("cls");
            break;

        case 2:
            b = getFloat("Ingrese valor de B: ");
            flag2 = 1;
            system("cls");
            break;
        case 3:
            printf("Se han calculado las operaciones con exito. \n");

            suma = sumar(a,b);
            resta = restar(a,b);
            division = dividir(a,b);
            multiplicacion = multiplicar(a,b);
            factorialA = factorial(a);
            factorialB = factorial(b);

            system("Pause");
            system("cls");


            break;
        case 4:
                mostrarResultado(suma,resta,division,multiplicacion,factorialA,factorialB);
            break;
        case 5:


            printf("Saliendo de programa");


            break;

        default:
            printf("Error! Ingresar opcion valida\n");



        }





    }
    while(rta != 5);



    return 0;
}

void menu(int flag1, int flag2, float a, float b)
{

    if(flag1 == 1)
    {

        printf("\n1. Ingresar 1er operando (A=%.2f)\n",a);
    }
    else
    {
        printf("\n1. Ingresar 1er operando (A=x)\n");
    }

    if(flag2 == 1)
    {

        printf("2. Ingresar 2do operando (B=%.2f)\n",b);
    }
    else
    {
        printf("2. Ingresar 2do operando (B=y)\n");
    }



    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n");

}
void mostrarResultado(float suma, float resta, float division,float multiplicacion,double factorialA, double factorialB){


            printf("El resultado de A+B es: %.2f\n",suma);
            printf("El resultado de A-B es: %.2f\n",resta);

            if(division == 0)
            {
                printf("No es disponible dividir por cero\n");

            }
            else
            {
                printf("El resultado de A/B es: %.2f\n",division);
            }


            printf("El resultado de A*B es: %.2f\n",multiplicacion);


            if(factorialA == -2)
            {
                printf("El factorial de A es demasiado grande para mostrar debido al poco tamanio de memoria\n ");
            }
            else
            {

                if(factorialA == -1)
                {

                    printf("El factorial de A es imposible de realizar debido a ser un numero decimal o ser un numero negativo\n");


                }
                else
                {

                    printf("El factorial de A es de %.0f y \n",factorialA);

                }
            }



            if(factorialB == -2)
            {
                printf("El factorial de B es demasiado grande para mostrar debido al poco tamanio de memoria \n");
            }
            else
            {

                if(factorialB == -1)
                {

                    printf("El factorial de B es imposible de realizar debido a ser un numero decimal o ser un numero negativo\n");


                }
                else
                {

                    printf("El factorial de B es de %.0f  y \n",factorialB);

                }
            }




            system("Pause");
            system("cls");




}





