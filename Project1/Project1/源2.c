#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stu
{
	char name[30];
	int age;
};
void set_stu(struct stu temp)
{
	strcpy(temp.name, "mike");
	temp.age = 10;
	printf("s.name = %s,s.age=%d", temp.name, temp.age);
}
int main2()
{
	struct stu s = { 0 };
	set_stu(s);

	//printf("s.name = %s,s.age=%d", s.name, s.age);

	system("pause");
	return 0;
}