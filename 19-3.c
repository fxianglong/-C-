#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strncmp(const char *dest, const char*src, int count)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (count && (*dest ==*src))
	{
		if (*dest == '\0')
		{
			return 0;
		}
		dest++;
		src++;
		count--;
	}
	return *dest - *src;
}
int main()
{
	int ret = 0;
	const char *str1 = "abcdt";
	const char *str2 = "cdefu";
	ret = my_strncmp(str1, str2, 4);
	if (0 == ret)
	{
		printf("0");
	}
	else if (ret > 0)
	{
		printf("1");
	}
	else
	{
		printf("-1");
	}
	system("pause");
	return 0;
}
