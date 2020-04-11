#include <stdio.h>
#include <stdlib.h>
#include <string.h>







int getInt(char mensaje[])
{
    char aux[60];
    int verificar = 0;
    int respuesta;



    while(verificar == 0)
    {

        getString(aux,mensaje);
        verificar= isNumber(aux);

        if(verificar == 1)
        {

            respuesta = atoi(aux);
            break;




        }

        else
        {

             printf("\n********Error********\n");


        }



    }



    return respuesta;



}

int isFloat(char cadena[])
{

    int flag;
    int i = 0;

    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-' || cadena[i] == '.')
            {

                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = 0;


    }






    return flag;

}


float getFloat(char mensaje[])
{

    char aux[60];
    int verificar = 0;

    float resultado;



    while(verificar == 0)
    {



        getString(aux,mensaje);

        verificar = isFloat(aux);


        if(verificar == 1 )
        {


            resultado = atof(aux);
            break;



        }
        else
        {

            printf("\n********Error********\n");



        }

    }











    return resultado;



}



char getChar(char mensaje[])
{


    char aux;

    printf("%s",mensaje);
    aux = getche();

    return aux;


}






void getString(char* cadena[], char mensaje[])
{


    char aux[50];

    printf(mensaje);
   // scanf("%s",aux);
    gets(aux); // a prueba

    strcpy(cadena,aux);





}


int isNumber(char cadena[])
{

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-')
            {

                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = 0;


    }


    return flag;
}


