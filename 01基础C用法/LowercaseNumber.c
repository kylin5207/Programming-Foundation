#include<stdio.h>
#define MAX_CHAR_LENGTH 100
/*
将一个字符串中的小写字母个数输出
*/

int main()
{
    char str[MAX_CHAR_LENGTH];
    int length = 0; //用于存储字符串数组的长度
    int i;
    int sum = 0; //初始化小写字母个数

    //1. 字符串输入
    printf("请输入一个字符串：\n");
    gets(str);

    //2. 计算字符串长度
    length = strlen(str);

    //3.统计小写字母个数
    for(i = 0; i < length; i++)
    {
        if(str[i] - 'a' >= 0 && str[i] - 'a' <= 26)
        {
            sum++;
        }
    }
    printf("The number of lowercase letter is %d\n", sum);

    return 0;
}
