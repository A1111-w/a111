#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//    int a,c;
//    bool b;
//    scanf("%d", &a);
//    b = (bool)a;
//    c = (int)b;
//    printf("%d", c);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10000], a, b, c;
//	scanf("%d\n", &a);
//	c = 0;
//	b = 0;
//	double d = 0;
//	while (b < a)
//	{
//		scanf("%d", &arr[b]);
//		b++;
//	}
//	while (c < a)
//	{
//		d += arr[c];
//		c++;
//	}
//	printf("%.0lf %.5lf", d, d / a);
//	return 0;
//}


//#include <stdio.h>
//
//
//int max(int  x,int y)
//{
//	if (x > y)
//		return x;
//	return y;
//}
//
//	int main()
//	{
//		int a, b, c[1000], d, f;
//		scanf("%d", &a);
//		for(b = 0;b<a;b++)
//			scanf("%d", &c[b]);
//		printf("\n");
//		b = 0;
//		d = 1;
//		while (d <= a)
//		{
//			f = max(c[b], c[d]);
//			b++;
//			d++;
//		}
//		printf("%d", f);
//		return 0;
//	};
//	while (b < a)
//	{
//		scanf("%d", &c[b]);
//		b++;
//	}
//	
//	b = 0;
//	d = 1;
//	while (d <= a)
//	{
//		f = max(c[b], c[d]);
//		b++;
//		d++;
//	}
//	printf("%d", f);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	if (a % 2 == 0)
//		a = a + 1;
//	c = 0;
//	while (a <= b)
//	{
//		c += a;
//		a += 2;
//	}
//	printf("%d", c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	c = 0;
//	scanf("%d %d", &a, &b);
//	while (a <= b)
//	{
//		if (a % 17 == 0)
//		{
//			c += a;
//		}
//		a++;
//	}
//	printf("%d", c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[100], b, c, d, f, g;
//	scanf("%d", &b);
//	c = 0;
//	d = 0;
//	f = 0;
//	g = 0;
//	while (c < b)
//	{
//		scanf("%d", &a[c]);
//		c++;
//	}
//	c = 0;
//	while (c < b)
//	{
//		if (a[c] == 1)
//		{
//			d++;
//		}
//		if (a[c] == 5)
//		{
//			f++;
//		}
//		if (a[c] == 10)
//		{
//			g++;
//		}
//		c++;
//	}
//	printf("%d\n", d);
//	printf("%d\n", f);
//	printf("%d\n", g);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	c = 0;
//	d = 1;
//	while (c < b)
//	{
//		d *= a;
//		c++;
//	}
//	printf("%d", d);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf", &a, &b);
//	c = 0;
//	while (c < b)
//	{
//		a = a * 1.001;
//		c++;
//	}
//	printf("%.4lf", a);
//	return 0;
//}



//#include  <stdio.h>
//int main()
//{
//	int a[30], b, c, d, f, g;
//	xxxxxxxxxxxxx
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    double a, b, c, area;
//    int valid;
//
//    printf("请输入三角形的三条边长：");
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    if (a + b > c && a + c > b && b + c > a)
//        valid = 1;
//    else
//        valid = 2;
//
//    switch (valid) {
//    case 1:
//        double s = (a + b + c) / 2;
//        area = sqrt(s * (s - a) * (s - b) * (s - c));
//        printf("可以构成三角形，面积为：%lf\n", area);
//        break;
//    case 2:
//        printf("不能构成三角形，请检查输入的边长。\n");
//        break;
//    default:
//        printf("未知错误。\n");
//        break;
//    }

//    return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int a[50], arr[50], b, c, d, f, g, k;
//	scanf("%d", &b);
//	c = 1;
//	a[1] = 1;
//	a[2] = 1;
//	while (c < 29)
//	{
//		a[c+2] = a[c] + a[c + 1];
//		c++;
//	}
//	d = 0;
//	while (d < b)
//	{
//		scanf("%d", &arr[d]);
//		d++;
//	}
//	d = 0;
//	while (d < b)
//	{
//		f = arr[d];
//		printf("%d\n", a[f]);
//		d++;
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[10000], b, c, g;
//	int  d, f;
//	d = 0;
//	f = 0;
//	scanf("%d", &b);
//	c = 0;
//	g = 0;
//	while (c < b)
//	{
//		scanf("%d %d", &d, &f);
//		a[c] = (f*100 / d);
//		c++;
//	}
//	c = 1;
//	while (c < b)
//	{
//		g = a[c] - a[0];
//			if (g > 5) {
//				printf("better\n");
//			}
//			else if (g < -5) {
//				printf("worse\n");
//			}
//			else printf("same\n");
//			c++;
//	}
//
//
//	
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>;
//int main()
//{
//	int a, ren,n;
//	double b, c, x, y,f;
//	scanf("%d", &n);
//	a = 0;
//	b = 0;
//	f = 0;
//	while (a < n)
//	{
//		scanf("%lf %lf %d", &x, &y, &ren);
//		b = (sqrt)(x * x + y * y);
//		b = b * 2 / 50;
//		c = b + ren * 1.5;
//		f += c;
//		a++;
//	}
//	if (f - (int)f == 0)
//	{
//		printf("%.0lf", f);
//	}
//	else printf("%d", (int)f + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, f, g, k,n;
//	scanf("%d", &a);
//	scanf("%d", &n);
//	d = 0;
//	b = 0;
//	while (b < n)
//	{
//		scanf("%d", &c);
//		if (a >= c)
//		{
//			a -= c;
//		}
//		else d++;
//		b++;
//	}
//	printf("%d", d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d,f,k,g,y,x;
//	scanf("%d", &a);
//	c = 0;
//	x = 0;
//	while (c < a)
//	{
//		scanf("%d", &d);
//		f = d/1000;
//		k = (d - f * 1000) / 100;
//		g = d%10;
//		y = (d % 100 - g)/10;
//		if (g - y - f - k > 0)
//		{
//			x++;
//		}
//		c++;
//	}
//	printf("%d", x);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	double f,c,d;
//	scanf("%d", &a);
//	c = 1;
//	d = 2;
//	b = 0;
//	f = 0;
//	while (b < a)
//	{
//		f = d / c + f;
//		d += c;
//		c = d - c;
//		b++;
//	}
//	printf("%.4lf", f);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int   c, d, g, n;
//	scanf("%d", &n);
//	double b = 1;
//	c = 1;
//	double a = 0;
//	g = 0;
//	while (g < n)
//	{
//		a = a + 1 / b * c;
//		c = -c;
//		b++;
//		g++;
//	}
//	printf("%.4lf", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, f, g, k;
//	scanf("%d %d %d", &a, &b, &c);
//	d = 2;
//	if (a == b && b == c)
//	{
//		printf("1");
//	}
//	else while (d > 0)
//	{
//		f = a % d;
//		g = b % d;
//	    k = c % d;
//		if (f == g && g == k)
//		{
//			break;
//		}
//		d++;
//	}
//	printf("%d", d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a,b;
//	scanf("%d", &n);
//	a = 1;
//	b = 0;
//	while (a <= n)
//	{
//		b += a;
//		a++;
//	}
//	printf("%d", b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c, d,k;
//	float f;
//	scanf("%d %d %d", &a, &b, &c);
//	d = 1;
//	f = (float)a / b;
//	while (d <= c)
//	{
//		k = (int)f * 10;
//		f *= 10;
//		f -= k;
//		d++;
//	}
//	printf("%d", (int)f % 10);
//	return 0;
//}


//#include<stdio.h>
//int a, b, n;
//int main()
//{
//	scanf("%d%d%d", &a, &b, &n);
//	for (int i = 1; i <= n; i++) a %= b, a *= 10;
//	a /= b;
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, f;
//	scanf("%d %d", &a, &b);
//	c = 1;
//	d = a;
//	while (c < b)
//	{
//		a *= d;
//		a %= 7;
//		c++;
//	}
//	
//	switch (a) {
//	case 0:
//			printf("Sunday");
//			break;
//	case 1:
//			printf("Monday");
//			break;
//	case 2:
//			printf("Tuesday");
//			break;
//	case 3:
//			printf("Wednesday");
//			break;
//	case 4:
//			printf("Thursday");
//			break;
//	case 5:
//			printf("Friday");
//			break;
//	case 6:
//			printf("Saturday");
//		    break;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, f;
//	scanf("%d %d", &a, &b);
//	d = a;
//	c = 1;
//	while (c < b)
//	{
//		a *= d;
//		a %= 1000;
//		c++;
//	}
//	printf("%03d", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double a, h, s;
//	scanf("%lf", &h);
//	a = 0;
//	s = h / 2;
//	while (a < 9)
//	{
//		h /= 2;
//		s += h;
//		a++;
//	}
//	h /= 2;
//	printf("%g\n", s * 2);
//	printf("%g\n", h);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	long long a,b;
//	scanf("%lld", &a);
//	if (a == 1)
//	{
//		printf("End");
//	}
//	else while (a > 0)
//	{
//		if (a % 2 == 0)
//		{
//			
//			printf("%lld/2=%lld\n", a, a / 2);
//			a /= 2;
//		}
//		else if (a % 2 != 0 && a != 1)
//		{
//			printf("%lld*3+1=%lld\n", a, a * 3 + 1);
//			a = a * 3 + 1;
//		}
//		else if (a == 1)
//		{
//			printf("End\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int  b, c, d, f, g, x;
//	long long a,k;
//	scanf("%lld %d", &a, &b);
//	c = 0;
//	f = 10;
//	g = 1;
//	x = 0;
//
//	while (a>0)
//	{
//		k = a % f;
//		
//		k = k / g;
//		
//		if (k == 3)
//		{
//			x++;
//		}
//		if ((a / g) < 10)
//		{
//			break;
//		}
//		f *= 10;
//		g *= 10;
//		
//	}
//	if (x == b)
//	{
//		printf("YES");
//	}
//	else printf("NO");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double a, b, c, d;
//	scanf("%lf", &a);
//	d = 1;
//	b = 1;
//	c = 1;
//	while (b <= a)
//	{
//		
//		b++;
//		d += c;
//		c *= 1 / b;
//	}
//	printf("%.10lf", d);
//	return 0;
//}

//#include <stdio.h>
//
//
//int abc(int num) {
//    if (num <= 1) return 0;  
//    for (int i = 2; i * i <= num; i++)
//    {
//        if (num % i == 0) return 0;  
//    }
//    return 1;
//}
//
//int main() {
//    int n, count = 0, num = 2;  
//    scanf("%d", &n);
//    while (count < n) {
//        if (abc(num)) {
//            count++;  
//        }
//        num++;
//    }
//
//    
//    printf("%d\n",num - 1);
//
//    return 0;
//}

//#include <stdio.h>
//
//void set(int* p, int* a)
//{
//	int z;
//	z = *p;
//	*p = *a;
//	*a = z;
//}
//
//
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	set(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}
//指针前面要有*


//#include <stdio.h>
//int





//#include <stdio.h>
//
//// 判断一个数是否是质数
//int is_prime(int num) {
//    if (num <= 1) return 0;  // 小于等于1的数不是质数
//    for (int i = 2; i < num; i++) {
//        if (num % i == 0) return 0;  // 如果能被其他数整除，则不是质数
//    }
//    return 1;  // 是质数
//}
//
//int main() {
//    int n, count = 0, num = 2;  // n是输入的数字，count统计质数的个数，num从2开始检查
//
//    // 输入一个正整数n
//    printf("请输入一个正整数n：");
//    scanf("%d", &n);
//
//    // 查找第n个质数
//    while (count < n) {
//        if (is_prime(num)) {
//            count++;  // 找到质数时，计数器加1
//        }
//        num++;
//    }
//
//    // 输出第n个质数
//    printf("第 %d 个质数是: %d\n", n, num - 1);
//
//    return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	return 0;
//	int a, b, c, d, x;
//	double y;
//	scanf("%d %d %d", &a, &b, &c);
//	while (x <= c / a)
//	{
//		y = (double)(c - a * x) / b;
//		if (y >= 0 && y == (int)y)
//		{
//			d++;
//		}
//		x++;
//	}
//	printf("%d", d);
//	return 0;
//}


//#include <stdio.h>
//void cs(int a,int b)
//{
//	for(; b <= a; b++)
//	{
//		printf("%d*%d=%d ", a, b, a * b);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a, b;
//	a = 1;
//	b = 1;
//	for (; a <= 9; a++)
//	{
//		
//		cs(a, b);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	
//	int a=0, b=0;
//	b = a++;
//	printf("b%d\n", b);
//	a--;
//	b = ++a; 
//	printf("b%d\n", b);
//	
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	char grade = 'B';
//	switch (grade)
//	{
//	case 'A': printf("80-100\n");
//	case 'B': printf("70-80\n"); break;
//	case 'C': printf("60-70\n");
//	case 'D': printf("<60\n");
//	default: printf("error!\n");
//	}
//	return 0;
//}

//#include<stdio.h> 
//void A(int t);
//void B(int t[5]);
//int main()
//{
//	int a[5] = { 0,1,2,3,4 };
//	int i;
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	A(a[1]);
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	B(a);
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//void A(int t)
//{
//	t += 1;
//}
//void B(int t[5])
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		t[i] += 1;
//}

//#include <stdio.h> 
//int a = 3, b = 5;
//int main()
//{
//	void p(int a, int b);
//	printf("a=%d,b=%d\n", a, b);
//	int a = 8, b = 4;
//	p(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//void p(int a, int b)
//{
//	printf("a=%d,b=%d\n", a, b);
//}