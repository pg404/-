/*
L1-025. ������A+B
�����Ŀ��ܼ򵥣�����������������A��B�ĺͣ�����A��B��������[1,1000]����΢�е��鷳���ǣ����벢����֤��������������
�����ʽ��
������һ�и���A��B������Կո�ֿ���������A��B��һ��������Ҫ�������������ʱ������ǳ�����Χ�����֡���������С�����ʵ����������һ�����롣
ע�⣺���ǰ������г��ֵĵ�1���ո���Ϊ��A��B�ķָ�����Ŀ��֤���ٴ���һ���ո񣬲���B����һ�����ַ�����
�����ʽ��
��������ȷ���������������򰴸�ʽ��A + B = �͡���������ĳ�����벻��Ҫ��������Ӧλ�������?������Ȼ��ʱ��Ҳ�ǡ�?����
��������1��
123 456
�������1��
123 + 456 = 579
��������2��
22. 18
�������2��
? + 18 = ?
��������3��
-100 blabla bla...33
�������3��
? + ? = ?
*/
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
	
	int flag1 = 0;
	int flag2 = 0;
	string a;
	cin>>a;
	int len = s.length();
	if(s[0] >= '0' && s[0] >= '9'){
			for(int i = 0; i < len; i++){
		if()
	}
	}else {
		flag1 = 1;
	}

	
	return 0;
} */



#include <iostream>
#include <cctype>
#include <string>
#include<stdio.h>
using namespace std;
bool islegal(string s) {
    if(s.length() == 0)
        return false;
    for(int i = 0; i < s.length(); i++) {
        if(!isdigit(s[i])) {
            return false;
        }
    }
    int temp =  stoi(s); 
    if(temp < 1 || temp > 1000) {
        return false;
    }
    return true;
}

int main() {
    string a, b;
    string t;
    getline(cin, t);
    for(int i = 0; i < t.length(); i++) {
        if(t[i] == ' ') {
            a = t.substr(0, i); //����ַ���s�� �ӵ�0λ��ʼ�ĳ���Ϊi���ַ���//Ĭ��ʱ�ĳ���Ϊ�ӿ�ʼλ�õ�β
            b = t.substr(i + 1, t.size()- i - 1);
            break;
        }
    }
    if(!islegal(a)) {
        a = "?";
    }
    if(!islegal(b)) {
        b = "?";
    }
    cout << a << " + " << b << " = ";
    if(a != "?" && b != "?") {
        int atemp = stoi(a);
        int btemp = stoi(b);
        cout << atemp + btemp;
    } else {
        cout << "?";
    }
    return 0;
}
