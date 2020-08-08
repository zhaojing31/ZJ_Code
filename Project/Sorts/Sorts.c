#include<stdio.h>

void BubbleSort(int a[], int sz)    //真的把数组传过去了（以数组名指针形式传的），而不是只传了一个数
{									//此时的形参是 int a[] ，看起来是传的数组，其实传的是指针
	int i, j = 0;					//此处的形参也可以改为 int* a ,它也是一个指针
	int t = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i ; j++)    //注意此处 j 的范围是变化的
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag += 1;
			}
		}
		if (flag == 0)
			break;
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

	BubbleSort(a, sz);   //不仅要把数组名传过去，也要把元素个数传过去




	for (i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}