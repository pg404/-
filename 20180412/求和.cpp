// 问题描述
// 求1+2+3+...+n的值。
// 输入格式
// 输入包括一个整数n。
// 输出格式
// 输出一行，包括一个整数，表示1+2+3+...+n的值。

//long long 的级别高于 long ，
//long 的级别高于 int ，
//int 的级别高于 short ，
//short 的级别高于 char 。
//另外有 _Bool 永远是最低级别。
//级别高的整数类型的宽度大于等于级别较低的整数类型。 

//输入输出long long 也可以借助printf,scanf语句，
//但对应的占位符却是和平台相关与编译器相关的：
//在Linux中，gcc很统一的用%lld；在windows中，MinGW的gcc和VC6都需要用%I64d；
//但VS2008却是用%lld。 

//你可以使用C的写法：
//scanf("%I64d",&a);
//printf("%I64d",a); 

//也可以使用
//scanf("%lld",&a);
//printf("%lld",a);

//如果使用的是Dev-C++的g++编译器，它使用的是"%I64d"而非"%lld"。 
 

#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long result;
    result = (1 + n) * n / 2;
    printf("%I64d",result);
    return 0;
}
