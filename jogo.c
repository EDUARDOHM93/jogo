#include <stdio.h>

	int main (void) {

	int hra, mina, hrb, minb, calculohr, calculomin;

	scanf("%d %d %d %d", &hra, &mina, &hrb, &minb);

	
	calculohr = hrb - hra ;
	if (calculohr < 0){
	calculohr = 24 + hra - hrb ;
	}

	
	calculomin = minb - mina ;
	if(calculomin < 0){
	calculomin = 60 + mina - minb ;

	calculohr --;
	}	
	if(hra == hrb && mina == minb){

		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	} else {
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", calculohr, calculomin);

	}

return 0;
}
