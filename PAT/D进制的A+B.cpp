/*

D���Ƶ�A+B (20)

��Ŀ����
���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������

��������:
������һ�������θ���3������A��B��D��


�������:
���A+B��D��������

��������:
123 456 8

�������:
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
