//#include <stdio.h>
//
//求两个数最大值
//int com(int x, int y) {
//	if (x>y)
//	{
//		printf("%d", x);
//	}
//	else if (x < y)
//	{
//		printf("%d", y);
//	}
//}
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	com(a,b);
//	return 0;
//}
//#include <stdio.h>
//爬楼梯
//int main() {
//    int a, b, c;
//    scanf_s("%d", &a);
//    if (a < 12) {
//        printf("%d",2);
//    }
//    if (a > 12) {
//        b = a / 12;
//        c = b * 4 + 2;
//        printf("%d",c);
//    }
//
//    return 0;
//}
// 计算体重指数
//int main() {
//    int weight;
//    int hight;
//    double BMI;
//    scanf("%d %d", &weight, &hight);
//    BMI = weight / (((float)hight / 100) * ((float)hight / 100));
//    printf("%.2f", BMI);
//    return 0;
//}
// 判断三角形
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b > c && a - b < c) {
//
//
//            if (a == b && a == c && b == c) {
//                printf("%s\n", "Equilateral triangle!");
//            }
//            else if (a == b || a == c || b == c) {
//                printf("%s\n", "Isosceles triangle!");
//            }
//            else {
//                printf("%s\n", "Ordinary triangle!");
//            }
//        }
//        else {
//            printf("%s\n", "Not a triangle!");
//        }
//    }
//    return 0;
//}
#include <math.h>
#include <stdio.h>
//能活多少秒

int main() {
    int age;
    int sec;
    scanf_s("%d", &age);
    if (0 < age < 200) {
        long sec = 3.156 * pow(10, 7) * age;
        printf("%ld", sec);


    }


    return 0;
}