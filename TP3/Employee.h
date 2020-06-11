#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED

#include <string.h>
#include <stdlib.h>
#include "validate.h"
#include "input.h"
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

/** \brief Crea un empleados
 *
 * \return Employee*
 *
 */
Employee* employee_new();
/** \brief Crea un empleados con parametros
 *
 * \return Employee*
 *
 */
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldo);
/** \brief Borra un empleado
 *
 * \param this Employee* empleado a borrar
 * \return void
 *
 */
void employee_delete(Employee* this);

/** \brief Establece el id
 *
 * \param this Employee* empleado a establecer propiedad
 * \param id int id establecido
 * \return int -1 en caso de error 0 en caso de error
 *
 */
int employee_setId(Employee* this,int id);

/** \brief Obtiene un id
 *
 * \param this Employee* empleado de donde se obtiene el id
 * \return int int -1 en caso de error 0 en caso de error
 *
 */
int employee_getId(Employee* this);

/** \brief Establece el nombre
 *
 * \param this Employee* Empleado a establecer el nombre
 * \param nombre char* nombre a establecer
 * \return  int int -1 en caso de error 0 en caso de error
 *
 */
int employee_setNombre(Employee* this,char* nombre);

/** \brief Obtiene un nombre
 *
 * \param this Employee* empleado a obtener el nombre
 * \return char* nombre obtenido
 *
 */
char* employee_getNombre(Employee* this);

/** \brief Establece las horas trabajadas
 *
 * \param this Employee* Empleado a establecer horas trabajadas
 * \param horasTrabajadas horas a establecer
 * \return int nt  -1 en caso de error 0 en caso de error
 *
 */
int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
/** \brief Obtiene las horas trabajadas
 *
 * \param this Employee* empleado a obtener las horas trabajadas
 * \return int horas trabajadas obtenidas
 *
 */
int employee_getHorasTrabajadas(Employee* this);

/** \brief Establece el sueldo del empleado
 *
 * \param this Employee* Empleado a establecerle el sueldo
 * \param sueldo int cantidad de sueldo a establecer
 * \return int nt  -1 en caso de error 0 en caso de error
 *
 */
int employee_setSueldo(Employee* this,int sueldo);
/** \brief Obtiene el sueldo
 *
 * \param this Employee* empleado a obtener el sueldo
 * \return int sueldo obtenido
 *
 */
int employee_getSueldo(Employee* this);

///Ordenamientos
/** \brief Ordena por nombre
 *
 * \param anterior void*
 * \param posterior void*
 * \return int 1 en caso de cumplir con las condiciones de ordenamiento, 0 en caso de que no.
 *
 */
int Employee_sortNombre(void* anterior, void* posterior);
/** \brief Ordena por horas
 *
 * \param anterior void*
 * \param posterior void*
 * \return int 1 en caso de cumplir con las condiciones de ordenamiento, 0 en caso de que no.
 *
 */
int Employee_sortHoras(void* anterior, void* posterior);
/** \brief Ordena por sueldo
 *
 * \param anterior void*
 * \param posterior void*
 * \return int 1 en caso de cumplir con las condiciones de ordenamiento, 0 en caso de que no.
 *
 */
int Employee_sortSueldo(void* anterior, void* posterior);

#endif // employee_H_INCLUDED
