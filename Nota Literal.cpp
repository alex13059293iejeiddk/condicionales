#include <stdio.h>
int main ()
{
	float PF;
	
	printf ("Ingrese el puntaje final obtenido: ");
	scanf ("%f", &PF);
	
	if (PF > 100)
	{
		printf ("El puntaje no puede ser mayor a 100.\n");
	}
	else
	{
	    if (PF < 61)
	    {
		    printf ("Su nota es F.\n");
	    }
	    else
	    if (PF >= 61 && PF <= 70)
		{
		    printf ("Su nota es D.\n");
	    }
	    else
	    if (PF >= 71 && PF <= 80)
	    {
		    printf ("Su nota es C.\n");
	    }
	    else
	    if (PF >= 81 && PF <= 90)
	    {
		    printf ("Su nota es B.\n");
	    }
	    else 
	    { 
		    printf ("Su nota es A.\n");
	    }
    }   

return 0;
}
