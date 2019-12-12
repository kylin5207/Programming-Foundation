#include<stdio.h>
#define MAX_CHAR_LENGTH 100

/*
输入字符串，将小写变大写，大写变小写
*/

int main()
{
    char str[MAX_CHAR_LENGTH];
    int length = 0; //用于存储字符串数组的长度
    int i;

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
            str[i] = str[i] - 'a' + 'A';
        }
        else if(str[i] - 'A' >= 0 && str[i] - 'A' <= 26)
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    printf("After transform:%s\n", str);

    return 0;
}
