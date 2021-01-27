//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//#include<math.h>
//
//int a[30];
//int i, j;
//int main()
//{
//    int n;
//    int w;
//    long long ans;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    ans = 0;
//    for (i = 0; i < n; i++)
//    {
//        w = 1;
//        for (j = i; j < n; j++)
//        {
//            w *= a[j];
//            if (w > ans)
//                ans = w;
//        }
//    }
//    if (ans > 0)
//        printf("%d", ans);
//    else
//        printf("0");
//
//    return 0;
//}