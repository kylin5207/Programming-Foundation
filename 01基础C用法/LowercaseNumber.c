#include<stdio.h>
#define MAX_CHAR_LENGTH 100
/*
��һ���ַ����е�Сд��ĸ�������
*/

int main()
{
    char str[MAX_CHAR_LENGTH];
    int length = 0; //���ڴ洢�ַ�������ĳ���
    int i;
    int sum = 0; //��ʼ��Сд��ĸ����

    //1. �ַ�������
    printf("������һ���ַ�����\n");
    gets(str);

    //2. �����ַ�������
    length = strlen(str);

    //3.ͳ��Сд��ĸ����
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
