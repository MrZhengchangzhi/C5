
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d %d\n", sizeof(arr1), sizeof(arr2));
//	return 0;
//}

int num1(int x, int y, int z)
{
	int i = 0;
	int j = 1;
	int count = 0;
	for (i = 0; i < z; i++)
	{
		if ((x & (j << i))!=(y&(j<<i)))
			count++;
	}
	return count;
}

int main()
{
	int a = 1999;
	int b = 2299;
	int sz = sizeof(a) * 8;
	int num = num1(a, b, sz);
	
	printf("num=%d\n",num);
	return 0;
}

//int num(int x,int y)
//{
//	int i = 0;
//	int j = 1;
//	int count = 0;
//	for (i = 0; i <= y-1; i++)
//	{
//		if ((x & (j << i)) == (j<<i))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 5;
//	int sz = sizeof(a) * 8;
//	int b = num(a,sz);
//	printf("%d\n", b);
//	return 0;
//}