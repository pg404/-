/*
1009. ˵���� (20)
����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�
�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�
����������
Hello World Here I Come
���������
Come I Here World Hello
*/ 

#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> s;
	string a;
    while(cin >> a) s.push(a);
    //s.push(a);
    
    //�����������һ���ַ���ǰû�пո� 
	cout << s.top();
    s.pop();
    while(!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }
    return 0;
}

/*֪ʶ�㸴ϰ 
c++ stlջstack��ͷ�ļ�Ϊ: 

#include<stack>

stack<int> S;//����һ������

S.empty();//ջ�շ���true ����false

int x=S.size();//����ջ��Ԫ�ظ�����x

S.pop();//�Ƴ�ջ��Ԫ��

S.push(x);��x����ջ��

x=S.top();����ջ��Ԫ��
*/ 
