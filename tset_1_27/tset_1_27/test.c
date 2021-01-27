#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	int s[17] = { 0 };
//	int i,j,n,num;
//	int w=1;
//	int sum=0;//避免乘积太大导致溢出
//	/*for (i = 0; i < 17; i++)
//	{
//		s[i] = 1;
//	}
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		s[i] = num;
//	}
//	for (i = 0; i < n; i++)
//	{
//		w = 1;
//		for (j = i; j < n; j++)
//		{
//
//			w *= s[j];
//			if (w > sum)
//			{
//				sum = w;
//			}
//		}
//	}
//	printf("%d\n", sum);
//	/*if (sum <= 0)
//	{
//		printf("%d\n",sum);
//	}
//	else
//	{
//		printf("%lld\n", sum);
//	}*/
//	return 0;
//}
//improve:
int main(void)
{
	int s[17];//不超过18个元素
	int n;//输入元素个数
	long long sum,w;//乘积的最大值为10^17,可能会溢出
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}

	sum = 0;

	for (i = 0; i < n; i++)
	{
		w = 1;
		for (j = i; j < n; j++)
		{
			w *=s[j];
			if (w > sum) sum = w;//寻找最大值，若乘上该数小于原数，则不计入
		}
	}

	if (sum > 0) printf("%lld\n", sum);
	else printf("0\n");
	return 0;
}
