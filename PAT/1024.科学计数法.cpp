/*
��ѧ������ (20)

��Ŀ����
��ѧ�������ǿ�ѧ��������ʾ�ܴ���С�����ֵ�һ�ַ���ķ�����������������ʽ[+-][1-9]"."[0-9]+E[+-][0-9]+�������ֵ���������

ֻ��1λ��С������������1λ�������ּ���ָ�����ֵ������ż�ʹ������Ҳ�ض���ȷ������



���Կ�ѧ�������ĸ�ʽ����ʵ��A�����д������ͨ���ֱ�ʾ�����A������֤������Чλ����������

��������:
ÿ���������1��������������һ���Կ�ѧ��������ʾ��ʵ��A�������ֵĴ洢���Ȳ�����9999�ֽڣ�����ָ���ľ���ֵ������9999��


�������:
��ÿ��������������һ���а���ͨ���ֱ�ʾ�����A������֤������Чλ��������������ĩβ��0��

��������:
+1.23400E-03

�������:
0.00123400
*/ 


/*
substr��C++���Ժ�������Ҫ�����Ǹ������ַ�����Ҫ���ָ��λ�ÿ�ʼ��������ָ���ĳ��ȡ�
basic_string substr(size_type _Off =0,size_type _Count = npos) const;
����
_Off
��������ַ�������ʼλ�á��ַ����е�һ���ַ�������Ϊ 0,Ĭ��ֵΪ0.
_Count
���Ƶ��ַ���Ŀ
����ֵ
һ�����ַ���������ָ����λ�ÿ�ʼ

���û��ָ������_Count��_Count+_Off������Դ�ַ����ĳ��ȣ������ַ�����������Դ�ַ����Ľ�β��*/


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
	//��before�ַ����洢��E��ǰ����ַ�����after�洢��E����������֣��õ���stoi���� 
	string before = s.substr(1, i-1);
	int after = stoi(s.substr(i+1));
	
	if(s[0] == '-'){//�ж������� 
		cout<<"-";
	}
	if(after <0){ //�ж���xx.xx/xxx����0.xxx ,    �����0.xxx��ֱ�������0.��Ȼ���������0���ĸ������ٰ�before�ַ���������������� 
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
		if(j == before.length()){//�ж���xxxxx����xxxx.xxxx�� 
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
