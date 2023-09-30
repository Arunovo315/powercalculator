#include <stdio.h>
#include <math.h>

int main(){

  printf("Calculate : \n");
  printf("1) square \n");
  printf("2)cube \n");
  printf("3)squareroot \n");
  printf("4)cuberoot \n");

  int sl;
  double num;
  printf("enter sl : \n");
  scanf("%d" , &sl);
  printf("enter number : \n");
  scanf("%lf" , &num);

  if(sl == 1){
    printf("%lf", pow(num, 2));
  }else if(sl==2) {
    printf("%lf", pow(num, 3));
  }else if(sl==3){
    printf("%lf", sqrt(num) );
  }else if(sl==4){
    printf("%lf", cbrt(num) );
  }  

  return 0;
}