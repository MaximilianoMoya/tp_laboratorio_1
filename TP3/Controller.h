/** \brief Carga el Linkedlist con un archivo .csv
 *
 * \param path char* path del archivo
 * \param pArrayListEmployee LinkedList* arraylist a cargar
 * \return int 0 en caso de  NULL 1 en caso de exito en carga del archivo
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);
/** \brief Carga el Linkedlist con un archivo .bin
 *
 * \param path char* path del archivo
 * \param pArrayListEmployee LinkedList* arraylist a cargar
 * \return int 0 en caso de  NULL 1 en caso de exito en carga del archivo
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);
/** \brief Aniade un empleado al LinkedList
 *
 * \param pArrayListEmployee LinkedList*
 * \return int 0 si se cargo en LinkedList -1 si no.
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee);
/** \brief Edita un empleado segun id
 *
 * \param pArrayListEmployee LinkedList* lista de empleados
 * \return int 0 si se cargaron los cambios con exito, -1 si no.
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee);
/** \brief Borra un empleado
 *
 * \param pArrayListEmployee LinkedList*  lista de empleados
 * \return int int 0 si se borra con exito, -1 si no.
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee);
/** \brief Lista a los empleados
 *
 * \param pArrayListEmployee LinkedList* listado a mostrar
 * \return int 0 si lista con exito, -1 si no.
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee);
/** \brief Ordena empleado segun critero
 *
 * \param pArrayListEmployee LinkedList* lista a ordenar
 * \return int 1 si lista con exito, -1 si no.
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee);
/** \brief Guardar texto en archivo .csv
 *
 * \param path char* direccion nombre del archivo
 * \param pArrayListEmployee LinkedList* lista a guardar
 * \return int 1 si lista con exito, -1 si no.
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee);

/** \brief Guardar binario en archivo .bin
 *
 * \param path char* direccion nombre del archivo
 * \param pArrayListEmployee LinkedList* lista a guardar
 * \return int 1 si lista con exito, -1 si no.
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);


//////////////////////////////////////////////////////////
/** \brief Busca a un empleado por id
 *
 * \param pArrayListEmployee LinkedList*
 * \return int index del empleado a buscar o -1 si no fue encontrado
 *
 */
int controller_seachToId(LinkedList* pArrayListEmployee);
