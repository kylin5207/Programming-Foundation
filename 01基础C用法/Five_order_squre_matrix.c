#include<stdio.h>
#define N 5

/*
输入5阶方阵
1. 将5阶方阵转置
2. 求矩阵中最大数和最小数所在的行和列
3. 将矩阵中重复的元素置零
注意：假设数据类型为整型
*/

void transform(int matrix[N][N])
{
    /*
    实现矩阵的转置
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

    printf("转置后的方阵为：\n");
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
    计算矩阵中最小值和最大值所在的行和列
    */
    int i, j;
    int minrow = 0, mincol = 0, maxrow = 0, maxcol = 0;//假设当前最大值和最小值就是第一个元素

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

    //注意：这里加1是因为默认数组的索引从0开始，而矩阵是从1开始的
    printf("min：%d %d行%d列\n", matrix[minrow][mincol], minrow+1, mincol+1);
    printf("max：%d %d行%d列\n", matrix[maxrow][maxcol], maxrow+1, maxcol+1);
}

void replace_repete(int matrix[N][N])
{
    /*
    将矩阵中重复的元素置零
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

            //查找当前字符是否在numarray出现过
            loc = strchr(numarray, ch);

            if(loc)
            {
                //如果出现过，就将其置0
                matrix[i][j] = 0;
            }
            else{
                //否则，就将该元素加入一个字符串数组numarray
                numarray[length] = ch;
                length++;
            }
        }
    }

    printf("重复元素替换为0后的方阵为：\n");

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

    //1. 输入五阶方阵
    printf("请输入5阶方阵（按行输入，空格分开）\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //2. 将五阶方阵转置
    transform(matrix);

    //3. 计算矩阵中最大数和最小数所在的行和列
    min_max(matrix);

    //4. 将矩阵中重复的元素置零
    replace_repete(matrix);

    return 0;
}
