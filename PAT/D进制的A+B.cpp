/*

D进制的A+B (20)

题目描述
输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

输入描述:
输入在一行中依次给出3个整数A、B和D。


输出描述:
输出A+B的D进制数。

输入例子:
123 456 8

输出例子:
1103

*/ 

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int a, b, d;
	cin>>a>>b>>d;
	
	int sum = a + b;
	vector<int> c;
	while (sum / d > 0){
		int x = sum % d;
		c.push_back(x);
		sum = sum / d;
	}
	c.push_back(sum);
	for(int i = 0; i < c.size(); i++){
		int m = c.size();
		cout<<c[m-i-1];
	}
	return 0;
} 
