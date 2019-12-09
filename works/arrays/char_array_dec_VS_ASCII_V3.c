#include<stdio.h>
#define N 100

int main(){
 int i;
 char mas[N];

 for(i=0;i<N;i++){
  mas[i]=i+1;
  printf("%d %d %c\n",i, mas[i], mas[i]);
  }

 printf("%p\n",mas);
 printf("%p\n",&mas[0]);
}
