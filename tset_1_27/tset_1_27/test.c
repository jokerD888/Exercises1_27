#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	int s[17] = { 0 };
//	int i,j,n,num;
//	int w=1;
//	int sum=0;//����˻�̫�������
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
	int s[17];//������18��Ԫ��
	int n;//����Ԫ�ظ���
	long long sum,w;//�˻������ֵΪ10^17,���ܻ����
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
			if (w > sum) sum = w;//Ѱ�����ֵ�������ϸ���С��ԭ�����򲻼���
		}
	}

	if (sum > 0) printf("%lld\n", sum);
	else printf("0\n");
	return 0;
}
