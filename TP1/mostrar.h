/** \brief muestra el menu
 *
 * \param flag1 int indica que el numero 'a' ya se a ingresado
 * \param flag2 int indica que el numero 'b' ya se a ingresado
 * \param a float numero ingresado a
 * \param b float numero ingresado b
 * \return void
 *
 */
void menu(int flag1, int flag2, float a, float b);

/** \brief Muestra los resultados
 *
 * \param suma float  resultado de suma
 * \param resta float resultado de resta
 * \param division float resultado de division
 * \param multiplicacion float resultado de multiplicacion
 * \param factorialA double resultado de factorial del numero 'a'
 * \param factorialB double resultado de factorial del numero 'b'
 * \return void
 *
 */
void mostrarResultado(float suma, float resta, float division,float multiplicacion,double factorialA, double factorialB);
/** \brief Verifica si las variables se han cargado para permitir que se opere y que muestre los resultados
 *
 * \param flag1 int indica que el numero 'a' ya se a ingresado
 * \param flag2 int int indica que el numero 'b' ya se a ingresado
 * \return int retorna 1 si no se han ingresado y 0 que si se ya han ingresado
 *
 */
int verificarCarga(int flag1, int flag2 );