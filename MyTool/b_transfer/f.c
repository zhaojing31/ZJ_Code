#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define ep 5    //Å·Ã×¸Á
#define qg 7   //çÑ
#define rg 8    //Èâ
#define up 9
#define ug 10
#define Cd 11
#define dp 12

double w(double eg)
{
	int flag=0;
	if (eg < 0.94)
	{
		return (-217.44 * pow(eg, 4) + 598.14 * pow(eg, 3) - 529.82 * pow(eg, 2) + 130.85 * eg + 18.42);
		
	}
	else
		return (10.755*eg-9.755);
}

void main()
{
	double eg = 0;
	double p = 0;
	printf("ÊäÈëeg£º>\n");
	scanf("%lf",&eg);

	/*printf("%lf\n", eg);
	printf("%lf\n",w(eg));*/

	if (eg < 0.8)
		p = 150 * ((ep * (1 - eg) * qg) / (eg * pow(dp,2))) + 1.75 * ((rg * (1 - eg) * fabs(up - ug)) / dp);
	else
		p = (3.0 / 4.0) * Cd * (((1 - eg) * eg) / dp) * rg * fabs(up - ug) * w(eg);

	printf("%lf\n",p);
}
