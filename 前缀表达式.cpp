////算法训练 前缀表达式
//问题描述
//　　编写一个程序，以字符串方式输入一个前缀表达式，然后计算它的值。

//输入格式为：“运算符 对象1 对象2”，其中，运算符为“+”（加法）、“-”（减法）、
//“*”（乘法）或“/”（除法），运算对象为不超过10的整数，它们之间用一个空格隔开。

//要求：对于加、减、乘、除这四种运算，分别设计相应的函数来实现。

//　　输入格式：输入只有一行，即一个前缀表达式字符串。

//　　输出格式：输出相应的计算结果（如果是除法，直接采用c语言的“/”运算符，结果为整数）。

//　　输入输出样例
//样例输入
//+ 5 2
//样例输出
//7



//加强版本 
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void add(int a, int b){cout<<"相加结果为："<< a + b<<endl;}
void min(int a, int b){cout<<"相减结果为："<< a - b<<endl;}
void mutiple(int a,int b){cout<<"相乘结果为："<< a * b<<endl;}
void divide(int a, int b){
	if(b == 0){
		cout<<"invalid input"<<endl;
	}else{
		cout<<"相除结果为："<< a / b<<endl;
	}
}


int main(){
	
	string s;
	cout<<"输入格式为："<<endl;
	cout<<"“运算符 对象1 对象2 ”，其中，运算符为“+”“-”“*”“/”"<<endl;
	cout<<"它们之间以及结尾用一个空格。"<<endl; 
	
	int op1;
	int op2;
	
	while(getline(cin, s)){
		
		
		int a =0;
	    int b = 0;
		int len = s.length();
		
		if (s[1] == ' '){
			
			int i =2;
			while(s[i] != ' '){
				i = i+1;
			}
			
			for (int j = 2;j<i; j++ ){
				//cout<<"s["<<j<<"] = "<<s[j]<<endl;
				//cout<<"op1的幂运算为："<<pow(10,i-j-1 )<<endl; 
				a = a + (s[j]-'0') * (pow(10,i-j-1 ));
			}
			op1 = a;
			cout<<"op1="<<a<<endl;
			
			if(s[len -1] == ' '){
			
				int k = i+1;
				while(s[k] != ' '){
					k = k+ 1;
				}
			
				for(int m = i+1; m<k; m++){\
					//cout<<"s["<<m<<"] = "<<s[m]<<endl;
					//cout<<"op2的幂运算为:"<<pow(10,k-m-1 )<<endl;
					b = b + (s[m]-'0') * pow(10,k-m-1 );
				}
				op2 = b;
				cout<<"op2="<<b<<endl;
			}else{
				cout<<"请按照格式输入："<<endl;
			    return 0;
			}
		}else{
			cout<<"请按照格式输入："<<endl;
			return 0;
		}
		
		//a = s[2] - '0';
	   // b = s[4] - '0';
		
		switch(s[0]){
			case '+': add(op1,op2);break;
			case '-': min(op1,op2);break;
			case '*': mutiple(op1,op2);break;
			case '/': divide(op1,op2);break;
		}
		
	}
	
	return 0;
} 




/*
//符合题意版本 

#include <iostream>
#include <string>
using namespace std;
void add(int a, int b) {cout << a + b;}
void min(int a, int b) {cout << a - b;}
void mul(int a, int b) {cout << a * b;}
void div1(int a, int b) {cout << a / b;}

int main() {
    string s;
    int a, b;
    getline(cin, s);
    if (s[3] == ' ') {
        a = s[2] - '0';
        if (s[5] == '\0') {
            b = s[4] - '0';
        }
        else {
            b = 10;
        }
    }
    else {
        a = 10;
        if (s[6] == '\0') {
            b = s[5] - '0';
        }
        else {
            b = 10;
        }
    }
    switch(s[0]) {
        case '+':add(a, b);break;
        case '-':min(a, b);break;
        case '*':mul(a, b);break;
        case '/':div1(a, b);break;
    }
    return 0;
}

*/
