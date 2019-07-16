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
	while模型：
	char *p = "11abcd111122abcd333abcd3322abcd3333222qq";	//找出abcd的个数
	int n = 0;
	while ((p = strstr(p, "abcd") )!= NULL)
	{
		//找到了abcd
		p = p + strlen("abcd");
		n++;
	}
	printf("n=%d", n);
	*/

//两头堵模型
	void beginEnd(char *p, int *n);
	char *p = "          abcdefg        ";
	printf("%d\n", strlen(p));
	int n = 0;	//非空字符串的元素个数
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
		//从左往右数
		begin++;
	}
	while (p[end] == ' '&&end > 0)
	{
		//从右往左数
		end--;
	}
	*n = end - begin+1;
}