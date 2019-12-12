#include <stdio.h>
#include <stdlib.h>
#define N 7

void orderByDescend(double a[])
{
    /*
    函数功能：逆序排序
    参数：数组a
    */

    int i,j;
    double t;

    for(i = 0; i < N-1; i++)
    {
        for(j = i+1; j < N; j++)
        {
            if(a[j] > a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }

    }
}

int main()
{
    double a[N]={0};
    int i;

    //1. 输入数据
    printf("请输入一组浮点数（7个元素，空格分开）\n");
    for(i = 0; i < N; i++)
    {
        scanf("%lf", &a[i]);
    }

    //2.利用函数按照逆序排序
    orderByDescend(a);

    //3. 输出排序后的数组
    for(i = 0; i < N; i++)
    {
        printf("%f ", a[i]);
    }
    printf("\n");

    //4. 输出中位数
    printf("The median of the array is %.2f\n", a[N/2]);

    return 0;
}
