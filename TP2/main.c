

#include "ArrayEmployees.h"

int main()
{



    Employee listaDeEmpleados[T];
    initEmployees(listaDeEmpleados,T);
  // Hardcodeo(listaDeEmpleados,T);




    int opc;


    do
    {


        menuPrincipal();
        opc = getInt("\nIngrese opcion: ");

        switch(opc)
        {


        case 1:


            Alta(listaDeEmpleados,T);
            break;

        case 2:
            modificar(listaDeEmpleados,T);
            break;


        case 3:
            baja(listaDeEmpleados,T);
            break;

        case 4:
            informar(listaDeEmpleados,T);
            break;

        case 0:
            printf("\nGracias por usar la app");

            break;








        }

    }
    while(opc !=0);










//******************************************************************************************

}
