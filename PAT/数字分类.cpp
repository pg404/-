
/*
[编程题]数字分类 (20)

给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：



A1 = 能被5整除的数字中所有偶数的和；

A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；

A3 = 被5除后余2的数字的个数；

A4 = 被5除后余3的数字的平均数，精确到小数点后1位；

A5 = 被5除后余4的数字中最大数字。 
输入描述:
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。


输出描述:
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。
示例1
输入
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出
30 11 2 9.7 9

*/

#include <iostream>
#include <iomanip>
//#include <stdio.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    float c4 = 0;
    int c4count = 0;
    int c5 = 0;
    int x;
    int i = 1;
    while(n--){
        cin>>x;
        switch(x % 5){
            case 0:if(x % 2 == 0) {c1 = c1 + x ; }
                break;
            case 1:c2 = c2 + i * x; i = -i;
                break;
            case 2:c3++;
                break;
            case 3:c4 = c4 + x;c4count++;
                break;
            case 4:if(x > c5) {c5 = x;}
                break;
        }
    }
    //float a4 = c4 / c4count;
    (c1 > 0)?(cout<<c1<<" "):(cout<<"N ");
    (c2 != 0)?(cout<<c2<<" "):(cout<<"N ");
    (c3 > 0)?(cout<<c3<<" "):(cout<<"N ");
    (c4 > 0)?(cout<<fixed<<setprecision(1)<<c4/c4count<<" "):(cout<<"N ");
	(c5 > 0)?(cout<<c5):(cout<<"N ");
    return 0;
}
