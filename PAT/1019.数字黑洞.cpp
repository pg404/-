/*
1019. ���ֺڶ� (20)
��Ŀ����
������һ����λ���ֲ���ȫ��ͬ��4λ����������������Ȱ�4�����ְ��ǵ��������ٰ��ǵݼ�����Ȼ���õ�1�����ּ���2�����֣����õ�
 һ���µ����֡�һֱ�ظ������������Ǻܿ��ͣ���С����ֺڶ���֮�Ƶ�6174��������������Ҳ��Kaprekar������
 
 ���磬���Ǵ�6767��ʼ�����õ�
 
 7766 - 6677 = 1089
 9810 - 0189 = 9621
 9621 - 1269 = 8352
 8532 - 2358 = 6174
 7641 - 1467 = 6174
 ... ...
 
 �ָ�������4λ�����������д������ʾ����ڶ��Ĺ��̡�

��������:
�������һ��(0, 10000)�����ڵ�������N��


�������:
���N��4λ����ȫ��ȣ�����һ���������N - N = 0000�������򽫼����ÿһ����һ���������ֱ��6174��Ϊ����֣������ʽ������,ÿ���м�û�п��С�ע��ÿ�����ְ�4λ����
 ʽ�����

��������:
6767

�������:
7766 - 6677 = 1089
 9810 - 0189 = 9621
 9621 - 1269 = 8352
 8532 - 2358 = 6174
*/ 


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
  
//��������ж�����������Ĳ�ֵ 
string m_minus(string a,string b){
    int result;
    result=stoi(a)-stoi(b);
    string temp=to_string(result);
    if(temp.size()<4)
        temp="0"+temp;
    return temp;
}
  
 int main(){
     string str;
     cin>>str;
     //���벻����λ�Ͳ��������� 
     while(str.size()<4)
         str+="0";
     string max=str,min=str;
     sort(min.begin(),min.end());//sort����ֱ�ӽ��������鷶Χ�ڵ����ִ�С���������� 
     sort(max.begin(),max.end());
     reverse(max.begin(),max.end());//��С��������þ��ǴӴ�С���ó�������� 
     
     if(max==min)
         cout<<max<<" - "<<max<<" = "<<"0000";//����������ͬ���ĸ���������� 
     else {
         while(m_minus(max,min)!="6174"){ 
		            
             string temp=m_minus(max,min);
             cout<<max<<" - "<<min<<" = "<<temp<<endl;
             
             max=temp,min=temp;
             sort(min.begin(),min.end());
             sort(max.begin(),max.end());
             reverse(max.begin(),max.end());
         }
          cout<<max<<" - "<<min<<" = "<<m_minus(max,min)<<endl;
     }
}
