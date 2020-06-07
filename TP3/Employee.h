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

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldo);
void employee_delete(Employee* this);

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this);

int employee_setNombre(Employee* this,char* nombre);
char* employee_getNombre(Employee* this);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this);

///Ordenamientos
int Employee_sortNombre(void* anterior, void* posterior);
int Employee_sortHoras(void* anterior, void* posterior);
int Employee_sortSueldo(void* anterior, void* posterior);

#endif // employee_H_INCLUDED
