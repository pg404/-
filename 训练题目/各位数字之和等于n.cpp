//��������һ��������n�� �����������������λʮ�������������λ����֮�͵���n ��
//�����ʽ
//��������һ�У�����һ��������n��
//�����ʽ
//��������С�����˳���������������������ÿ������ռһ�С�

/* 

#include <iostream>
using namespace std;
int main(){
	
	cout<<"����һ��������n:"<<endl;
	int n;
	cin>>n;
	
	for(int i=1; i<=9 ; i++){
		for(int j=0; j<=9 ; j++){
			for(int k=0; k<=9 ; k++){
				for(int l=0; l<=9 ; l++){
					for(int m=0; m<=9 ; m++){
						if(n == i+j+k+l+m){
							cout<<i<<j<<k<<l<<m<<endl;
						}
					}
				}
			}
		}
	}
	
	return 0;
} 

*/ 


//�����ϻ����ϼ���һ������
//������������Ҫ�Գƣ� ��12321��23132����

#include <iostream>
using namespace std;
int main() {
	cout<<"����һ��������n:"<<endl;
    int n;
    cin >> n;
    for (int i1 = 1; i1 <= 9; i1++)
        for (int i2 = 0; i2 <= 9; i2++)
            for (int i3 = 0; i3 <= 9; i3++) {
                if ((i1 + i2 + i3 + i2 + i1) == n)
                    cout << i1 << i2 << i3 << i2 << i1 << endl;
            }
    return 0;
}

 
