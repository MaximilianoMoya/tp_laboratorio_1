

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validate.h"







void getString(char cadena[], char mensaje[],char Emensaje[])
{


    char aux[50];
    printf(mensaje);
    fflush(stdin);
    gets(aux); // a prueba

    strcpy(cadena,aux);

    while(strcmp(cadena,"")==-1)
    {

        printf(Emensaje);
        printf(mensaje);
        // scanf("%s",aux);
        fflush(stdin);
        gets(aux); // a prueba

        strcpy(cadena,aux);

    }


}


int getInt(char mensaje[],char Emensaje[])
{
    char aux[60];
    int verificar = 0;
    int respuesta;



    while(verificar == 0)
    {

        getString(aux,mensaje,Emensaje);
        verificar= isNumber(aux);

        if(verificar == 0)
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




float getFloat(char mensaje[],char Emensaje[])
{

    char aux[60];
    int verificar = -1;

    float resultado;



    while(verificar == 1)
    {



        getString(aux,mensaje,Emensaje);

        verificar = isFloat(aux);


        if(verificar == 0 )
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








void getEmail(char cadena[], char mensaje[])
{


    char aux[50];

    printf(mensaje);

    fflush(stdin);
    gets(aux);


    while(isEmail(aux) ==  -1)
    {
        printf("\nError! ingresar email valido: ");
        printf(mensaje);
        fflush(stdin);
        gets(aux);


    }


    strcpy(cadena,aux);

}




void getStringWithDefineSize(char cadena[], char mensaje[],int tam,char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(isStringWithDefinedSize(cadena,tam) ==  -1)
    {
        printf("\n Error! Cadena supera el limite establecido");
        getString(cadena,mensaje,Emensaje);
    }



}

int getNumberWithDefinedRange(char mensaje[], int maximo, int minimo, char Emensaje[]){


    int rta;

    rta = getInt(mensaje,Emensaje);

    while(isNumberWithDefinedRange(rta,maximo,minimo)==  -1){

            printf(Emensaje);
            rta = getInt(mensaje,Emensaje);

    }


    return rta;

}

void getPhoneNumber(char cadena[], char mensaje[],char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(onlyPhoneNumbers(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}

void getOnlyLetters(char cadena[], char mensaje[],char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(onlyLetters(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}


void getonlyAlphanumeric(char cadena[], char mensaje[],char Emensaje[])
{


    getString(cadena,mensaje,Emensaje);



    while(onlyAlphanumeric(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}



void getCuil(char cadena[],char mensaje[],char Emensaje[]){


 getString(cadena,mensaje,Emensaje);



    while(onlyCuil(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}

void getArchivo(char cadena[],char mensaje[],char Emensaje[]){


 getString(cadena,mensaje,Emensaje);



    while(isArchivo(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }





}


void getDNI(char cadena[],char mensaje[],char Emensaje[]){


 getString(cadena,mensaje,Emensaje);



    while(onlyDNI(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }



}

void getOnlyNumbers(char cadena[],char mensaje[],char Emensaje[]){


getString(cadena,mensaje,Emensaje);



    while(onlyNumbers(cadena) ==  -1)
    {
        printf(Emensaje);
        getString(cadena,mensaje,Emensaje);
    }





}
