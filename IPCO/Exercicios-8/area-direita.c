#include <stdio.h>

#define SIZE 12

int main() {
  char operacao;
  double matrix[SIZE][SIZE];
  double soma = 0.0;
  int elementos = 0;

  scanf(" %c", &operacao);

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      scanf("%lf", &matrix[i][j]);
    }
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = SIZE - i; j < SIZE; j++) {
      soma += matrix[i][j];
      elementos++;
    }
  }

  if (operacao == 'S') {
    printf("%.1f\n", soma);
  } else if (operacao == 'M') {
    printf("%.1f\n", soma / elementos);
  }

  return 0;
}



/*
	@autor: Malbolge;
	@data: 06/08/2018;
	@nome: Área Direita;
*/

#include <stdio.h>

int main ()
{

	double matrix[12][12];
  double soma = 0, media = 0;
	char operacao;
	unsigned short i, j, cont = 0;

	scanf("%c", &operacao);

	for(i = 0; i < 12; i++)
		for(j = 0; j < 12; j++)
			scanf("%lf", &matrix[i][j]);

	if (operacao == 'S')
	{

		for(i = 0; i < 12; i++)
			for(j = 0; j < 12; j++)
				if (i < j && i > 12 - j - 1)
					soma += matrix[i][j];

		printf("%.1lf\n", soma);
	}

	if (operacao == 'M')
	{

		for(i = 0; i < 12; i++)
			for(j = 0; j < 12; j++)
				if (i < j && i > 12 - j - 1)
				{
					media += matrix[i][j];
					cont++;
				}

		printf("%.1lf\n", media/cont);
	}
}
