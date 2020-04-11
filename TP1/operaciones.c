#include <stdio.h>
#include <stdlib.h>


float sumar( float a, float b)
{

    float aux;

    aux = a + b;
    return aux;

}

float restar( float a, float b)
{

    float aux;

    aux = a - b;
    return aux;

}

float dividir( float a, float b)
{

    float aux;

    if(b == 0)
    {

        aux = 0;
    }
    else
    {

        aux = a / b;
    }


    return aux;

}


float multiplicar( float a, float b)
{

    float aux;

    aux = a * b;
    return aux;

}

double factorial(float num)
{

    double rta = 1;

    int numeroEntero;

    numeroEntero = num;


    if(num - numeroEntero != 0 || num < 0)
    {

        rta = -1;
    }
    else
    {

        for(int i = 0; i<num; i++)
        {


            rta *=(double ) num-i;

        }


    }
   if(num > 170)
    {


        rta = -2;
    }





    return rta;


}
