#include<stdio.h>
#define MAX_CHAR_LENGTH 100

/*
�����ַ�������Сд���д����д��Сд
*/

int main()
{
    char str[MAX_CHAR_LENGTH];
    int length = 0; //���ڴ洢�ַ�������ĳ���
    int i;

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
