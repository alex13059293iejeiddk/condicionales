#include <stdio.h>
int main ()
{
int N, i, numero, producto, suma, s_multiplos, promedio, can_multiplos;

printf ("Ingrese N: ");
scanf ("%d", &N); 

producto = 1;
suma = 0;
s_multiplos = 0;
can_multiplos = 0;

for (i=0; i<N; i++)
{
printf ("\nIngrese un numero: ");
scanf ("%d", &numero);
if (numero%2==0 && numero<25)
{
producto = producto * numero;
}
else 
if (numero%2!=0 && numero > 16)
{
suma = suma + numero;
}
else 
if (numero % 4 == 0)
{
can_multiplos++;
s_multiplos = s_multiplos + numero;
}
}

promedio = (float)s_multiplos / can_multiplos;

printf ("\nEl producto de todos los numeros pares menores a 25 es: %d", producto);
printf ("\nLa suma de todos los numeros impares mayores a 16 es: %d", suma);
printf ("\nEl promedio de los numeros multiplos de 4 es: %d", promedio);

return 0;
}
