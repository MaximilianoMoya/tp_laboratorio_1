#include "input.h"
#include "validate.h"

#define OCUPADO 1
#define LIBRE 0



#define T 10

#include <string.h>






typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmply;

} Employee;


/** \brief Muestra menu principal
 *
 * \return void
 *
 */
void menuPrincipal();
/** \brief Muestra menu modificacion de empleado
 *
 * \return void
 *
 */
void menuModificar();
/** \brief Permite modificar un usuario
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return void
 *
 */
void modificar(Employee list[], int len);
/** \brief Permite dar el alta de un empleado
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return void
 *
 */
void Alta(Employee list[], int len);
/** \brief Permite tomar la baja de un empleado
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return void
 *
 */
void baja(Employee list[], int len);
/** \brief Harcodeo para pruebas de funcionabilidades
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return void
 *
 */
void Hardcodeo(Employee listado[], int len);
/** \brief Inicializa el array de empleados poniendolo en estado LIBRE 0
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return int
 *
 */
int initEmployees(Employee* list, int len);
/** \brief Informa el promedio de sueldos del array empleado, total gastos en salarios y cuantos empleados superan el promedio.
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return void
 *
 */
void informarTotalPromedioCantidad(Employee* list, int len);
/** \brief aniade un empleado
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \param id int id del empleado
 * \param name[] char nombre del empleado
 * \param lastName[] char apellido del empleado
 * \param salary float salario del empleado
 * \param sector int sector al que pertenece el empleado
 * \return int indice donde fue aniadido el empleado
 *
 */
int addEmployee(Employee* list, int len, int id,char name[],char lastName[],float salary,int sector);
/** \brief Busca un empleado por id
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \param id int id del empleado a buscar
 * \return int indice donde esta el empleado con el id
 *
 */
int findEmployeeById(Employee* list, int len,int id);
/** \brief Muestra un empleado
 *
 * \param employee Employee empleado a mostrar
 * \return int id del empleado
 *
 */
int showEmployee(Employee employee);
/** \brief Borra un empleado poniendolo como estado LIBRE 0
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \param id int id del empleado a borrar
 * \return int int posicion en el array del empleado borrado
 *
 */
int removeEmployee(Employee* list, int len, int id);
/** \brief Ordena el listado de empleados por apellidos y sectores segun el orden que indiquemos
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \param order int 0 para orden alfabetico descendente y 1 para  orden alfabetico ascendente
 * \return int tipo de orden utilizado
 *
 */
int sortEmployees(Employee* list, int len, int order);
/** \brief Muestra los empleados
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return int cantidad de empleados mostrados
 *
 */
int printEmployees(Employee* list, int len);
/** \brief Permite mostrar el menu de informaciones y seleccionar opcion a mostrar
 *
 * \param list[] Employee array de empleados
 * \param len int tamanio de array de empleados
 * \return void
 *
 */
void informar(Employee list[], int len);
