#include <stdio.h>
#include <stdbool.h>

int main(){
  int N;
  bool achei_indice = false;

  scanf("%d", &N);
  int arr[N];

  if(N > 1 && N <= 100){
    for(int i = 0; i < N; i++){
      scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i++){
      if(arr[i] < arr[i-1]){
        printf("%d\n", i+1);
        achei_indice = true;
        i = N;
      }
    }
  }
  if(!achei_indice){
    printf("0\n");
  }
  
  
  return 0;
}