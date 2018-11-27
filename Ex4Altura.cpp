#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float altura, peso;
	int sexo, p;
	
	while(p<=15){

	printf("Digite sua altura : ");
	scanf("%f", &altura);
	printf("Digite seu sexo \n 1 - Masculino \n 2 - Feminino \n");
	scanf("%d", &sexo);
	
	if (sexo == 1) {
		peso = (72.7 * altura) - 58;
		printf("Seu peso ideal é: %2.f \n",peso);
	
	}
	else {
		peso = (62.1 * altura) - 44.7;
		printf("Seu ideal é: %2.f \n",peso);
	}
		p=p+1;
	}
	system("PAUSE");
	return 0;
}
