#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main3()
{
	/*
	char src[] = "ddddabcd123123213123abcd";
	char *p = strstr(src, "abcd");
	printf("p=%s\n", p);

	*/

	/*
	whileģ�ͣ�
	char *p = "11abcd111122abcd333abcd3322abcd3333222qq";	//�ҳ�abcd�ĸ���
	int n = 0;
	while ((p = strstr(p, "abcd") )!= NULL)
	{
		//�ҵ���abcd
		p = p + strlen("abcd");
		n++;
	}
	printf("n=%d", n);
	*/

//��ͷ��ģ��
	void beginEnd(char *p, int *n);
	char *p = "          abcdefg        ";
	printf("%d\n", strlen(p));
	int n = 0;	//�ǿ��ַ�����Ԫ�ظ���
	beginEnd(p, &n);


	printf("%d", n);
	system("pause");
	return 0;
}
void beginEnd(char *p, int *n)
{
	int begin = 0;
	int end = strlen(p) - 1;
	if (p == NULL || n==NULL)
	{
		return -1;
	}
	while (p[begin] == ' '&&p[begin] != 0)
	{
		//����������
		begin++;
	}
	while (p[end] == ' '&&end > 0)
	{
		//����������
		end--;
	}
	*n = end - begin+1;
}