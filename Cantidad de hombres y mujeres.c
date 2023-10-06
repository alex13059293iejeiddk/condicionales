#include <stdio.h>
int main ()
{
int i, can_hombres, can_mujeres, opcion;
printf ("Ingrese 1 o 2 según su sexo\n");
can_hombres = 0;
can_mujeres = 0;
for (i=1; i<=5; i++)
{
printf ("1- Hombre | 2-Mujer\n");
scanf ("%d", &opcion);

if (opcion == 1)
{ 
can_hombres ++;
}
else
if (opcion == 2)
{
can_mujeres ++;
}
}
printf ("Cantidad de hombres: %d", can_hombres);
printf ("\nCantidad de mujeres: %d", can_mujeres);
if (can_hombres>can_mujeres)
{
printf ("\nHay mas hombres que mujeres");
}
else
if (can_hombres<can_mujeres)
{
printf ("\nHay mas mujeres que hombres");
}
else 
{
printf ("\nHay la misma cantidad de hombres y de mujeres");
}
return 0;
}
