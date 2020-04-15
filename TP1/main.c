#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "operaciones.h"
#include "mostrar.h"




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

            if(verificarCarga(flag1,flag2) ==  1)
            {

                printf("\nDebe ingresar los datos antes de operar\n");

                system("Pause");
                system("cls");


            }
            else
            {



                printf("Se han calculado las operaciones con exito. \n");

                suma = sumar(a,b);
                resta = restar(a,b);
                division = dividir(a,b);
                multiplicacion = multiplicar(a,b);
                factorialA = factorial(a);
                factorialB = factorial(b);

                system("Pause");
                system("cls");
            }

            break;
        case 4:
               if(verificarCarga(flag1,flag2) ==  1)
            {

                printf("\nDebe ingresar los datos antes de poder mostrar los resultados\n");

                system("Pause");
                system("cls");


            }else{


            mostrarResultado(suma,resta,division,multiplicacion,factorialA,factorialB);

            }




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

