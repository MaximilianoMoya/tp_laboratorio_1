
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "input.h"





char verificarSN(char mensaje[])
{

    char respuesta;

    respuesta = tolower(getCharacter(mensaje));

    while(respuesta != 's' && respuesta != 'n')
    {

        printf("\nError, ingrese respuesta correcta.\n");
        respuesta = tolower(getCharacter(mensaje));

    }

    return respuesta;


}


char verificarMF(char mensaje[])
{

    char respuesta;

    respuesta = tolower(getCharacter(mensaje));

    while(respuesta != 'f' && respuesta != 'm')
    {

        printf("\nError, ingrese respuesta correcta 'm' para masculino 'f' para femenino.\n");
        respuesta = tolower(getCharacter(mensaje));

    }

    return respuesta;


}

int isMoF(char sexo)
{
    int respuesta = -1;

    if(sexo == 'f' || sexo == 'm'){


    respuesta = 0;

    }

    return respuesta;


}








int isEmail (char cadena[]){

    int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if(cadena[i] == '@')
            {

                flag = 0;
            }

            i++;

        }



    }



    return flag;
}



int onlyNumbers(char cadena[])
{

    int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-')
            {

                flag = 0;
            }
            else
            {
                flag = -1;
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
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= 'A' && cadena [i]<='Z') || (cadena[i] >= 'a' && cadena [i]<='z') || cadena[i] == ' ' )
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = -1;


    }


    return flag;
}

int onlyAlphanumeric(char cadena[])
{

    int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || ((cadena[i] >= 'a' && cadena [i]<='z') || (cadena[i] >= 'A' && cadena [i]<='Z')) )
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }



            i++;

        }



    }
    else
    {

        flag = -1;


    }


            if(onlyLetters(cadena) == 0){

                flag = -1;

            }

            if(onlyNumbers(cadena) == 0){

                flag = -1;
            }


    return flag;
}
int onlyPhoneNumbers(char cadena[]){

int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[i] == '-' || cadena[i] == '+')
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = -1;


    }


    if (onlyNumbers(cadena) == 1){

        flag = 0;
    }


    return flag;





}


int isStringWithDefinedSize(char cadena [],int tam){

    int verificador = -1;

    if(strlen(cadena) <= tam ){

        verificador = 0;

    }else{

    verificador = -1;

    }

    return verificador;

}

int isNumberWithDefinedRange(int number, int maximo, int minimo){

    int verificador = -1;

    if(number >= minimo && number<= maximo ){


        verificador = 0;
    }else{


    verificador = -1;
    }

    return verificador;

}


int onlyCuil(char cadena[]){

int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {   //20-39068081-4

            if((cadena[i] >= '0' && cadena [i]<='9') || (cadena[2] == '-' || cadena[11] == '-'))
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = -1;


    }


    if(strlen(cadena)==13){
        flag = 0;
    }else{

    flag = -1;

    }


    return flag;





}

int isArchivo(char cadena[]){

  int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= 'A' && cadena [i]<='Z') || (cadena[i] >= 'a' && cadena [i]<='z') || cadena[i] == '.' )
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = -1;


    }


    return flag;





}


int onlyDNI(char cadena[]){

int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {   //20-39068081-4

            if((cadena[i] >= '0' && cadena [i]<='9'))
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = -1;


    }


    if(strlen(cadena)==8){
        flag = 0;
    }else{

    flag = -1;

    }


    return flag;






}


int isNumber(char cadena[])
{

    int i = 0;
    int flag = -1;


    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-' || cadena[i] == '.')
            {

                flag = 0;
            }
            else
            {
                flag = -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag = -1;


    }


    return flag;
}

int isFloat(char cadena[])
{

    int flag = -1;
    int i = 0;

    if(cadena != NULL)
    {

        while(cadena[i] != '\0' )
        {

            if((cadena[i] >= '0' && cadena [i]<='9') || cadena[0] == '-' || cadena[i] == '.')
            {

                flag = 0;
            }
            else
            {
                flag =  -1;
                break;
            }

            i++;

        }



    }
    else
    {

        flag =  -1;


    }






    return flag;

}
