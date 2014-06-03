#include <stdio.h>

main(){

int y= 0,pKg = 1,pMaior = 0,pMenor = 9999,pMedio = 0;

while (pKg!=0){
	
        
	printf("Digite o peso do boi em Kg: \n");
	scanf("%i", &pKg);
	

   if (pKg != 0){ 
    
      if(pKg > pMaior){

       pMaior = pKg;

      }if(pKg < pMenor){

       pMenor = pKg;

        }
y++;
pMedio = pMedio + pKg;
}
}
printf("O peso Medio do rebanho e: %i\n", pMedio/y );
printf("O peso do boi mais gordo: %i\n", pMaior );
printf("O peso do boi mais magro: %i\n", pMenor );


}



