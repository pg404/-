//ʮ������תʮ����
//�����ʽ
//�����������һ��ʮ����������a����ʾҪת������
//�����ʽ
//����������������ʮ���Ʊ�ʾ 

/*

#include <iostream>
using namespace std;
int main(){
	
	String a;
	cin>>a;
	
	while(getchar(a)){
		
	}
	
	return 0;
} 

*/


//���ն�����תʮ���Ƶ�˼�룬��λ��16�Ĳ�ͬ��������Ӽ��ɣ�
//����Ĵ�������x*16^3 + y*16^2 + z*16^1 + m*16^0ת������m + 16*(z + 16*(y + 16*(x)))  ������ѭ������ 

#include <iostream>
#include <string>

using namespace std;

int main() {
	
    string s;
    cout<<"����һ��ʮ����������"<<endl;
    
    while (cin >> s) {             //�����λ��ʼ���� 
        int len = s.length();
        long long sum = 0;
        
        for (int i = 0; i < len; i++) {
        	
            if (s[i] >= 'A' && s[i] <= 'F') {
                sum = sum * 16 + s[i] - 'A' + 10;  
            }
            else  if (s[i] >= 'a' && s[i] <= 'f') {
                sum = sum * 16 + s[i] - 'a' + 10;
            }else {
                sum = sum * 16 + s[i] - '0';
            }
        }
        cout <<"������ʮ����Ϊ��"<< sum<<endl;
        
        //��ת�˽���
        
        int toeight = sum;
        
        int b[100];
		int j =0;
		 
        if(toeight == 0){
        	cout<<"�����ְ˽���Ϊ��"<<"0";
		}else{
			while(toeight != 0){
				b[j++] = toeight % 8;
				toeight = toeight / 8;
			}
		}
		
		cout<<"�����ְ˽���Ϊ��";
		for(int k = j-1; k>=0; k--){
			cout<<b[k];
		}
		cout<<endl;
		 
		//��ת������
		
	    int totwo = sum;
        
        int c[100];
		int m =0;
		 
        if(totwo == 0){
        	cout<<"�����ֶ�����Ϊ��"<<"0";
		}else{
			while(totwo != 0){
				c[m++] = totwo % 2;
				totwo = totwo / 2;
			}
		}
		
		cout<<"�����ֶ�����Ϊ��";
		for(int k = m-1; k>=0; k--){
			cout<<c[k];
		}
		cout<<endl;
		cout<<"���������һ��ʮ����������"<<endl;
		 
    }
    
    return 0;
}
