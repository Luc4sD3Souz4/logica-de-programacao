#include <stdio.h>
#include <stdlib.h>

// 11. Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é  obtida pela média aritmética entre a nota de 2 bimestres. 
//     Cada nota de bimestre é composta por 2 notas de provas.  

main(){
	float bim[3], nota[2];
	float notafinal;
	int i, j;
	
	for (i=1; i<4; i++) {
		for (j=1; j<3; j++) {
			printf("Informe a nota %d do %d bimestre : ", j, i);
			scanf("%f", &nota[j]);
			bim[i] = (nota[1] + nota[2]) / 2;
		}
	}
	
	notafinal = (bim[1] + bim[2] + bim[3]) / 3;
	printf("Nota final = %.2f", notafinal);
	
	return 0;
}
