#include "ArrayEmployees.h"

int cont = 1;
int carga;


void menuPrincipal()
{


    printf("\n1-Altas\n2-Modificar\n3-Baja\n4-Informar");






}
void menuModificar()
{

    printf("\n1-Cambiar nombre\n2-Cambiar apellido\n3-Cambiar salario\n 4-Cambiar sector\n0-salir\n");
}

void baja(Employee list[], int len)
{

    int verificar = -1;
    if(carga == 1)
    {



    int id;
    id = getInt("\nIngrese ID: ");

    removeEmployee(list,len,id);


    }else{

            printf("\nSe debe tener empleados cargados para poder usar esta opcion\n");


    }

    for(int i = 0; i<len ;i++){

        if(list[i].isEmply == OCUPADO){

            verificar = 0;
        }


    }


    if(verificar == -1){

    carga = 0;

    }

}



void modificar(Employee list[], int len)
{

    if(carga ==1)
    {


        int opc;
        int index;
        int id;
        char auxString[200];
        float auxFlotante;
        int auxInt;


        id = getInt("\nIngrese ID: ");

        char rta;

        index = findEmployeeById(list,len,id);





        if(index != -1)
        {



            menuModificar();
            opc = getInt("\nIngrese opcion: ");


            switch(opc)
            {


            case 1:

                getOnlyLetters(auxString,"\nIngrese nuevo nombre: ","\nNombre invalido");

                rta = verificarSN("\nEsta seguro que desea cambiar el nombre? s/n: ");

                if(rta == 's')
                {


                    strcpy(list[index].name,auxString);
                    printf("\n Se ha cambiado el valor exitosamente.");

                }
                else
                {

                    printf("\nCAMBIO ABORTADO.");
                }



                break;

            case 2:


                getOnlyLetters(auxString,"\nIngrese nuevo apellido: ","\nApellido invalido.");

                rta = verificarSN("\nEsta seguro que desea cambiar el apellido? s/n: ");

                if(rta == 's')
                {

                    strcpy(list[index].lastName,auxString);
                    printf("\n Se ha cambiado el valor exitosamente.");

                }
                else
                {

                    printf("\nCAMBIO ABORTADO.");
                }
                break;




            case 3:


                auxFlotante = getFloat("\nIngrese nuevo Salario: ");

                rta = verificarSN("\nEsta seguro que desea cambiar el salario? s/n: ");

                if(rta == 's')
                {

                    list[index].salary = auxFlotante;
                    printf("\n Se ha cambiado el valor exitosamente.");

                }
                else
                {

                    printf("\nCAMBIO ABORTADO.");
                }
                break;






            case 4:


                auxInt = getInt("\nIngrese nuevo sector: ");

                rta = verificarSN("\nEsta seguro que desea cambiar el sector? s/n: ");

                if(rta == 's')
                {

                    list[index].sector = auxInt;
                    printf("\n Se ha cambiado el valor exitosamente.");

                }
                else
                {

                    printf("\nCAMBIO ABORTADO.");
                }
                break;



            default:
                printf("\nOpcion invalida.\n");



            }
        }
        else
        {

            printf("\nID no encontrado\n");

        }


    }
    else
    {


        printf("\nSe debe tener empleados cargados para poder usar esta opcion\n");
    }
}



void Alta(Employee list[], int len)
{
    //carga = 1;

    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;


    id= cont;

    getOnlyLetters(nombre,"\nIngrese nombre: ","\n**Nombre invalido**");
    getOnlyLetters(apellido,"\nIngrese apellido: ","\n**Apellido invalido**");
    salario = getFloat("\nIngrese salario: ");
    sector = getInt("\nIngrese sector: ");



    addEmployee(list,len,id,nombre,apellido,salario,sector);



}


int initEmployees(Employee* list, int len)
{


    int i;
    for( i = 0; i< len; i++)
    {


        list[i].isEmply = LIBRE;

    }



    return LIBRE;

}


int addEmployee(Employee* list, int len, int id,char name[],char lastName[],float salary,int sector)
{



    int index = -1;
    int i;
    char rta;

    for( i = 0; i< len; i++)
    {
        if(list[i].isEmply == LIBRE )

            index =i;


    }

    if(index != -1)
    {


        Employee aux;

        aux.id = id++;
        strcpy(aux.name,name);
        strcpy(aux.lastName,lastName);
        aux.salary = salary;
        aux.sector = sector;
        aux.isEmply = OCUPADO;

        rta = verificarSN("\nEsta seguro que desea agregar este empleado? ");

        if(rta == 's')
        {
            list[index] = aux;
            printf("\nSe agrego con exito");
            carga = 1;
            cont++;

        }
        else
        {

            printf("\nEl alta a sido cancelada...");
        }
    }
    else
    {

        printf("\n No hay lugar");


    }

    return index;

}

int findEmployeeById(Employee* list, int len,int id)
{


    int index  = -1;

    //  id = getInt("\nIngrese ID: ");




    for(int i = 0; i<len; i++)
    {

        if(list[i].isEmply == OCUPADO)
        {

            if(list[i].id == id)
            {


                index = i;
                break;


            }



        }


    }








    return index;






}

int removeEmployee(Employee* list, int len, int id)
{

    int index;

    char rta;








        index = findEmployeeById(list,len,id);


        if(index != -1)
        {

            printf("\n  ID encontrado \n ");
            showEmployee(list[index]);
            rta = verificarSN("\nDesea dar de baja s/n: ");

            if(rta == 's')
            {


                list[index].isEmply = LIBRE;


            }
            else
            {

                printf("\n LA BAJA A SIDO ABORTADA.");

            }







        }
        else
        {

            printf("\n LA BAJA A SIDO ABORTADA.");

        }


    return index;

}


int showEmployee(Employee employee)
{


    printf("%16d%16s%16s%16.2f%12i\n",employee.id
           ,employee.lastName
           ,employee.name
           ,employee.salary
           ,employee.sector);

    return employee.id;
}

int sortEmployees(Employee* list, int len, int order)
{


    Employee aux;



    for(int i = 0; i<len-1; i++)
    {
        //  if(estados[i] != valorInicial);
        // continue;
        for(int j = i+1; j<len; j++)
        {

            if(order == 1)
            {

                if(stricmp(list[j].lastName,list[i].lastName)<1 || (stricmp(list[j].lastName,list[i].lastName)== 0 && list[j].sector < list[i].sector))
                {


                    aux=list[i];

                    list[i] =list[j];

                    list[j] =aux;

                    //tambien ordenar si o si estados

                }


            }

            if(order ==0)
            {
                if(stricmp(list[j].lastName,list[i].lastName)>1 || (stricmp(list[j].lastName,list[i].lastName) == 0 && list[j].sector < list[i].sector))
                {


                    aux = list[i];

                    list[i]=list[j];

                    list[j]=aux;



                }



            }

        }

    }

    printf("%16s%16s%16s%16s%16s\n","Id","lastname","name","salary","sector");

    for(int i = 0; i<len; i++)
    {

        if(list[i].isEmply != 0)
        {

            showEmployee(list[i]);


        }




    }


    return order;

}








int printEmployees(Employee* list, int len)
{

    int cont = 0;

    printf("%16s%16s%16s%16s%16s\n","Id","lastname","name","salary","sector");


    for(int i = 0; i<len; i++)
    {

        if(list[i].isEmply == OCUPADO)
        {

            showEmployee(list[i]);
            cont ++;

        }


    }



    return cont;

}


void Hardcodeo(Employee list[], int tam)
{

    int ids[5] = {1,2,3,4,5};
    char names[5][20] = {"Itachi","Sasuke","Naruto","Hinata","Sakura"};
    char lastNames[5][20] = {"Uchiha","Uchiha","Uzumaki","Hyuga","Haruno"};
    float salaries[5]= {1500,7800,6600,3600,9000};
    int sectores[5] = {5,2,1,4,4};


    for(int i = 0; i< 5; i++)
    {


        list[i].id =ids[i];
        strcpy(list[i].name,names[i]);
        strcpy(list[i].lastName,lastNames[i]);
        list[i].salary = salaries[i];
        list[i].sector = sectores[i];

        list[i].isEmply = OCUPADO;

    }


}

void informar(Employee list[], int len)
{


    if(carga ==1)
    {



        printf("\n1-Ver lista de empleados por apellido en orden alfabetico ascendente\n2-Ver lista de empleados por apellido en orden alfabetico descendente\n3-Total y promedio de los salarios, y cuántos empleados superan el salario promedio");
        int opc;



        do
        {

            opc = getInt("\nIngrese opcion: ");
            switch(opc)
            {


            case 1:
                sortEmployees(list,len,0);
                break;

            case 2:
                sortEmployees(list,len,1);
                break;

            case 3:
                informarTotalPromedioCantidad(list,len);
                break;
            case 0:
                printf("\nSaliendo de menu de informaciones.");
                break;

            default:
                printf("\nIngrese opcion valida");



            }

        }
        while(opc != 0);

    }
    else
    {



        printf("\nSe debe tener empleados cargados para poder usar esta opcion\n");
    }


}






void informarTotalPromedioCantidad(Employee* list, int len)
{

    float total = 0;
    float promedio ;
    int cantidadEmpleados =0;
    int cantidadEmpleadosQueSuperanPromedio = 0;



    for(int i = 0; i<len; i++)
    {


        if(list[i].isEmply == OCUPADO)
        {

            cantidadEmpleados++;
            total += list[i].salary;


        }



    }
    promedio = total/cantidadEmpleados;



    for(int i = 0; i<len; i++)
    {


        if(list[i].isEmply == OCUPADO)
        {

            if(list[i].salary > promedio)
            {


                cantidadEmpleadosQueSuperanPromedio++;

            }


        }



    }

    printf("\n El total es de %.2f y promedio de los salarios es de %.2f y la cantidad empleados superan el salario promedio es de %d",total,promedio,cantidadEmpleadosQueSuperanPromedio);








}

