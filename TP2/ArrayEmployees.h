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

void menuPrincipal();
void menuModificar();
void modificar(Employee list[], int len);
void Alta(Employee list[], int len);
void baja(Employee list[], int len);

void Hardcodeo(Employee listado[], int len);

int initEmployees(Employee* list, int len);
void informarTotalPromedioCantidad(Employee* list, int len);


int addEmployee(Employee* list, int len, int id,char name[],char lastName[],float salary,int sector);

int findEmployeeById(Employee* list, int len,int id);


int showEmployee(Employee employee);


int removeEmployee(Employee* list, int len, int id);





int sortEmployees(Employee* list, int len, int order);

int printEmployees(Employee* list, int len);

void informar(Employee list[], int len);
