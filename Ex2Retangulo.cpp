#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 	
	float a,b,area;
	int i;
	 i=1;
			
	printf ("Digite a base do retângulo: ");
	scanf ("%f", &b);
	
	printf ("Digite a altura do retângulo: ");
	scanf ("%f", &a);
	
	area = b * a;
	printf("A área do seu retângulo e de: %f \n",area);

	i=i+1;
}
	system ("PAUSE");
	return 0;
}
