#include <stdio.h>
int main ()
{
    float salario, aumento;
    int departamento;
    printf ("Ingrese su salario: ");
    scanf ("%f", &salario);
    printf ("Ingrese el número según su departamento\n");
    printf ("1-Cocina, 2-Venta, 3-Aseo\n");
    scanf ("%d", &departamento);

    if (departamento ==1)
    { 
        aumento = salario * 0.03;
    }
    else
    if (departamento ==2)
    {
        aumento = salario * 0.01;
    }
    else 
    if (departamento ==3)
    {
        aumento = salario * 0.05;
    }
    else
    {
        printf ("Opción no valida");
    }
    printf ("Su aumento será de: %.3f", aumento);
    return 0;
}

