


/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param pFile FILE* archivo a parsear
 * \param pArrayListEmployee LinkedList* lista de empleados
 * \return int -1 en caso de error 0 en caso de exito.
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee);

/** \brief Parsea los datos los datos de los empleados desde el archivo data.bin (modo texto).
 *
 * \param pFile FILE* archivo a parsear
 * \param pArrayListEmployee LinkedList* lista de empleados
 * \return int -1 en caso de error 0 en caso de exito.
 *
 */
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee);
