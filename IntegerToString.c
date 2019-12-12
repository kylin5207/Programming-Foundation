#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_CHAR_LENGTH 100

/*
将整数转化为字符串
注意：题目没规定数有多大，这里用到了long long可以输入大整数
*/
int main()
{
    long long number, num;
    int digit;
    char strnum[MAX_CHAR_LENGTH];
    int i;
    int length = 0;

    //1. 输入数字
    printf("请输入一个number：\n");
    scanf("%lld", &number);

    //重新定义一个新变量，害怕覆盖原数据
    num = number;

    //2. 计算number位数
    do{
        num /= 10;
        length++;
    }
    while(num > 0);
    printf("length = %d\n", length);

    //3. 转化为字符串
    for(i = 0; i < length; i++)
    {
        digit = number % 10;
        number /= 10;
        strnum[length - 1 - i] = digit + '0';
    }

    //4. 输出字符串数组
    puts(strnum);

    return 0;
}
