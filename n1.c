#include <stdio.h>
int main(){
  int n1,n2,n3;
  printf("정수를 입력하시오: ");
  scanf("%d",&n1);
  printf("정수를 입력하시오: ");
  scanf("%d",n2);

  if(n2 == 0){
    printf("0으로 나눌 수는 없습니다.\n");
  } else{
    n3 = n1/n2;
    printf("결과는 %d입니다. \n",n3);
  }
  return 0;
}
