// ��������
// ����Բ�İ뾶r����Բ�������
// �����ʽ
// �������һ������r����ʾԲ�İ뾶��
// �����ʽ
// ���һ�У�����һ��ʵ�����������뱣��С�����7λ����ʾԲ�������

//sin��/4=cos��/4=��2/2
//so tan��/4=1��and therefore �� = 4 * arctan1 


//%f��%lf�ֱ���float���ͺ�double�������ڸ�ʽ���������ʱ��Ӧ�ĸ�ʽ���š�



#include <iostream>
#include <cmath> 
using namespace std;
int main(){
	double pi;
	pi = 4 * atan(1.0);
	int radius;
	cin>>radius;
	printf("%.7lf" , pi * radius * radius);
	return 0; 
}
