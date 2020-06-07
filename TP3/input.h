#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validate.h"







/** \brief Obtiene un entero
 *
 * \param char[]  mensaje[] char mensaje a mostrar al pedir el entero
* \param char[]  Emensaje[] char mensaje a mostrar al haber error en entrada
 * \return int numero pedido
 *
 */
int getInt(char mensaje[],char Emensaje[]);






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
  * \param char Emensaje para poner un mensaje de error
 *
 *
 */
void getString(char cadena[], char mensaje[],char Emensaje[]);





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




/** \brief Obtiene un string de letras y numeros
 *
 * \param cadena[] char cadena a tomar
 * \param mensaje[] char Mensaje que pide
 * \param Emensaje[] char mensaje de error
 * \return void
 *
 */
void getonlyAlphanumeric(char cadena[], char mensaje[],char Emensaje[]);

/** \brief Obtiene un string con un maximo de cantidad de caracteres impuesto
 *
 * \param cadena[] char cadena de string a pedir
 * \param mensaje[] char mensaje para pedir string
 * \param tam int maximo de cantidad de caracteres
 * \param Emensaje[] char mensaje en caso de error
 * \return void
 *
 */
void getStringWithDefineSize(char cadena[], char mensaje[],int tam,char Emensaje[]);

/////////////////////////////////////////

/** \brief Obtiene un numero de cuil
 *
 * \param cadena[]char cadena donde se copiara el string a pedir
 * \param mensaje[] char mensaje para pedir string
 * \param Emensaje[] char mensaje en caso de error
 * \return void
 *
 */
void getCuil(char cadena[],char mensaje[],char Emensaje[]);
/** \brief Obtiene un nombre de archivo
 *
 * \param cadena[]char cadena donde se copiara el string a pedir
 * \param mensaje[] char mensaje para pedir string
 * \param Emensaje[] char mensaje en caso de error
 * \return void
 *
 */
void getArchivo(char cadena[],char mensaje[],char Emensaje[]);



/** \brief Obtiene un numero de DNI
 *
 * \param cadena[] char cadena donde se copiara el string
 * \param mensaje[] char mensaje para pedir string
 * \param Emensaje[] char mensaje en caso de error
 * \return void
 *
 */
void getDNI(char cadena[],char mensaje[],char Emensaje[]);


void getOnlyNumbers(char cadena[],char mensaje[],char Emensaje[]);

