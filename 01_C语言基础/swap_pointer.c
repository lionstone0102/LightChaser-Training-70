#include<stdio.h>
void swap(int *x,int *y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(void){
    int a,b;
    printf("请输入两个整数:");
    if (scanf("%d %d",&a,&b)!=2){
        printf("格式错辣！请输入两个整数\n");
        return 1;
    }
    printf("交换前:a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("交换后:a=%d,b=%d\n",a,b);
    return 0;
}
