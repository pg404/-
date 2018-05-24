/*
福尔摩斯的约会 (20)

题目描述
大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。大侦探很

 快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是

 第4个字母'D'，代表星期四；第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、

 以及大写字母A到N表示）；后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，

 请帮助福尔摩斯解码得到约会的时间。

输入描述:
输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。


输出描述:
在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期

四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。

输入例子:
3485djDkxh4hhGE

2984akDfkkkkggEdsb

s&hgsfdk

d&Hyscvnm

输出例子:
THU 14:04

*/ 


// 第4个字母'D'，代表星期四            （即  ABCDEFG  分别代表  星期一二三四五六日） 


// 第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、 以及大写字母A到N表示）
//              （0、1、2、3、4、5、6、7、8、9、A、B、C、D、E、F、G、H、I、J、K、L、M、N） 表示二十四小时制的0点到23点 

// 后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟
//（出现在第几个位置就表示第几分钟） 


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
                 if(s1[j]>='A'&&s1[j]<='N'){  //相同的字符是字母 ，要把字母转换成数字 
                        int x=s1[j]-'A'+10;  
                        cout<<x/10<<x%10<<":";  //这里是为了控制格式，比如08：13：，要把前面的0也表示出来 
                          }  
                 else{  //相同的字符是数字，就直接控制格式输出即可 
                  int y=s1[j]-'0';  
                  cout<<y/10<<y%10<<":";  
                  }  
                break;     
             }  
  
              }   
                
      for(int k=0;k<s3.size()&&k<s4.size();k++){  
               if(s3[k]==s4[k]&&(s3[k]>='A'&&s3[k]<='Z'||s3[k]>='a'&&s3[k]<='z')){  //直接在哪个位置就输出哪个就可以 
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
	if(first && s[0][i]>='A' &&s[0][i]<='G' && s[0][i]==s[1][i]){//这里不要用isupper()!
	cout<<day[s[0][i]-'A']<<" ";
	first=false;
	continue;
	}	
	
	if(!first && s[0][i]==s[1][i] && ( s[0][i]>='A' &&s[0][i]<='N' || isdigit(s[0][i])) )//这里不要用isupper()!
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
	//printf("%02d",i);也可
	cout<<i/10<<i%10<<endl;
	break;
	}	
	}
	
	return 0;
}
