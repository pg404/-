/*
1033. �ɼ��̴���(20)
�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡����ڸ���Ӧ�������һ�����֡��Լ���������Щ��������Ľ�����ֻ���������
�����ʽ��
������2���зֱ������������Щ�����Լ�Ӧ����������֡����ж�ӦӢ����ĸ�Ļ����Դ�д������ÿ�������ǲ�����105���ַ��Ĵ������õ��ַ�������ĸ[a-z, A-Z]������0-9���Լ��»��ߡ�_��������ո񣩡���,������.������-������+���������ϵ���������Ŀ��֤��2����������ִ��ǿա�
ע�⣺����ϵ��������ˣ���ô��д��Ӣ����ĸ�޷��������
�����ʽ��
��һ��������ܹ�������Ľ�����֡����û��һ���ַ��ܱ��������������С�
����������
7+IE.
7_This_is_a_test.
���������
_hs_s_a_tst
*/


#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string bad, should;
  getline(cin, bad);  //Ϊ�˷�ֹ��һ���ǿյģ�������cin >> ,��getline(cin, ...)
  getline(cin, should);
  for (int i = 0, length = should.length(); i < length; i++) {
    if (bad.find(toupper(should[i])) != string::npos) continue;
    if (isupper(should[i]) && bad.find('+') != string::npos) continue;
    cout << should[i];
  }
  return 0;
}
 
 

