// ��������
// ��1+2+3+...+n��ֵ��
// �����ʽ
// �������һ������n��
// �����ʽ
// ���һ�У�����һ����������ʾ1+2+3+...+n��ֵ��

//long long �ļ������ long ��
//long �ļ������ int ��
//int �ļ������ short ��
//short �ļ������ char ��
//������ _Bool ��Զ����ͼ���
//����ߵ��������͵Ŀ�ȴ��ڵ��ڼ���ϵ͵��������͡� 

//�������long long Ҳ���Խ���printf,scanf��䣬
//����Ӧ��ռλ��ȴ�Ǻ�ƽ̨������������صģ�
//��Linux�У�gcc��ͳһ����%lld����windows�У�MinGW��gcc��VC6����Ҫ��%I64d��
//��VS2008ȴ����%lld�� 

//�����ʹ��C��д����
//scanf("%I64d",&a);
//printf("%I64d",a); 

//Ҳ����ʹ��
//scanf("%lld",&a);
//printf("%lld",a);

//���ʹ�õ���Dev-C++��g++����������ʹ�õ���"%I64d"����"%lld"�� 
 

#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long result;
    result = (1 + n) * n / 2;
    printf("%I64d",result);
    return 0;
}
