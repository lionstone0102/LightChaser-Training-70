#include<stdio.h>
#include<stdlib.h> /*malloc /free 在这里*/

int main(void)
{
    int n;
    printf("请输入数据个数n: \n");/*没读到 1 个整数，或者个数不是正数就要重新提醒*/
    if(scanf("%d",&n)!=1||n<=0){
        printf("个数必须是正整数\n");
        return 1;
    }
    int *arr=malloc((sizeof(int)*(size_t)n)); /*动态申请n个整数的内存空间*/
    if (arr==NULL){/*借内存可能失败，失败了返回空指针*/
        printf("内存申请失败了！\n");/*告诉用户内存不够*/
        return 1;
    }
    printf("请输入%d个整数: \n", n);
    for(int i=0; i<n; i++){/*从第 0 个位置填到第 n-1 个位置*/
       if(scanf("%d", &arr[i])!=1){ /*读一个整数放进第 i 个格子，读失败就报错*/
            printf("第%d个数输入无效\n", i+1);
            free(arr);/*出错也要先把借的内存还回去，让内存free了*/
            return 1;
        }
    }
    /*用double累加 避免整数除法砍掉小数部分*/
    double sum=0.0;
    for(int i=0; i<n; i++){/*把 n 个数挨个过一遍*/
        sum += arr[i];
    }
    double average=sum/n;
    printf("平均值为: %.2f\n", average);
    free(arr); /*用完释放*/
    arr = NULL;/*避免野生指针*/
    return 0;
}

