#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a, b, c[1000],f,d;
//	scanf("%d", &a);
//	for (int d = 0;d < a;d++)
//	{
//		scanf("%d", &c[d]);
//	}
//	scanf("%d", &b);
//	f = 0;
//	for (d = 0;d < a;d++)
//	{
//		if (c[d] == b)
//			f++;
//	}
//	printf("%d", f);
//	return 0;
//}

//int main()
//{
//	int a[1000], b;
//	float c = 0, d[1000] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
//	
//	for (b = 0;b < 10;b++)
//	{
//		scanf("%d", &a[b]);
//		c = c+(float)a[b] * d[b];
//	}
//	printf("%.1f", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10000],b,c,d;
//	d = 0;
//	scanf("%d", &b);
//	for (c = 0;c < b;c++)
//	{
//		scanf("%d", &a[c]);
//	}
//	for (c = 0;c < b / 2;c++)
//	{
//		d = a[c];
//		a[c] = a[b - 1 - c];
//		a[b - 1 - c] = d;
//	}
//	for (c = 0;c < b;c++)
//	{
//		printf("%d ", a[c]);
//	}
//	return 0;
//}

int main()
{
	int a[1000], b,c;
	float g=0, d=0, f=0;
	scanf("%d", &b);
	for (c = 0;c < b;c++)
	{
		scanf("%d", &a[c]);
	}
	for (c = 0;c < b;c++)
	{
		if (a[c] < 19 && a[c]>0)
			a[c] = 1;
		if (a[c] > 18 && a[c] < 36)
			a[c] = 2;
		if (a[c] > 35 && a[c] < 61)
			a[c] = 3;
		switch (a[c])
		{
		case 1:
			g++;
			break;
		case 2:
			d++;
			break;
		case 3:
			f++;
			break;
		}
	}
	printf("%.2f%%\n", g / b *100);
	printf("%.2f%%\n", d / b *100);
	printf("%.2f%%\n", f / b *100);
	printf("%.2f%%\n", (1-(g+d+f) / b) *100);
	return 0;
}
