/*
科学计数法 (20)

题目描述
科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，其满足正则表达式[+-][1-9]"."[0-9]+E[+-][0-9]+，即数字的整数部分

只有1位，小数部分至少有1位，该数字及其指数部分的正负号即使对正数也必定明确给出。



现以科学计数法的格式给出实数A，请编写程序按普通数字表示法输出A，并保证所有有效位都被保留。

输入描述:
每个输入包含1个测试用例，即一个以科学计数法表示的实数A。该数字的存储长度不超过9999字节，且其指数的绝对值不超过9999。


输出描述:
对每个测试用例，在一行中按普通数字表示法输出A，并保证所有有效位都被保留，包括末尾的0。

输入例子:
+1.23400E-03

输出例子:
0.00123400
*/ 


/*
substr是C++语言函数，主要功能是复制子字符串，要求从指定位置开始，并具有指定的长度。
basic_string substr(size_type _Off =0,size_type _Count = npos) const;
参数
_Off
所需的子字符串的起始位置。字符串中第一个字符的索引为 0,默认值为0.
_Count
复制的字符数目
返回值
一个子字符串，从其指定的位置开始

如果没有指定长度_Count或_Count+_Off超出了源字符串的长度，则子字符串将延续到源字符串的结尾。*/


#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i = 0;
	while(s[i] != 'E'){
		i++;
	}
	//用before字符串存储‘E’前面的字符，用after存储‘E’后面的数字，用到了stoi函数 
	string before = s.substr(1, i-1);
	int after = stoi(s.substr(i+1));
	
	if(s[0] == '-'){//判断正负数 
		cout<<"-";
	}
	if(after <0){ //判断是xx.xx/xxx还是0.xxx ,    如果是0.xxx则直接输出”0.“然后在输出”0“的个数，再把before字符串的数字输出即可 
		cout<<"0.";
		for(int j =0; j< abs(after)-1; j++ ){
			cout<<"0";
		}
		for(int j = 0; j < before.length(); j++){
			if(before[j] != '.'){
				cout<<before[j];
			}
		}
	}else{
		cout<<before[0];
		int j, count;
		for(j = 2, count = 0; j <before.length()&&count < after; j++, count++){
			cout<<before[j];
		}
		if(j == before.length()){//判断是xxxxx还是xxxx.xxxx， 
			for(int k= 0; k < after - count;k++){
				cout<<"0";
			}
		}else{
			cout<<".";
			for(int k =j;k <before.length();k++){
				cout<<before[k];
			}
		}
	}
	
	return 0;
} 
