/*//////

L1-023. ���GPLT
����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ������뽫�ַ����µ���˳�򣬰���GPLTGPLT....��������˳������������������ַ�����Ȼ�������ַ��������ִ�Сд���ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬�����µ��ַ��԰�GPLT��˳���ӡ��ֱ�������ַ����������
�����ʽ��
������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����
�����ʽ��
��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�
����������
pcTclnGloRgLrtLhgljkLhGFauPewSKgt
���������
GPLTGPLTGLTGLGLL
*///////

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	
	string s;
	cin>>s;
	int len = s.length();
	int c[4] = {0};
	
	for(int a=0; a<len; a++){
		if(toupper(s[a]) == 'G'){
			c[0]++;
		}else if(toupper(s[a]) == 'P'){
			c[1]++;
		}else if(toupper(s[a]) == 'L'){
			c[2]++;
		}else if(toupper(s[a]) == 'T'){
			c[3]++;
		}
	}
	while(c[0] != 0 || c[1] != 0 || c[2] != 0 || c[3] != 0) {
		for(int i = 0; i < 4; i++) {
			if(c[i] != 0) {
				c[i]--;
				if(i == 0)
					cout << "G";
				else if(i == 1)
					cout << "P";
				else if(i == 2)
					cout << "L";
				else
					cout << "T";
			}
		}
	}
	
	return 0;
}
