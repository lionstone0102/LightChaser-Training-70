#include<stdio.h>
void swap(int *x,int *y)
{
    int temp =*x; /*写一个交换函数，参数是指针（装地址的盒子）*/
    *x=*y;/*顺着 x 的地址把值取出来，暂存到 temp*/
    *y=temp;/*这一段存在的目的是使数值交换不是一次性的，如果直接写在main里面来交换就只能用那一次，抽成函数后，可以随时调用*/
}
int main(void){
    int a,b;
    printf("请输入两个整数:");
    if (scanf("%d %d",&a,&b)!=2){/*读两个整数，没读到 2 项就说明输入不对，至少有两项*/
        printf("格式错辣！请输入两个整数\n");/*如果用户输入了比如 abc这种不是整数的，要告诉用户输错了*/
        return 1;
    }
    printf("交换前:a=%d,b=%d\n",a,b); /*先输出一下交换前的值，相当于一个确认，也方便最后对比*/
    swap(&a,&b);/*把 a、b 的地址传进去，函数才能改到原件*/
    printf("交换后:a=%d,b=%d\n",a,b);
    return 0;
}
