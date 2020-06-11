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

    int verificar;






    LinkedList* listaEmpleados = ll_newLinkedList();



    do
    {
        printf("\n1. Cargar los datos de los empleados desde el archivo data.csv (modo texto)\n2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n3. Alta de empleado\n4. Modificar datos de empleado\n5. Baja de empleado\n6. Listar empleados\n7. Ordenar empleados\n8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n10. Salir");
        option = getInt("\nIngrese opcion: ","\nOpcion invalida");
        switch(option)
        {
        case 1:

            verificar =  controller_loadFromText("data.csv",listaEmpleados);
            verificarRetorno(verificar,"Se cargo desde archivo de texto correctamente","Error en cargar archivo");


            break;

        case 2:

           verificar= controller_loadFromBinary("data.bin",listaEmpleados);
           verificarRetorno(verificar,"Se cargo desde archivo binario correctamente","Error en cargar archivo");
            break;
        case 3:
            verificar = controller_addEmployee(listaEmpleados);
            verificarRetorno(verificar,"Se aniadio empleado correctamente","No se a aniadio empleado");
            break;

        case 4:
           verificar = controller_editEmployee(listaEmpleados);
           verificarRetorno(verificar,"Se edito correctamente el empleado","no se edito el empleado");
            break;


        case 5:
           verificar =  controller_removeEmployee(listaEmpleados);
              verificarRetorno(verificar,"Se Borro el empleado","no se borro el empleado");
            break;

        case 6:
           verificar = controller_ListEmployee(listaEmpleados);
              verificarRetorno(verificar,"Se listo correctamente","no se listo correctamente");
            break;


        case 7:
           verificar= controller_sortEmployee(listaEmpleados);
            verificarRetorno(verificar,"Se ordeno correctamente ","no se pudo ordenar");
            break;

        case 8:
            verificar = controller_saveAsText("data.csv",listaEmpleados);
             verificarRetorno(verificar,"Se guardo correctamente","Error en guardar");
            break;

        case 9:
          verificar=  controller_saveAsBinary("data.bin",listaEmpleados);
           verificarRetorno(verificar,"Se guardo correctamente","Error en guardar");
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

