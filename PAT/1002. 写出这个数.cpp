/*
1002. д������� (20)
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/ 

#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len = s.length();
	int sum = 0;
	for(int i = 0; i < len; i++){
		sum = sum + (s[i]-'0');
	}
	cout<<sum<<endl;
	string c[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string str = to_string(sum);
	//int len2 = str.length();
	for(int i = 0; i < str.length();i++){
		if (i != 0) cout << " ";
		cout << c[str[i]-'0'];
	}
	return 0;
} 
