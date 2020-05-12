#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validate.h"



/** \brief Obtiene un entero
 *
 * \param char[]  mensaje[] char mensaje a mostrar al pedir el entero
 * \return int numero pedido
 *
 */
int getInt(char mensaje[]);


/** \brief Verifica si es un flotante
 *
 * \param float number flotante a verificar
 * \return int 1 si es flotante 0 si no
 *
 */
int isFloat(float number);



/** \brief Obtener un flotante
 *
 * \param char mensaje[]  mensaje al pedir el flotante
 * \return float flotante obtenido
 *
 */
float getFloat(char mensaje[]);




/** \brief  obtiene un caracter
 *
 * \param char mensaje[] char mensaje al pedir el caracter
 * \return char caracter obtenido
 *
 */
char getChar(char mensaje[]);






/** \brief Obtiene un string
 *
 * \param char array donde sera copiado el string
 * \param char mensaje al pedir el string
 *
 *
 */
void getString(char cadena[], char mensaje[]);


/**
*\brief Verifica si un string es un numero o no
*\param char[] string a verificar
*\return devuelve 1 como true y 0 como false
*/
int isNumber(char numero[]);


/**
*\brief Obtiene un string siendo este un email
*\param mensaje para pedir email
*\return string email
*/
void getEmail(char cadena[], char mensaje[]);


/** \brief Obtiene un numero segun el rango que se precisa
 *
 * \param mensaje[] char Mensaje para pedir numero
 * \param maximo int Hasta que numero
 * \param minimo int Desde que numero
 * \param eMensaje[] char Mensaje de error
 * \return int
 *
 */
int getNumberWithDefinedRange(char mensaje[], int maximo, int minimo, char eMensaje[]);



/** \brief Obtiene un numero de telefono
 *
 * \param cadena[] char array donde sera copiado el string
 * \param mensaje[] char mensaje respectivo a lo que sepide
 * \param Emensaje[] char mensaje en caso de error debido a no cumplir la condicion para ser telefono
 * \return void
 *
 */
void getPhoneNumber(char cadena[], char mensaje[],char Emensaje[]);





/** \brief Obtiene un string solo de letras
 *
 * \param cadena[] char array donde sera copiado el string
 * \param mensaje[] char mensaje respectivo a lo que sepide
 * \param Emensaje[] char  mensaje en caso de error debido a no cumplir la condicion para ser un string de solo letras
 * \return void
 *
 */
void getOnlyLetters(char cadena[], char mensaje[],char Emensaje[]);
