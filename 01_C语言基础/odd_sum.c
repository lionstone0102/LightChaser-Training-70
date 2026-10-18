#include<stdio.h>
int main(void){
    int sum =0;/*一定要定义一个sum从 0 开始，不然里面可能是之前的sum残留的值*/

    for(int i=1;i<=100;i++){/*让 i 从 1 数到 100，每轮加 1*/
        if (i%2!=0){
            sum +=i;/*是奇数就加进累加，sum = sum + i*/
        }
    }
    printf("1-100的奇数和为:%d\n",sum);
    return 0;
}
