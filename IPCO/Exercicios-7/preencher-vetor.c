#include <stdio.h>

int main(){
  int T, arr[1000];

  scanf("%d", &T);

  if(T >= 2 && T <= 50){
    for (int i = 0; i < 1000; i++) {
      arr[i] = i % T;
      printf("N[%d] = %d\n", i, arr[i]);
    }
  }

  return 0;
}