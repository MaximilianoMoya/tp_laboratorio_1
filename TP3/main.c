#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

#include "input.h"
/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto). X
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario). //En produccion
     3. Alta de empleado X
     4. Modificar datos de empleado X
     6. Listar empleados X
     7. Ordenar empleados X
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).X
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario). //En produccion
    10. Salir
*****************************************************/



int main()
{
    int option;






    LinkedList* listaEmpleados = ll_newLinkedList();



    do
    {
        printf("\n1. Cargar los datos de los empleados desde el archivo data.csv (modo texto)\n2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n3. Alta de empleado\n4. Modificar datos de empleado\n5. Baja de empleado\n6. Listar empleados\n7. Ordenar empleados\n8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n10. Salir");
        option = getInt("\nIngrese opcion: ","\nOpcion invalida");
        switch(option)
        {
        case 1:
            controller_loadFromText("data.csv",listaEmpleados);
            break;

        case 2:
            printf("\n********En produccion*******\n");
            break;
        case 3:
            controller_addEmployee(listaEmpleados);
            break;

        case 4:
            controller_editEmployee(listaEmpleados);
            break;


        case 5:
            controller_removeEmployee(listaEmpleados);
            break;

        case 6:
            controller_ListEmployee(listaEmpleados);
            break;


        case 7:
            controller_sortEmployee(listaEmpleados);
            break;

        case 8:
            controller_saveAsText("data.csv",listaEmpleados);
            break;

        case 9:
            printf("\n********En produccion*******\n");
            break;

        case 10:
            printf("\nGracias por utilizar la app");
            break;

        default:
            printf("\nOpcion invalida");

        }
    }
    while(option != 10);
    return 0;
}

