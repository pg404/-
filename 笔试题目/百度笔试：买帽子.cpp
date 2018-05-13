/*
买帽子：
度度熊想去商场买一顶帽子，商场里有N顶帽子，有些帽子的价格可能相同。度度熊想买一顶价格第三便宜的帽子，问第三便宜的帽子价格是多少？ 
输入描述:
首先输入一个正整数N（N <= 50），接下来输入N个数表示每顶帽子的价格（价格均是正整数，且小于等于1000）


输出描述:
如果存在第三便宜的帽子，请输出这个价格是多少，否则输出-1

输入例子:
10
10 10 10 10 20 20 30 30 40 40
输出例子:
30 

*/

#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n ; i++){
		for( int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
//	for(int i = 0; i < n; i++){
//		cout<<a[i]<<" ";
//	} 
	int count = 1;
	for(int i = 0; i < n ; i++){
		for(int j = i+1;j < n&&i < n; j++){
			if(a[j] != a[i]){
				count++;
				if(count == 3){
					cout<<a[j];
				}
				i = j;
			}
		}
	}
	if(count < 3){
		cout<<"-1";
	}
	return 0;
} 
