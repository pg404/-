// 问题描述
// 给定圆的半径r，求圆的面积。
// 输入格式
// 输入包含一个整数r，表示圆的半径。
// 输出格式
// 输出一行，包含一个实数，四舍五入保留小数点后7位，表示圆的面积。

//sinπ/4=cosπ/4=√2/2
//so tanπ/4=1，and therefore π = 4 * arctan1 


//%f和%lf分别是float类型和double类型用于格式化输入输出时对应的格式符号。



#include <iostream>
#include <cmath> 
using namespace std;
int main(){
	double pi;
	pi = 4 * atan(1.0);
	int radius;
	cin>>radius;
	printf("%.7lf" , pi * radius * radius);
	return 0; 
}
