# include <stdio.h>
  float bub(int r){
  float const pi=3.14;
 float a;
 a=pi*(r*r);
 return a;}

int main(){
   int r;
   printf("Enter the radias:");
   scanf("%d",&r);
   printf("The result: area of ccircle is:%.2f\n",bub(r));

return 0;
}
