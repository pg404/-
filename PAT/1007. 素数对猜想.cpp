/*
1007. �����Բ��� (20)
�����Ƕ��� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż����
�������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������
�ָ�������������N (< 105)������㲻����N���������������Եĸ�����
�����ʽ��ÿ�������������1����������������������N��
�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����
����������
20
���������
4
*/

#include <iostream>
using namespace std;
bool isprime(int a){
	for(int i = 2; i * i <= a; i++){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n, count = 0;
	cin>>n;
	for(int i = 5;i < n; i++){
		if(isprime(i-2) && isprime(i)){
			count++;
		}
	}
	cout<<count;
	return 0;
} 
