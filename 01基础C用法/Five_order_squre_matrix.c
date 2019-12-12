#include<stdio.h>
#define N 5

/*
����5�׷���
1. ��5�׷���ת��
2. ����������������С�����ڵ��к���
3. ���������ظ���Ԫ������
ע�⣺������������Ϊ����
*/

void transform(int matrix[N][N])
{
    /*
    ʵ�־����ת��
    */
    int i, j;
    int transform_matrix[N][N];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            transform_matrix[j][i] = matrix[i][j];
        }
    }

    printf("ת�ú�ķ���Ϊ��\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", transform_matrix[i][j]);
        }
        printf("\n");
    }
}

void min_max(int matrix[N][N])
{
    /*
    �����������Сֵ�����ֵ���ڵ��к���
    */
    int i, j;
    int minrow = 0, mincol = 0, maxrow = 0, maxcol = 0;//���赱ǰ���ֵ����Сֵ���ǵ�һ��Ԫ��

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(matrix[i][j] > matrix[maxrow][maxcol])
            {
                maxrow = i;
                maxcol = j;
            }
            else if(matrix[i][j] < matrix[minrow][mincol])
            {
                minrow = i;
                mincol = j;
            }
        }
    }

    //ע�⣺�����1����ΪĬ�������������0��ʼ���������Ǵ�1��ʼ��
    printf("min��%d %d��%d��\n", matrix[minrow][mincol], minrow+1, mincol+1);
    printf("max��%d %d��%d��\n", matrix[maxrow][maxcol], maxrow+1, maxcol+1);
}

void replace_repete(int matrix[N][N])
{
    /*
    ���������ظ���Ԫ������
    */
    char numarray[N*N];
    char ch;
    int length = 0;
    int i,j,loc;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            ch = matrix[i][j] + '0';

            //���ҵ�ǰ�ַ��Ƿ���numarray���ֹ�
            loc = strchr(numarray, ch);

            if(loc)
            {
                //������ֹ����ͽ�����0
                matrix[i][j] = 0;
            }
            else{
                //���򣬾ͽ���Ԫ�ؼ���һ���ַ�������numarray
                numarray[length] = ch;
                length++;
            }
        }
    }

    printf("�ظ�Ԫ���滻Ϊ0��ķ���Ϊ��\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int matrix[N][N];
    int i, j;

    //1. ������׷���
    printf("������5�׷��󣨰������룬�ո�ֿ���\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //2. ����׷���ת��
    transform(matrix);

    //3. ������������������С�����ڵ��к���
    min_max(matrix);

    //4. ���������ظ���Ԫ������
    replace_repete(matrix);

    return 0;
}
