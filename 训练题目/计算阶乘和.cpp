/*////

L1-013. ����׳˺�
���ڸ�����������N����Ҫ����� S = 1! + 2! + 3! + ... + N!��
�����ʽ��
������һ���и���һ��������10��������N��
�����ʽ��
��һ�������S��ֵ��
����������
3
���������
9
////////*/

#include <iostream>
using namespace std;
int fun(int n){
	if(n == 1){
		return 1;
	}else{
		return n*fun(n-1);
	}
}
int main(){ 
	int n;
	cin>>n;
	int sum =0;
	for(int i = n;i>=1; i--){
		sum = sum + fun(i);
	} 
	cout<<sum;
	return 0;
}

/*another methed
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++) {//���ӷ�ѭ�� 
		int temp = 1;
		for(int j = 1; j <= i; j++) {//�ڲ�˷�ѭ�� 
			temp *= j;
		}
		ans += temp;
	}
	cout << ans;
	return 0;
}

*/
