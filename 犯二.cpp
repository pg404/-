/*/////////////////////////

L1-017. �����ж��
һ�������������ĳ̶ȡ�����Ϊ�������а���2�ĸ�������λ���ı�ֵ�����������Ǹ�������̶�����0.5��;������Ǹ�ż������������1����
�������֡�-13142223336���Ǹ�11λ����������3��2�������Ǹ�����Ҳ��ż���������ķ����̶ȼ���Ϊ��3/11*1.5*2*100%��ԼΪ81.82%��������������һ���������������ж����

�����ʽ��

�����һ�и���һ��������50λ������N��

�����ʽ��

��һ�������N�����ĳ̶ȣ�����С�������λ��

����������
-13142223336
���������
81.82%

*////////////////////////// 



#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string s;
	bool Ou;
	bool Fu;
	
	double Faner;
	cout<<"����һ������"<<endl;
	
	while(getline(cin, s)){
		
		int count = 0;
		
		int len = s.length();
		if(len % 2 == 0){
			Ou = true;
		}else{
			Ou = false;
		}
		if(s[0] == '-'){
			Fu = true;
		}else{
			Fu = false;
		}
		
		for(int i = 1; i<len; i++){
			if(s[i] == '2'){
				count++;
			}
		}
		
		if(!Fu){
			if(!Ou){
				Faner = (double)count/len*100;
				printf("�����̶�Ϊ��%.2f%%",Faner);
			}else{
				Faner = (double)count/len*2*100;
				printf("�����̶�Ϊ��%.2f%%",Faner);
			}
		}else{
				if(!Ou){
				Faner = (double)count/(len-1)*1.5*100;
				printf("�����̶�Ϊ��%.2f%%",Faner);
			}else{
				Faner = (double)count/(len -1)*2*1.5*100;
				printf("�����̶�Ϊ��%.2f%%",Faner);
			}
		}
		
		cout<<endl<<"����һ������"<<endl;
	}
	
	return 0;
} 

/*
//�Ż��� 

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    string s;
    cin >> s;
    int flag = (s[0] == '-' ? 1 : 0);
    int len = s.length();
    int bit = len - flag;
    int cnt = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] == '2')
            cnt++;
    }
    double ans = (double)cnt / bit * 100;
    if(flag == 1)
        ans = ans * 1.5;
    if((s[len-1] - '0') % 2 == 0)
        ans = ans * 2;
    printf("%.2f%%", ans);
    return 0;
}

*/
