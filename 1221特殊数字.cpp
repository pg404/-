//��������
//����1221��һ���ǳ����������������߶��ʹ��ұ߶���һ���ģ������������������λʮ��������
//�����ʽ
//��������С�����˳�����������������λʮ��������


/* 
#include <iostream>
using namespace std;
int main(){
	
	for(int i=1; i<=9; i++){
		for(int j=0; j<=9; j++){
			for(int k=0; k<=9; k++){
				for(int l=0;l<=9; l++){
					if(i==l&&j==k){
						cout<<i<<j<<k<<l<<endl;
					}
				}
			}
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
            cout << i << j << j << i << endl;
        }
    }
    return 0;
}
