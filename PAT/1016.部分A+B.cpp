/*
题目描述
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。
 
 现给定A、DA、B、DB，请编写程序计算PA + PB。

输入描述:
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。


输出描述:
在一行中输出PA + PB的值。

输入例子:
3862767 6 13530293 3

输出例子:
399
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string a, b;
    char da, db;
    int pa = 0;
    int pb = 0;
    int sum = 0;
    cin>>a>>da>>b>>db;
    for(int i = 0; i < a.size(); i++){
        if(da == a[i])
            pa++;
    }
    for(int j = 0; j < b.size(); j++){
        if(db == b[j])
            pb++;
    }
    for(int i = 0; i < pa; i++){
        sum = sum + (da - '0') * pow(10 , i);
    }
    for(int j = 0; j < pb; j++){
        sum = sum + (db - '0') * pow(10 , j);
    }
    
    cout<<sum;
    return 0;
}
