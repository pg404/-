/*
����Ħ˹��Լ�� (20)

��Ŀ����
����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm��������̽��

 ��������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04������Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣���

 ��4����ĸ'D'�����������ģ���2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9��

 �Լ���д��ĸA��N��ʾ�����������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4���ӡ��ָ��������ַ�����

 ���������Ħ˹����õ�Լ���ʱ�䡣

��������:
������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����


�������:
��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ���д����MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ����

�ģ�FRI��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

��������:
3485djDkxh4hhGE

2984akDfkkkkggEdsb

s&hgsfdk

d&Hyscvnm

�������:
THU 14:04

*/ 


// ��4����ĸ'D'������������            ����  ABCDEFG  �ֱ����  ����һ�����������գ� 


// ��2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9�� �Լ���д��ĸA��N��ʾ��
//              ��0��1��2��3��4��5��6��7��8��9��A��B��C��D��E��F��G��H��I��J��K��L��M��N�� ��ʾ��ʮ��Сʱ�Ƶ�0�㵽23�� 

// �������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4����
//�������ڵڼ���λ�þͱ�ʾ�ڼ����ӣ� 


/* 
#include<iostream>  
#include<string>  
using namespace std;  
int main(){  
    string s1;  
    string s2;  
    string s3;  
    string s4;  
    cin>>s1>>s2>>s3>>s4;  
    
    int mark=0;  
    for(int i=0;i<s1.size()&&i<s2.size();i++){  
            if(s1[i]==s2[i]&&(s1[i]>='A'&&s1[i]<='G')){  
                      switch(s1[i]){  
                         case 'A':  cout<<"MON ";break;  
                         case 'B':  cout<<"TUE ";break;                
                         case 'C':  cout<<"WED ";break;           
                         case 'D':  cout<<"THU ";break;         
                         case 'E':  cout<<"FRI ";break;           
                         case 'F':  cout<<"SAT ";break;           
                         case 'G':  cout<<"SUN ";break;              
                        }   
                        mark=i;  
                        break;        
            }            
    }  
    
      for(int j=mark+1;j<s1.size()&&j<s2.size();j++){  
              if(s1[j]==s2[j]&&(s1[j]>='A' &&s1[j]<='N' || s1[j]>='0'&&s1[j]<='9')){  
                 if(s1[j]>='A'&&s1[j]<='N'){  //��ͬ���ַ�����ĸ ��Ҫ����ĸת�������� 
                        int x=s1[j]-'A'+10;  
                        cout<<x/10<<x%10<<":";  //������Ϊ�˿��Ƹ�ʽ������08��13����Ҫ��ǰ���0Ҳ��ʾ���� 
                          }  
                 else{  //��ͬ���ַ������֣���ֱ�ӿ��Ƹ�ʽ������� 
                  int y=s1[j]-'0';  
                  cout<<y/10<<y%10<<":";  
                  }  
                break;     
             }  
  
              }   
                
      for(int k=0;k<s3.size()&&k<s4.size();k++){  
               if(s3[k]==s4[k]&&(s3[k]>='A'&&s3[k]<='Z'||s3[k]>='a'&&s3[k]<='z')){  //ֱ�����ĸ�λ�þ�����ĸ��Ϳ��� 
                 cout<<k/10<<k%10<<endl;  
                
                
              }   
              }  
  
    system("pause");  
    return 0;  
    }  
    
    
    
    
    */
	
#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>
using namespace std;
	
int main()
{
	char s[4][61];
	string day[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i=0,j=0;
	bool first=true;
	for(i=0;i<4;i++)
	{
	cin>>s[i];
	}
	
	for(i=0;s[0][i]&&s[1][i];i++)
	{
	if(first && s[0][i]>='A' &&s[0][i]<='G' && s[0][i]==s[1][i]){//���ﲻҪ��isupper()!
	cout<<day[s[0][i]-'A']<<" ";
	first=false;
	continue;
	}	
	
	if(!first && s[0][i]==s[1][i] && ( s[0][i]>='A' &&s[0][i]<='N' || isdigit(s[0][i])) )//���ﲻҪ��isupper()!
	{
	if(isupper(s[0][i]))
	cout<<s[0][i]-'A'+10<<":";
	if(isdigit(s[0][i]))
	cout<<"0"<<s[0][i]-'0'<<":";
	break;
	}
	}
	
	for(i=0;s[2][i] && s[3][i];i++)
	{
	if( isalpha(s[2][i])&& s[2][i]==s[3][i])
	{	
	//printf("%02d",i);Ҳ��
	cout<<i/10<<i%10<<endl;
	break;
	}	
	}
	
	return 0;
}
