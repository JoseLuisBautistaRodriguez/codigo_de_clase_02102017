//Código de clase Lunes 2 de octubre 2017

#include <stdio.h>

int main(){
	
	int numeros [5], i, menor;
	
	menor = numeros [0];
	
	for(i = 0; i<5 ; i++){
		
		printf(" Inserta el numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
				
	}
	
	menor = numeros [0];
	
	for(i=1; i<5 ; i++){
		
		if(menor > numeros[i]){
			
			menor = numeros [i];
			
		}
		
	}
	
	printf("\n El numero menor es %d.\n\n", menor);
	
	system ("pause");
	return 0 ;
}
