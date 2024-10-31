#include <stdio.h>

int main(){
  int N, M;
  int sub[30] = {0};

  scanf("%d %d", &N, &M);

  int soma = 0;
  for (int i = 0; i < 30; ++i){
    scanf("%lld", &sub[i]), soma += sub[i];
  }

  int media = 0;
  int dias = 0;

  while (N < M){
    for (int i = 0; i < 30 && N < M; ++i){
      if (soma % 30 == 0){
        media = soma / 30;    
      } 
      else{
        media = (soma / 30) + 1;
      }
        
      N += media;
      soma = soma + (media - sub[i]);
      sub[i] = media;
      ++dias;
    }
  }

  printf("%d\n", dias);

  return 0;
}
