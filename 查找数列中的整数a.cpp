//问题描述
//给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个。
//
//输入格式
//第一行包含一个整数n。
//
//第二行包含n个非负整数，为给定的数列，数列中的每个数都不大于10000。
//
//第三行包含一个整数a，为待查找的数。
//
//输出格式
//如果a在数列中出现了，输出它第一次出现的位置(位置从1开始编号)，否则输出-1。


#include <iostream>
using namespace std;
int main(){
	
	cout<<"输入数列包含整数的个数："<<endl;
	int n;
	cin>>n;
	
	cout<<"输入数列："<<endl;
	int f[n];
	for(int i = 0; i < n; i++){
		cin>>f[i];
	}
	
	cout<<"输入待查找的整数a："<<endl;
	int a;
	cin>>a;
	
	for(int j = 0; j<= n; j++){
		
		if(f[j] == a){
			cout<<j+1;
			break;
		}
		if(j == n){
			cout<<"-1"; 
		
		} 
		 
	}
	
	return 0;
} 
