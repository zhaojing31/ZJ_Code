#include<stdio.h>

void BubbleSort(int a[], int sz)    //��İ����鴫��ȥ�ˣ���������ָ����ʽ���ģ���������ֻ����һ����
{									//��ʱ���β��� int a[] ���������Ǵ������飬��ʵ������ָ��
	int i, j = 0;					//�˴����β�Ҳ���Ը�Ϊ int* a ,��Ҳ��һ��ָ��
	int t = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i ; j++)    //ע��˴� j �ķ�Χ�Ǳ仯��
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
	printf("����Ҫ��������ݣ�\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	sz = sizeof(a) / sizeof(a[0]);

	BubbleSort(a, sz);   //����Ҫ������������ȥ��ҲҪ��Ԫ�ظ�������ȥ




	for (i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}