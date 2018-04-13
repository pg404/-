//十六进制转十进制
//输入格式
//　　输入包含一个十六进制整数a，表示要转换的数
//输出格式
//　　输出这个整数的十进制表示 

/*

#include <iostream>
using namespace std;
int main(){
	
	String a;
	cin>>a;
	
	while(getchar(a)){
		
	}
	
	return 0;
} 

*/


//按照二进制转十进制的思想，逐位乘16的不同次幂再相加即可，
//这里的处理将形如x*16^3 + y*16^2 + z*16^1 + m*16^0转换成了m + 16*(z + 16*(y + 16*(x)))  来满足循环条件 

#include <iostream>
#include <string>

using namespace std;

int main() {
	
    string s;
    cout<<"输入一个十六进制整数"<<endl;
    
    while (cin >> s) {             //从最高位开始读入 
        int len = s.length();
        long long sum = 0;
        
        for (int i = 0; i < len; i++) {
        	
            if (s[i] >= 'A' && s[i] <= 'F') {
                sum = sum * 16 + s[i] - 'A' + 10;  
            }
            else  if (s[i] >= 'a' && s[i] <= 'f') {
                sum = sum * 16 + s[i] - 'a' + 10;
            }else {
                sum = sum * 16 + s[i] - '0';
            }
        }
        cout <<"该数字十进制为："<< sum<<endl;
        
        //再转八进制
        
        int toeight = sum;
        
        int b[100];
		int j =0;
		 
        if(toeight == 0){
        	cout<<"该数字八进制为："<<"0";
		}else{
			while(toeight != 0){
				b[j++] = toeight % 8;
				toeight = toeight / 8;
			}
		}
		
		cout<<"该数字八进制为：";
		for(int k = j-1; k>=0; k--){
			cout<<b[k];
		}
		cout<<endl;
		 
		//再转二进制
		
	    int totwo = sum;
        
        int c[100];
		int m =0;
		 
        if(totwo == 0){
        	cout<<"该数字二进制为："<<"0";
		}else{
			while(totwo != 0){
				c[m++] = totwo % 2;
				totwo = totwo / 2;
			}
		}
		
		cout<<"该数字二进制为：";
		for(int k = m-1; k>=0; k--){
			cout<<c[k];
		}
		cout<<endl;
		cout<<"请继续输入一个十六进制数："<<endl;
		 
    }
    
    return 0;
}
