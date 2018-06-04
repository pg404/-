/*
圆周率
题目描述
计算机大牛们都在拼算法，计算圆周率小数点后面的第n位。这涉及到许多除法，现在给你一个被除数和除数，请你计算小数点后n位的值。

输入描述:
输入包含多组数据。每组数据包含三个正整数：被除数a和除数b（1≤a<b≤100），以及精度n（1≤n≤1000）。


输出描述:
对应每组数据，输出a/b的结果，小数后面保留n位（不到n位的补零）。

输入例子:
1 2 5
2 3 3

输出例子:
0.50000
0.666
*/

/* 
#include <iostream>
using namespace std;
int main(){
	int a, b, n;
	while(cin>>a>>b>>n){
		printf("%.*f\n",n,(float)a/b);   //这里主要注意的是printf里面*可以表示小数点位数,利用这个可以达到控制输出位数的效果 

	}
	return 0;
}
*/

#include <cstdio>
int main(){
    int a,b,n;
	while(scanf("%d%d%d",&a,&b,&n)==3){
		printf("0.");
		for(int i=0;i<n;i++){
			printf("%d",a*10/b);              //这题考虑输出的高精度，利用技巧控制输出。 
			a=a*10%b;
		}
		printf("\n");
	}
	return 0;
} 

