#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float n1,n2,n3,n4;
	float soma,media;
	int n;
	n=1;
	
	while(n<=7){
	
	printf ("\nDigite a nota do primeiro bimestre: ");
	scanf("%f", &n1);
	
	printf ("\nDigite a nota do segundo bimestre: ");
	scanf("%f", &n2);
	
	printf ("\nDigite a nota do terceiro bimestre: ");
	scanf("%f", &n3);
	
	printf ("\nDigite a nota do quarto bimestre: ");
	scanf("%f", &n4);
	
	soma = n1 + n2 + n3 + n4;
	media = soma/4;
	
	printf ("A media do aluno foi de %f \n",media);
	
	n=n+1;

}
	system ("PAUSE");
	return 0;
}
