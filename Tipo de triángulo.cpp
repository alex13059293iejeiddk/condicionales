#include <stdio.h>
int main() 
{
    float L1, L2, L3;

    printf ("Ingrese el tamaño del primer lado: ");
    scanf ("%f", &L1);

    printf ("Ingrese el tamaño del segundo lado: ");
    scanf ("%f", &L2);

    printf ("Ingrese el tamaño del tercer lado: ");
    scanf ("%f", &L3);
    
    if (L1 == 0 && L2 == 0 && L3 == 0)
    {
    	printf ("No se forma un triangulo.\n");
	}
	else
    if (L1 == L2 && L2 == L3) 
	{
        printf ("El triángulo es equilátero.\n");
    } 
	else 
	if (L1 == L2 || L1 == L3 || L2 == L3) 
	{
        printf ("El triángulo es isósceles.\n");
    } 
	else 
	{
        printf ("El triángulo es escaleno.\n");
    }

    return 0;
}

