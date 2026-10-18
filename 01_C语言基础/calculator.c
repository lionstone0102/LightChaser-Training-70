#include<stdio.h>
int main(void)
{
   double a,b,result;/*准备三个可以装小数的盒子*/
   char op;/*准备一个装符号的盒子*/

   printf("请输入计算式(eg. 3+4):");
   if (scanf("%lf%c%lf",&a,&op,&b)!=3)
      {
         printf("输入格式错误,请重新输入 eg. 3+4\n");
         return 1;/*返回 1 表示程序出错结束*/
      
      }
  switch(op){ /*根据符号选择下面几种情况，走不同的路*/
      case '+':
         result=a+b;
         break;/*跳出 switch，别再往下走*/
      case '-':
         result=a-b;
         break;
      case '*':
         result=a*b;
         break;
      case'/':
         if(b==0){ /*除法前先看除数是不是 0*/
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