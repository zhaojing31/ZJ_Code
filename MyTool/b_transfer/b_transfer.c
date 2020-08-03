//#define _CRT_SECURE_NO_WARNINGS 1
////十进制数转化为十六位的二进制数
//#include<stdio.h>
//#define M 16
//#define N 256
//
//void main()
//{
//	int num[256] = { 0 };
//	int temp[] = {0};
//	int j = 0;
//
//	FILE* pf = fopen("1x256.txt", "r");
//	if (pf == NULL)
//		printf("无法打开文件！\n");
//
//	for (int i = 0; i < N; i++)
//	{
//		fscanf(pf, "%d", &num[i]);
//		printf("%d\n", num[i]);
//
//		while (num[i] > 0)
//		{
//			temp[j] = num[i] % 2;
//			j = j + 1;
//			num[i] = num[i] / 2;
//		}	
//		for (int j = 0; j < N; j++)
//			printf("%d", temp[j]);
//		printf("\n");
//	}
//		
//	fclose("1x256.txt");
//	pf = NULL;
//}
//
//int transfer(int x) 
//{ 
//	int p = 1, y = 0, yushu;    
//	while(1)
//	{ 
//		yushu = x % 2;       
//		x /= 2;        
//		y += yushu * p;        
//		p *= 10;       
//		if (x < 2) 
//		{ 
//			y += x * p;            
//			break; 
//		}
//	}   
//	return y; 
//}

