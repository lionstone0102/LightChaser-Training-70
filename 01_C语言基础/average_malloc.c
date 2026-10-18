#include<stdio.h>
#include<stdlib.h> /*malloc /free 在这里*/
#include "utf8_console.h" /*让 Windows 控制台按 UTF-8 显示中文*/

int main(void)
{
    int n;
    printf("请输入数据个数n: \n");
    if(scanf("%d",&n)!=1||n<=0){
        printf("个数必须是正整数\n");
        return 1;
    }
    int *arr=malloc((sizeof(int)*(size_t)n)); /*动态申请n个整数的内存空间*/
    if (arr==NULL){
        printf("内存申请失败了！\n");
        return 1;
    }
    printf("请输入%d个整数: \n", n);
    for(int i=0; i<n; i++){
       if(scanf("%d", &arr[i])!=1){
            printf("第%d个数输入无效\n", i+1);
            free(arr);
            return 1;
        }
    }
    /*用double累加 避免整数除法砍掉小数部分*/
    double sum=0.0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    double average=sum/n;
    printf("平均值为: %.2f\n", average);
    free(arr); /*用完释放*/
    arr = NULL;/*避免野生指针*/
    return 0;
}

