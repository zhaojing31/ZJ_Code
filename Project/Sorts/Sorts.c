#include<stdio.h>

void BubbleSort(int a[], int sz)    //真的把数组传过去了（以数组名指针形式传的），而不是只传了一个数
{									//此时的形参是 int a[] ，用它来接受数组
	int i, j = 0;
	int t = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i ; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
void main()
{
	int a[5] = { 0 };
	int i = 0;
	int sz = 0;
	printf("输入要排序的数据：\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	sz = sizeof(a) / sizeof(a[0]);

	BubbleSort(a, sz);



	for (i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}