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
//// �ж�һ�����Ƿ�������
//int is_prime(int num) {
//    if (num <= 1) return 0;  // С�ڵ���1������������
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) return 0;  // ����ܱ���������������������
//    }
//    return 1;  // ������
//}
//
//int main() {
//    int n, count = 0, num = 2;  // n����������֣�countͳ�������ĸ�����num��2��ʼ���
//
//    // ����һ��������n
//    printf("������һ��������n��");
//    scanf("%d", &n);
//
//    // ���ҵ�n������
//    while (count < n) {
//        if (is_prime(num)) {
//            count++;  // �ҵ�����ʱ����������1
//        }
//        num++;
//    }
//
//    // �����n������
//    printf("�� %d ��������: %d\n", n, num - 1);
//
//    return 0;
//}


