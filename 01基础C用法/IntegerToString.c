#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_CHAR_LENGTH 100

/*
������ת��Ϊ�ַ���
ע�⣺��Ŀû�涨���ж�������õ���long long�������������
*/
int main()
{
    long long number, num;
    int digit;
    char strnum[MAX_CHAR_LENGTH];
    int i;
    int length = 0;

    //1. ��������
    printf("������һ��number��\n");
    scanf("%lld", &number);

    //���¶���һ���±��������¸���ԭ����
    num = number;

    //2. ����numberλ��
    do{
        num /= 10;
        length++;
    }
    while(num > 0);
    printf("length = %d\n", length);

    //3. ת��Ϊ�ַ���
    for(i = 0; i < length; i++)
    {
        digit = number % 10;
        number /= 10;
        strnum[length - 1 - i] = digit + '0';
    }

    //4. ����ַ�������
    puts(strnum);

    return 0;
}
