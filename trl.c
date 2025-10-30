#include <stdio.h>
int main(){
  int aa,bb,cc;
  printf("삼각형의 높이를 입력하시오: ");
  scanf("%d",&aa);
  printf("삼각형의 밑변을 입력하시오: ");
  scanf("%d",&bb);

  cc = (aa*bb)/2;
  printf("삼각형의 면적은 %d입니다.\n",cc);

  return 0;
}
