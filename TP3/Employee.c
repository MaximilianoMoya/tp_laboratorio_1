
#include "Employee.h"




Employee* employee_new(){

    Employee* pNewEmployee = NULL;

    pNewEmployee = (Employee*) malloc(sizeof(Employee));


        if(pNewEmployee != NULL)
    {
        employee_setId(pNewEmployee,0);
        employee_setNombre(pNewEmployee," ");
        employee_setHorasTrabajadas(pNewEmployee,0);
        employee_setSueldo(pNewEmployee,0);

    }

    return pNewEmployee;

}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldo){

    Employee* pEmployee = NULL;

    pEmployee = employee_new();

    if(pEmployee != NULL)
    {
        employee_setId(pEmployee,atoi(idStr));
        employee_setNombre(pEmployee,nombreStr);
        employee_setHorasTrabajadas(pEmployee,atoi(horasTrabajadasStr));
        employee_setSueldo(pEmployee,atoi(sueldo));




    }


    return pEmployee;


}
void employee_delete(Employee* this){

    if(this != NULL)
    {
        free(this);
    }


}

int employee_setId(Employee* this,int id){

    int rta = -1;
    if(this!= NULL )
    {
        this->id = id ;
        rta = 0;
    }
    return rta;

}
int employee_getId(Employee* this){



    int id;
    if(this!= NULL )
    {
        id = this->id;

    }
    return id;


}

int employee_setNombre(Employee* this,char* nombre){

    int rta = -1;
    if(this!= NULL && nombre != NULL && onlyLetters(nombre) == 0)
    {
        strcpy(this->nombre,nombre);
        rta =0;

    }
    return rta;

}
char* employee_getNombre(Employee* this){



   char* nombre = NULL;
    if(this!= NULL )
    {
        nombre = this->nombre;

    }
    return nombre;

}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas){

 int rta = -1;
    if(this!= NULL && isNumberWithDefinedRange(horasTrabajadas,1000,1) ==0 )
    {
        this->horasTrabajadas = horasTrabajadas;
        rta = 0;
    }
    return rta;

}
int employee_getHorasTrabajadas(Employee* this){



   int horasTrabajadas;
    if(this!= NULL )
    {
        horasTrabajadas = this->horasTrabajadas;

    }
    return horasTrabajadas;
}

int employee_setSueldo(Employee* this,int sueldo){

 int rta = -1;
    if(this!= NULL && isNumberWithDefinedRange(sueldo,999999,1) ==0 )
    {
        this->sueldo = sueldo;
        rta = 0;
    }
    return rta;


}
float employee_getSueldo(Employee* this){


   float sueldo;
    if(this!= NULL )
    {
        sueldo = this->sueldo;

    }
    return sueldo;



}




////////////Ordenamientos


int Employee_sortNombre(void* anterior, void* posterior)
{
    int  rta = 0;

    char nombreAnterior[100];
    char nombrePosterior[100];

        strcpy(nombreAnterior, employee_getNombre(anterior));
        strcpy(nombrePosterior, employee_getNombre(posterior));

    if(strcmpi(nombreAnterior,nombrePosterior)>0)
    {

        rta = 1;
    }

    return rta;


}


int Employee_sortHoras(void* anterior, void* posterior)
{
    int  rta = 0;

    int horasAnterior;
    int horasPosterior;


        horasAnterior = employee_getHorasTrabajadas(anterior);
        horasPosterior = employee_getHorasTrabajadas(posterior);


    if(horasAnterior> horasPosterior)
    {

        rta = 1;
    }

    return rta;


}



int Employee_sortSueldo(void* anterior, void* posterior)
{
    int  rta = 0;

    int sueldoAnterior;
    int sueldoPosterior;


        sueldoAnterior = employee_getSueldo(anterior);
        sueldoPosterior = employee_getSueldo(posterior);


    if(sueldoAnterior> sueldoPosterior)
    {

        rta = 1;
    }

    return rta;


}
