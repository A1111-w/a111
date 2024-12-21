#define _CRT_SECURE_NO_WARNINGS
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


//#include <stdio.h>
//int main()
//{
//	int arr[10000], a, b, c, d;
//	scanf("%d\n", &a);
//	c = 0;
//	b = 0;
//	d = 0;
//	while (b < a)
//	{
//		scanf("%d",&arr[b]);
//		b++;
//	}
//	while (c < a)
//	{
//		d = d + arr[c];
//		c++;
//	}
//	printf("%d %.5f", d, (float)d / a);
//	return 0;
//}

//
//#include <stdio.h>
//
//// 判断一个数是否是质数
//int is_prime(int num) {
//    if (num <= 1) return 0;  // 小于等于1的数不是质数
//    for (int i = 2; i * i <= num; i++) {
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


