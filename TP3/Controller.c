#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"




/** \brief Busca un empleado por ID y lo muestra
 *
 * \param pArrayListEmployee LinkedList*
 * \return int el ID que fue encontrado
 *
 */

int controller_seachToId(LinkedList* pArrayListEmployee)
{

    Employee* aux = NULL;

    char idIngresado[100];
    int idIngresadoPasadoAInt;
    int index = -1;


    getOnlyNumbers(idIngresado,"\nIngrese Id del empleado a borrar: ","\nId Invalido");




    idIngresadoPasadoAInt = atoi(idIngresado);
    for(int i = 0; i< ll_len(pArrayListEmployee); i++)
    {
        aux = ll_get(pArrayListEmployee,i);

        if(employee_getId(aux) == idIngresadoPasadoAInt)
        {
            index = i;

            break;
        }
    }
    printf("\nEl empleado seleccionado es: ");
    printf("\n%16d%16s%16d%16d",employee_getId(aux)
           ,employee_getNombre(aux)
           ,employee_getHorasTrabajadas(aux)
           ,employee_getSueldo(aux));





    return index;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{


    int rta = -1;



    FILE* pFile;
    pFile = fopen(path,"r");

    if(pFile == NULL)
    {


        rta = -1;
    }
    else
    {


        parser_EmployeeFromText(pFile,pArrayListEmployee);

        fclose(pFile);
        rta = 0;

    }




    return rta;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{



    int rta = -1;

    FILE* pFile;
    pFile = fopen(path, "rb");

    if(pFile != NULL)
    {

        parser_EmployeeFromBinary(pFile,pArrayListEmployee);
        rta = 0;

        fclose(pFile);
    }
    else
    {

        rta = -1;


    }




    return rta;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{


    Employee* aux;
    aux = employee_new();

    char respuesta;
    int rta = -1;


    char auxId[130];
    int auxIdInt;
    char auxHoras[130];
    char auxSueldo[130];
    char auxNombre[130];

    /* int id;
        char nombre[128];
        int horasTrabajadas;
        int sueldo;*/


    if(aux != NULL)
    {

        //employee_setId(aux,ll_len(pArrayListEmployee) + 1);
        //itoa( int valor, char * cadena_destino, int base )
        // itoa(ll_len(pArrayListEmployee) + 1,auxId);


        itoa(ll_len(pArrayListEmployee) + 1,auxId,10);


        auxIdInt = atoi(auxId);

        for(int i = 0; i<ll_len(pArrayListEmployee); i++)
        {
            aux = ll_get(pArrayListEmployee,i);

            if(employee_getId(aux) == auxIdInt)
            {

                auxIdInt++;


            }
        }
        aux=NULL;

        itoa(auxIdInt,auxId,10);


        getOnlyLetters( auxNombre,"\nIngrese nombre: ","\nNombre invalido");



        getStringToNumberWithDefinedSize(auxSueldo,"\nIngrese Sueldo: ",6,"\nSueldo Invalido");
        //getOnlyNumbers( auxHoras,"\nIngrese Horas trabajadas: ","\ncantidad de horas invalida");

        getStringToNumberWithDefinedSize(auxHoras,"\nIngrese Horas: ",3,"\nCantidad de horas Invalida");
        //getOnlyNumbers( auxSueldo,"\nIngrese sueldo: ","\nSueldo invalido");








        respuesta = verificarSN("\nEsta seguro que desea ingresar este Cliente? s/n");

        if(respuesta=='s')
        {



            aux=  employee_newParametros(auxId,auxNombre,auxHoras,auxSueldo);
            ll_add(pArrayListEmployee,aux);


            rta = 0;







        }


    }










    return rta;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{

    Employee* aux = NULL;
    int rta = -1;
    char respuesta;
    int opc;

    int index;

    char auxString[100];
    int auxInt;


    index = controller_seachToId(pArrayListEmployee);

    opc = getInt("\n\n1-Cambiar nombre\n2-Cambiar Horas trabajadas\n3-Cambiar sueldo\nIngrese respuesta: ","\nOpcion invalida");


    aux = ll_get(pArrayListEmployee,index);


    switch(opc)
    {

    case 1:

        getOnlyLetters(auxString,"\nIngrese nuevo nombre: ","\nNombre invalido");
        employee_setNombre(aux,auxString);

        break;
    case 2:
        auxInt= getNumberWithDefinedRange("\nIngrese nueva cantidad de horas: ",500,1,"La cantidad de horas es invalida");
        employee_setHorasTrabajadas(aux,auxInt);
        break;
    case 3:
        auxInt= getNumberWithDefinedRange("\nIngrese nuevo sueldo: ",999999,1,"Cantidad de sueldo invalida");
        employee_setSueldo(aux,auxInt);
        break;

    default:
        printf("\nOpcion invalida");



    }
    respuesta = verificarSN("\nEsta seguro que desea modificar este valor?");

    if(respuesta == 's')
    {

        ll_set(pArrayListEmployee,index,aux);
        rta = 0;

    }








    return rta;
}



/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{

    int rta = -1;
    char respuesta;
    int index;

    index = controller_seachToId(pArrayListEmployee);

    respuesta = verificarSN("\nEsta seguro que desea eliminar este empleado? s/n: ");

    if(respuesta == 's')
    {
        ll_remove(pArrayListEmployee,index);

        rta = 0;
    }
    else




    return rta;
}















/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{

    int rta = -1;
    Employee* aux = NULL;

    if(pArrayListEmployee != NULL)
    {
        rta = 1;
        for(int i=0; i<ll_len(pArrayListEmployee); i++)
        {
            aux = ll_get(pArrayListEmployee,i);
            printf("\n%16d%16s%16d%16d",employee_getId(aux)
                   ,employee_getNombre(aux)
                   ,employee_getHorasTrabajadas(aux)
                   ,employee_getSueldo(aux));

        }

        rta = 0;
    }

    return rta;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    int opc;

    int rta =-1;

    if(pArrayListEmployee != NULL)
    {

        printf("\n1-Ordenar por nombre\n2-Ordenar por horas trabajadas\n3-Ordenar por Sueldo");
        opc = getInt("\nIngrese Opcion: ","Opcion invalida");


        switch(opc)
        {

        case 1:
            printf("\nOrdenando por nombre... Aguarde un momento por favor.\n");
            ll_sort(pArrayListEmployee,Employee_sortNombre,1);
            rta = 0;
            break;
        case 2:
            printf("\nOrdenando por horas... Aguarde un momento por favor.\n");
            ll_sort(pArrayListEmployee,Employee_sortHoras,1);
            rta = 0;
            break;
        case 3:
            printf("\nOrdenando por sueldo... Aguarde un momento por favor.\n");
            ll_sort(pArrayListEmployee,Employee_sortSueldo,1);

            rta = 0;
            break;

        default:
            printf("\nOpcion invalida");
        }
    }






    return rta;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{

    FILE* pArchivo;
    Employee* aux;

    int rta = -1;
    int i;




    pArchivo = fopen(path, "w");
    fprintf(pArchivo,"id,nombre,horasTrabajadas,sueldo\n");

    if(pArchivo != NULL)
    {




        for(i=0; i< ll_len(pArrayListEmployee); i++)
        {
            aux = ll_get(pArrayListEmployee,i);
            fprintf(pArchivo,"%d,%s,%d,%d\n",employee_getId(aux)
                    ,employee_getNombre(aux)
                    ,employee_getHorasTrabajadas(aux)
                    ,employee_getSueldo(aux));
        }

        rta = 0;

        fclose(pArchivo);
    }



    return rta;





}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{

    FILE* pArchivo;
    Employee* aux;

    int rta = -1;
    int i = 0;

    if( path != NULL && pArrayListEmployee != NULL )
    {
        pArchivo = fopen(path,"wb");

        for(i=0; i< ll_len(pArrayListEmployee); i++)
        {
            aux = (Employee*)ll_get(pArrayListEmployee,i);
            fwrite(aux, sizeof(Employee),1,pArchivo);
        }
        fclose(pArchivo);
        rta =0;
    }
    return rta;





}

