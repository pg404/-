/*/////////////////////////////

L1-007. ������
����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ���������fu���֡�ʮ�����ֶ�Ӧ��ƴ�����£�
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
�����ʽ��
������һ���и���һ���������磺 1234 ��
��ʾ�������������������������
�����ʽ��
��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��
����������
-600
���������
fu liu ling ling

/////////////////////////////////*/

#include <iostream>
#include <string>
using namespace std;
int main(){
  string c[10] = {"ling" , "yi" , "er" , "san" , "si" , "wu" ,"liu" , "qi" , "ba" , "jiu"};
  string s;
  cin>>s;
  int len = s.length();
  int flag = (s[0] == '-')? 1 : 0 ;
  
  if(flag == 1){
  	cout<<"fu";
  }
  for(int i = flag; i<len ; i++){
  	if(i == 0){
  		cout<<c[s[i] - '0'];
  		continue;                    //����������ǰ�ڲ�ѭ������if��䲿�֣���������forѭ������Ȼ����������һ��  c[s[i] -'0'
	  } 
  	cout<<" "<<c[s[i] -'0'];
  }
  return 0;
}
