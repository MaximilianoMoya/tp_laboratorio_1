
float sumar( float a, float b)
{

    float aux;

    aux = a + b;
    return aux;

}

float restar( float a, float b)
{

    float aux;

    aux = a - b;
    return aux;

}

float dividir( float a, float b)
{

    float aux;

    if(b == 0)
    {

        aux = 0;
    }
    else
    {

        aux = a / b;
    }


    return aux;

}


float multiplicar( float a, float b)
{

    float aux;

    aux = a * b;
    return aux;

}

double factorial(float num)
{

    double rta = 1;

    for(int i = 0; i<num; i++)
    {


        rta *=(double) num-i;

    }

    return rta;


}
