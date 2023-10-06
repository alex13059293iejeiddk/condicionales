#include <stdio.h>
int main ()
{
    int i;
    float P1, P2, P3, promedio;

    printf ("Ingrese las notas de cada uno de los 5 estudiantes del salon.\n");

    for (i=1; i<=5; i++)
    {
        printf ("\nIngrese las notas del estudiante #%i:", i);
	    printf ("\nPrimera prueba: ");
        scanf ("%f", &P1);
        printf ("Segunda prueba: ");
        scanf ("%f", &P2);
        printf ("Tercera prueba: ");
        scanf ("%f", &P3);

        promedio = (P1+P2+P3)/3;
        printf ("\nSu promedio es: %.2f\n", promedio);
        printf ("\n");
    }
    return 0;
}
