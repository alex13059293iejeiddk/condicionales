#include <stdio.h>

int main()
{
    int num1, num2, num3, mayor;
    
    printf ("Ingrese el primer numero: ");
    scanf ("%d", &num1);
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &num2);
    printf ("Ingrese el tercer numero: ");
    scanf ("%d", &num3);
    
    if (num1>num2 && num1>num3)
    {
        mayor = num1;
        printf ("El mayor es: %d", mayor);
    }
    else
    if (num2>num1 && num2>num3)
    {
        mayor = num2;
        printf ("El mayor es: %d", mayor);
    }
    else 
    if (num3>num1 && num3>num2)
    {
        mayor = num3;
        printf ("El mayor es: %d", mayor);
    }
    else 
    {
        printf ("Son iguales");
    }
    
    
    

    return 0;
}
