/*

[�����]A+B��C (15)

��������[-2��31�η�, 2��31�η�]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C�� 
��������:
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���


�������:
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����
ʾ��1
����
4

1 2 3

2 3 4

2147483647 0 2147483646

0 -2147483648 -2147483647
���
Case #1: false

Case #2: true

Case #3: true

Case #4: false

*/ 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a, b, c;
    for(int i = 1; i <= n; i++){
        cin>>a>>b>>c;
        if(a + b > c){
            cout<<"Case #"<<i<<": true"<<endl;
        }else{
            cout<<"Case #"<<i<<": false"<<endl;
        }
    }
    return 0;
}
