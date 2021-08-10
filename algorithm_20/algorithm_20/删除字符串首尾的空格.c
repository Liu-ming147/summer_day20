#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, left, right, len, count1, count;
	char a[100];
	count = 0;
	gets(a);
	len = strlen(a);
	left = 0;
	right = len - 1;
	while (a[left] == ' ')  //删除首空格
	{
		right--;
		left++;
		count++;
	}
	count1 = count;
	while (a[right + count1] == ' ')  //删除尾空格
	{
		right--;
		count++;
	}
	char b[100] = { 0 };
	for (i = 0; i <= right; i++)
	{
		b[i] = a[i + count1];
	}
	for (i = 0; i <= right; i++)  //删除中间连续空格
	{
		while (b[i] == ' ' && b[i + 1] == ' ')
		{
			right--;
			for (j = i; j <= right; j++)
			{
				b[j] = b[j + 1];
			}
		}
	}
	for (i = 0; i <= right; i++)
	{
		printf("%c", b[i]);
	}

	return 0;
}