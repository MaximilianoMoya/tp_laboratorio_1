#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

#include "parser.h"


int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    int rta = -1;

    int flag = 0;
    int r;
    char id[128];
    char nombre[128];
    char horasTrabajadas[128];
    char sueldo[128];

    Employee* pEmployee;

    ll_clear(pArrayListEmployee);




    if(pFile != NULL)
    {



        do
        {



            if(flag ==0)
            {
                fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
                flag =1;
            }

            r= fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);

            pEmployee = employee_newParametros(id,nombre,horasTrabajadas,sueldo);

            if(pEmployee != NULL && r ==4)
            {
                ll_add(pArrayListEmployee, pEmployee);

                rta = 0;
            }


        }
        while(feof(pFile) == 0);




    }
    else
    {

        printf("\nError en apertura de archivo");
    }
    return rta;
}


int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    Employee* pEmployee;
    int rta = -1;
    int flag = 0;


    ll_clear(pArrayListEmployee);


    if(pFile != NULL)
    {


        while(!feof(pFile) ) // verificar
        {

            pEmployee = employee_new();

            flag = fread(pEmployee,sizeof(Employee),1,pFile);


            if(flag == 1)
            {
                ll_add(pArrayListEmployee,pEmployee);

            }
        }
        rta = 0;
    }




    return rta;
}
