#include <stdio.h>
int main() 
{
    float L1, L2, L3;

    printf ("Ingrese el tama�o del primer lado: ");
    scanf ("%f", &L1);

    printf ("Ingrese el tama�o del segundo lado: ");
    scanf ("%f", &L2);

    printf ("Ingrese el tama�o del tercer lado: ");
    scanf ("%f", &L3);
    
    if (L1 == 0 && L2 == 0 && L3 == 0)
    {
    	printf ("No se forma un triangulo.\n");
	}
	else
    if (L1 == L2 && L2 == L3) 
	{
        printf ("El tri�ngulo es equil�tero.\n");
    } 
	else 
	if (L1 == L2 || L1 == L3 || L2 == L3) 
	{
        printf ("El tri�ngulo es is�sceles.\n");
    } 
	else 
	{
        printf ("El tri�ngulo es escaleno.\n");
    }

    return 0;
}

