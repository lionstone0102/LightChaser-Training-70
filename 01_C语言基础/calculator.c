#include<stdio.h>
int main(void)
{
   double a,b,result;
   char op;

   printf("请输入计算式(eg. 3+4):");
   if (scanf("%lf%c%lf",&a,&op,&b)!=3)
      {
         printf("输入格式错误,请重新输入 eg. 3+4\n");
         return 1;
      
      }
  switch(op){
      case '+':
         result=a+b;
         break;
      case '-':
         result=a-b;
         break;
      case '*':
         result=a*b;
         break;
      case'/':
         if(b==0){
            printf("除数不能为0,请重新输入\n");
            return 1;
         }
         result=a/b;
         break;
      default:
         printf("不支持的运算符:%c,只支持 + - * /，请重新输入\n",op);
         return 1;
      }
      printf("%g %c %g = %g\n",a,op,b,result);
      return 0;
   



}