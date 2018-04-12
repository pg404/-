  //Fibonacci数列除以10007的余数是多少。
  
  
  #include <iostream>
  using namespace std;
  
  const int maxn=1000000;
  int f[maxn];
  
  int main()
  {
      int n;
     cin>>n;
     
     f[1]=f[2]=1;
     
     for(int i=3;i<=n;i++){
		 f[i]=(f[i-1]+f[i-2])%10007;
	}
     cout<<f[n];
 
 }
