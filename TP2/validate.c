
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "input.h"





char verificarSN(char mensaje[])
{

    char respuesta;

    respuesta = tolower(getChar(mensaje));

    while(respuesta != 's' && respuesta != 'n')
    {

        printf("\nError, ingrese respuesta correcta.\n");
        respuesta = tolower(getChar(mensaje));

    }

    return respuesta;


}


char verificarMF(char mensaje[])
{

    char respuesta;

    respuesta = tolower(getChar(mensaje));

    while(respuesta != 'f' && respuesta != 'm')
    {

        printf("\nError, ingrese respuesta correcta 'm' para masculino 'f' para femenino.\n");
        respuesta = tolower(getChar(mensaje));

    }

    return respuesta;


}








int isEmail (char cadena[]){

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if(cadena[i] == '@')
            {

                flag = 1;
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



int onlyNumbers(char cadena[])
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
int onlyLetters(char cadena[])
{

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= 'A' && cadena [i]<='Z') || (cadena[i] >= 'a' && cadena [i]<='z') || cadena[i] == ' ' )
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

int onlyAlphanumeric(char cadena[])
{

    int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || ((cadena[i] >= 'a' && cadena [i]<='z') || (cadena[i] >= 'A' && cadena [i]<='Z')) )
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

            if(onlyLetters(cadena) == 1){

                flag = 0;

            }

            if(onlyNumbers(cadena) == 1){

                flag = 0;
            }

    return flag;
}
int onlyPhoneNumbers(char cadena[]){

int i = 0;
    int flag = 0;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[i] == '-' || cadena[i] == '+')
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


    if (onlyNumbers(cadena) == 1){

        flag = 1;
    }


    return flag;





}


int isStringWithDefinedSize(char cadena [],int tam){

    int verificador;

    if(strlen(cadena) <= tam ){

        verificador = 1;

    }else{

    verificador = 0;

    }

    return verificador;

}

int isNumberWithDefinedRange(int number, int maximo, int minimo){

    int verificador;

    if(number >= minimo && number<= maximo ){


        verificador = 1;
    }else{


    verificador = 0;
    }

    return verificador;

}





