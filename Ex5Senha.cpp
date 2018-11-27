#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int e;
	char senha[6];
	char se[5] = {'a','s','d','f','g'};
	e=1;
	
	while(e<=3){
	
	printf("Digite a senha : \n");
	
	scanf("%s",&senha);
	
	if(strcmp(senha,se)==0) {
		printf("Senha valida \n");
		return 0;	
	}
	else {
		printf("Senha invalida \n");
	
	}
		e=e+1;
}
	return 0;
}

