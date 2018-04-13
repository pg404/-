//　　输入一个正整数n， 编程求所有这样的五位十进制数，满足各位数字之和等于n 。
//输入格式
//　　输入一行，包含一个正整数n。
//输出格式
//　　按从小到大的顺序输出满足条件的整数，每个整数占一行。

/* 

#include <iostream>
using namespace std;
int main(){
	
	cout<<"输入一个正整数n:"<<endl;
	int n;
	cin>>n;
	
	for(int i=1; i<=9 ; i++){
		for(int j=0; j<=9 ; j++){
			for(int k=0; k<=9 ; k++){
				for(int l=0; l<=9 ; l++){
					for(int m=0; m<=9 ; m++){
						if(n == i+j+k+l+m){
							cout<<i<<j<<k<<l<<m<<endl;
						}
					}
				}
			}
		}
	}
	
	return 0;
} 

*/ 


//在以上基础上加上一个条件
//这样的数字需要对称： 即12321，23132这样

#include <iostream>
using namespace std;
int main() {
	cout<<"输入一个正整数n:"<<endl;
    int n;
    cin >> n;
    for (int i1 = 1; i1 <= 9; i1++)
        for (int i2 = 0; i2 <= 9; i2++)
            for (int i3 = 0; i3 <= 9; i3++) {
                if ((i1 + i2 + i3 + i2 + i1) == n)
                    cout << i1 << i2 << i3 << i2 << i1 << endl;
            }
    return 0;
}

 
