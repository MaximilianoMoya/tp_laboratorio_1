

/**
* \brief Valida respuesta 's' o 'n' sin permitir *otros valores
* \param char[] Mensaje de lo que se desea dar *indicaciones de si o no
* \return int respuesta de tipo char *correspondiente a 's' o 'n'
*
*/
char verificarSN(char mensaje[]);

/**
* \brief Valida respuesta 'f'(femenino) o 'm'(masculino)  sin permitir *otros valores
* \param char[] Mensaje de lo que se desea dar *indicaciones de si o no
* \return int respuesta de tipo char *correspondiente a 's' o 'n'
*
*/
char verificarMF(char mensaje[]);



/**
*\brief Verifica si un string es un email o no
*\param char[] string a verificar
*\return int devuelve 0 como true y -1 como false
*/
int isEmail (char cadena[]);




/** \brief Verifica si un string solo contiene numeros
 *
 * \param cadena[] char cadena a verificar
 * \return int resultado 0 = true -1 = false
 *
 */
int onlyNumbers(char cadena[]);
/** \brief Verifica si un string solo contiene letras
 *
 * \param cadena[] char cadena a verificar
 * \return int resultado 0 = true -1 = false
 *
 */
int onlyLetters(char cadena[]);
/** \brief Verifica si un string solo contiene letras y numeros
 *
 * \param cadena[] char cadena a verificar
 * \return int resultado 0 = true -1 = false
 *
 */
int onlyAlphanumeric(char cadena[]);
/** \brief Verifica si un string es un telefono
 *
 * \param cadena[] char cadena a verificar
 * \return int resultado 0 = true -1 = false
 *
 */
int onlyPhoneNumbers(char cadena[]);

/** \brief Verifica si el tamanio de un array supera un determinado tamanio
 *
 * \param [] char cadena string a verificar
 * \param tam int tamanio determinado con el que juzgaremos a la cadena
 * \return int devuelve 0 si la cadena es menor y -1 si es mayor
 *
 */
int isStringWithDefinedSize(char cadena [],int tam);


/** \brief Verifica si el numero esta dentro del rango indicado
 *
 * \param number int Numero a verificar
 * \param maximo int Hasta que numero
 * \param minimo int Desde que numero
 * \return int  numero con el rango precisado.
 *
 */
int isNumberWithDefinedRange(int number, int maximo, int minimo);


////////////////////////////////////////////////////////

/** \brief Verifica si un string es un cuil
 *
 * \param cadena[] char cadena a verificar
 * \return int devuelve 0 si cumple la condicion -1 si no la cumple
 *
 */
int onlyCuil(char cadena[]);

/** \brief Verifica si un string es un nombre de archivo
 *
 * \param cadena[] char cadena a verificar
 * \return int devuelve 0 si cumple la condicion -1 si no la cumple
 *
 */
int isArchivo(char cadena[]);


/** \brief Verificar si un string es un DNI
 *
 * \param cadena[] char cadena a verificar
 * \return int int devuelve 0 si cumple la condicion -1 si no la cumple
 *
 */
int onlyDNI(char cadena[]);

/**
*\brief Verifica si un string es un numero o no
*\param char[] string a verificar
*\return devuelve 0 como true y -1 como false
*/
int isNumber(char numero[]);

/** \brief Verifica si es un flotante
 *
 * \param float number flotante a verificar
 * \return int 0 si es flotante -1 si no
 *
 */
int isFloat(char cadena[]);



int isMoF(char sexo);
