#include <stdio.h>
#include <stdlib.h>
#define N 7

void orderByDescend(double a[])
{
    /*
    �������ܣ���������
    ����������a
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

    //1. ��������
    printf("������һ�鸡������7��Ԫ�أ��ո�ֿ���\n");
    for(i = 0; i < N; i++)
    {
        scanf("%lf", &a[i]);
    }

    //2.���ú���������������
    orderByDescend(a);

    //3. �������������
    for(i = 0; i < N; i++)
    {
        printf("%f ", a[i]);
    }
    printf("\n");

    //4. �����λ��
    printf("The median of the array is %.2f\n", a[N/2]);

    return 0;
}
