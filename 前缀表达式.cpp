////�㷨ѵ�� ǰ׺���ʽ
//��������
//������дһ���������ַ�����ʽ����һ��ǰ׺���ʽ��Ȼ���������ֵ��

//�����ʽΪ��������� ����1 ����2�������У������Ϊ��+�����ӷ�������-������������
//��*�����˷�����/�������������������Ϊ������10������������֮����һ���ո������

//Ҫ�󣺶��ڼӡ������ˡ������������㣬�ֱ������Ӧ�ĺ�����ʵ�֡�

//���������ʽ������ֻ��һ�У���һ��ǰ׺���ʽ�ַ�����

//���������ʽ�������Ӧ�ļ�����������ǳ�����ֱ�Ӳ���c���Եġ�/������������Ϊ��������

//���������������
//��������
//+ 5 2
//�������
//7



//��ǿ�汾 
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void add(int a, int b){cout<<"��ӽ��Ϊ��"<< a + b<<endl;}
void min(int a, int b){cout<<"������Ϊ��"<< a - b<<endl;}
void mutiple(int a,int b){cout<<"��˽��Ϊ��"<< a * b<<endl;}
void divide(int a, int b){
	if(b == 0){
		cout<<"invalid input"<<endl;
	}else{
		cout<<"������Ϊ��"<< a / b<<endl;
	}
}


int main(){
	
	string s;
	cout<<"�����ʽΪ��"<<endl;
	cout<<"������� ����1 ����2 �������У������Ϊ��+����-����*����/��"<<endl;
	cout<<"����֮���Լ���β��һ���ո�"<<endl; 
	
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
				//cout<<"op1��������Ϊ��"<<pow(10,i-j-1 )<<endl; 
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
					//cout<<"op2��������Ϊ:"<<pow(10,k-m-1 )<<endl;
					b = b + (s[m]-'0') * pow(10,k-m-1 );
				}
				op2 = b;
				cout<<"op2="<<b<<endl;
			}else{
				cout<<"�밴�ո�ʽ���룺"<<endl;
			    return 0;
			}
		}else{
			cout<<"�밴�ո�ʽ���룺"<<endl;
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
//��������汾 

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
