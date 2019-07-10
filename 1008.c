#include <stdio.h>

int main() {
	
	char nome[10];
	double salario, total, horas;

	printf("Digite o Nome/Nº do funcionario: ");
	fgets(nome, 10, stdin);
	printf("nome = %s", nome);

	printf("\nDigite salario por horas trabalhadas: ");
	scanf("%lf", &salario);

	printf("\nDigite as horas trabalhadas: ");
	scanf("%lf", &horas);
	
	total = horas * salario;

	printf("\nTOTAL = R$ %.2lf\n", total);

	return 0;
}
