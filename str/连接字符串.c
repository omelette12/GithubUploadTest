#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p2 = &a[2]; //��2��Ԫ�ص�ַ	3
	int *p1 = &a[1]; //��1��Ԫ�ص�ַ	2
	printf("p1 = %p, p2 = %p\n", p1, p2);

	int n1 = p2 - p1; //n1 = 1
	int n2 = (int)p2 - (int)p1; //n2 = 4
	printf("n1 = %d, n2 = %d\n", n1, n2);


	system("pause");
	return 0;

}