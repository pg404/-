/*
��ñ�ӣ�
�ȶ�����ȥ�̳���һ��ñ�ӣ��̳�����N��ñ�ӣ���Щñ�ӵļ۸������ͬ���ȶ�������һ���۸�������˵�ñ�ӣ��ʵ������˵�ñ�Ӽ۸��Ƕ��٣� 
��������:
��������һ��������N��N <= 50��������������N������ʾÿ��ñ�ӵļ۸񣨼۸��������������С�ڵ���1000��


�������:
������ڵ������˵�ñ�ӣ����������۸��Ƕ��٣��������-1

��������:
10
10 10 10 10 20 20 30 30 40 40
�������:
30 

*/

#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n ; i++){
		for( int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
//	for(int i = 0; i < n; i++){
//		cout<<a[i]<<" ";
//	} 
	int count = 1;
	for(int i = 0; i < n ; i++){
		for(int j = i+1;j < n&&i < n; j++){
			if(a[j] != a[i]){
				count++;
				if(count == 3){
					cout<<a[j];
				}
				i = j;
			}
		}
	}
	if(count < 3){
		cout<<"-1";
	}
	return 0;
} 
