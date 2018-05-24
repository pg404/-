/*
1019. 数字黑洞 (20)
题目描述
给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，然后用第1个数字减第2个数字，将得到
 一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。
 
 例如，我们从6767开始，将得到
 
 7766 - 6677 = 1089
 9810 - 0189 = 9621
 9621 - 1269 = 8352
 8532 - 2358 = 6174
 7641 - 1467 = 6174
 ... ...
 
 现给定任意4位正整数，请编写程序演示到达黑洞的过程。

输入描述:
输入给出一个(0, 10000)区间内的正整数N。


输出描述:
如果N的4位数字全相等，则在一行内输出“N - N = 0000”；否则将计算的每一步在一行内输出，直到6174作为差出现，输出格式见样例,每行中间没有空行。注意每个数字按4位数格
 式输出。

输入例子:
6767

输出例子:
7766 - 6677 = 1089
 9810 - 0189 = 9621
 9621 - 1269 = 8352
 8532 - 2358 = 6174
*/ 


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
  
//这个函数判断两个数相减的差值 
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
     //输入不满四位就补充数字零 
     while(str.size()<4)
         str+="0";
     string max=str,min=str;
     sort(min.begin(),min.end());//sort函数直接将所给数组范围内的数字从小到大排序了 
     sort(max.begin(),max.end());
     reverse(max.begin(),max.end());//从小到大的逆置就是从大到小，得出最大数字 
     
     if(max==min)
         cout<<max<<" - "<<max<<" = "<<"0000";//假如输入相同的四个数字则输出 
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
