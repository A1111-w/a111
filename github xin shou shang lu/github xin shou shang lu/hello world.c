#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("梦开始的地方");
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (a <= 100)
//    {
//        b = a + b;
//        a++;
//    }
//    printf("100!是%d", b);
//    return 0;


//#include <stdio.h>
//int main()
//{
//	float r, h, c, s1,s2, v1,v2;//v1是圆球体积，v2是圆柱的,s同理
//	scanf("%f %f", &r, &h);//自己输入半径和圆柱的高
//	c = 3.14 * r * 2;
//	s1 = 3.14 * r * r;
//	s2 = 4 * 3.14 * r * r;
//	v2 = 3.14 * r * r * h;
//	v1 = 4 / 3 * 3.14 * r * r * r;
//	printf("c%.2f s1%.2f s2%.2f v1%.2f v2%.2f", c, s1, s2, v1, v2);
//
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//    int n = 100;
//    int i;
//    int sum = 0;
//
//   
//    
//    for (i = 1; i <= n; i++) {
//        sum += i;
//    }
//
//    printf("%d\n",sum);
//
//    return 0;
//}

//

//#include<stdio.h>
//int main()
// {
//	int a, b, c, d, e, f;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	a = a / 3;// 统计1号有几份
//	f = a % 3;
//	
//	b = b + a;//加到相邻硕上
//	
//	
//	e = e + a;//每三个语句为一组，重复5次
//	b = b / 3;
//	a = a + b;
//	c = c + b;
//	
//	
//	c = c / 3;
//	b = b + c;
//	d = d + c;
//	
//	
//	d = d / 3;
//	c = c + d; 
//	e = e + d; 
//	
//	
//	e = e / 3;
//	
//
//	d = d + e;
//	a = a + e;
//	printf("%d %d %d %d %d\n", a, b, c, d, e); 
//	printf("%d\n", f);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	float r, h, c, s1, s2, v1, v2;//v1是圆球体积，v2是圆柱的,s同理
//	scanf("%f %f", &r, &h);//自己输入半径和圆柱的高
//	c = 3.14 * r * 2;
//	s1 = 3.14 * r * r;
//	s2 = 4 * 3.14 * r * r;
//	v2 = 3.14 * r * r * h;
//	v1 = 4 / 3 * 3.14 * r * r * r;
//	printf("c %.2f s1 %.2f s2 %.2f v1 %.2f v2 %.2f", c, s1, s2, v1, v2);
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int a, b, c, d, f, g, h, k;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &f);
//    k = a + b + c + d + f;
//    g = a / 3;
//    f = f + g;
//    b = b + g;
//
//    g = b / 3;
//    a = a / 3 + g;
//    c = c + g;
//
//    g = c / 3;
//    b = b / 3 + g;
//    d = d + g;
//
//    g = d / 3;
//    c = c / 3 + g;
//    f = f + g;
//
//    g = f / 3;
//    a = a + g;
//    
//    d = d / 3 + g;
//    f = f / 3;
//    h =k -(a + b + c + d + f);
//    printf("%d %d %d %d %d\n", a, b, c, d, f);
//    printf("%d\n", h);
//
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    double a;
//    scanf("%lf\n",&a);
//    printf("%f\n", (float)a);
//    printf("%.5f\n", (float)a);
//    printf("%e\n", (float)a);
//    printf("%g\n", (float)a);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    double a;
//    scanf("%lf\n", &a);
//    printf("%f\n", (float)a);
//    printf("%.5f\n", (float)a);
//    printf("%e\n", (float)a);
//    printf("%g\n", (float)a);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, f, g, h, k, l;
//	scanf("%d", &a);
//	b = 1;
//	c = 11;
//	d = 0;
//	while (c > 10)
//	{
//		c = a / b;
//		b *= 10;
//		d++;
//	}
//	printf("%d\n", d);
//	f = a / 10000;
//	g = (a - f * 10000) / 1000;
//	h = (a / 100) % 10;
//	k = (a / 10) % 10;
//	l = a % 10;
//	printf("%d %d %d %d %d\n", f, g, h, k, l);
//	printf("%d", f + 10 * g + 100 * h + 1000 * k + 10000 * l);
//	return 0;
//}




//#include <stdio.h> 
//int main()
//{
//	int arr[100000];
//	int a, b, c;
//	scanf("%d", &a);
//	b = 0;
//	while (b < a)
//	{
//		scanf("%d\n", arr[b]);
//		b++;
//	}
//	b = 0;
//	c = 0;
//	while (b < a)
//	{
//		c += arr[b];
//		b++;
//	}
//	printf("%d %.5f", c, (float)c / a);
//	return 0;
//}