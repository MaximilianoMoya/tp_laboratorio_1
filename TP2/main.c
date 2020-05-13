

#include "ArrayEmployees.h"

int main()
{



    Employee listaDeEmpleados[T];
    initEmployees(listaDeEmpleados,T);
 //   Hardcodeo(listaDeEmpleados,T);




    int opc;


    do
    {


        menuPrincipal();
        opc = getInt("\nIngrese opcion: ");

        switch(opc)
        {


        case 1:

            system("cls");

            Alta(listaDeEmpleados,T);
             system("pause");
            system("cls");
            break;

        case 2:
            system("cls");
            modificar(listaDeEmpleados,T);
            system("pause");
            system("cls");
            break;


        case 3:
            system("cls");
            baja(listaDeEmpleados,T);
             system("pause");
            system("cls");
            break;

        case 4:
            system("cls");
            informar(listaDeEmpleados,T);
             system("pause");
            system("cls");
            break;

        case 0:
            system("cls");
            printf("\nGracias por usar la app");
             system("pause");
            system("cls");

            break;








        }

    }
    while(opc !=0);










//******************************************************************************************

}
