#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	float juros=1,saldo=500;
	
	while(juros <= 3){
		saldo = (saldo*0.01) + saldo;
		juros=juros+1;
		
		printf("\n Seu saldo é: %f", saldo);
		
	}
	system ("PAUSE");
	return 0;
}
