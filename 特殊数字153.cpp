//��������
//����153��һ���ǳ��������������������ÿλ���ֵ������ͣ�
//��153=1*1*1+5*5*5+3*3*3���������������������������λʮ��������
//�����ʽ
//��������С�����˳�����������������λʮ��������ÿ����ռһ�С�

/* 
#include <iostream>
using namespace std;
int main(){
	
	for(int i = 100; i<=999; i++){
		
		int f = i/100;
		int t = i%10;
		int s = ((i-t)/10)%10;
		
		if(i == f*f*f + s*s*s + t*t*t){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if((i * i * i + j * j * j + k * k * k) == (i * 100 + j * 10 + k))
                    cout << i << j << k << endl;
            }
        }
    }
    return 0;
} 
