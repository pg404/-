#include <iostream>
using namespace std;
int max(int a, int b){
    if(a >= b){
        return a;
    }else{
        return b;
    }
}
void func(int a, int b){
    int k = max(a , b);
    int max = 1;
    for(int i = 2; i < k; i++){
        if((a % i == 0) && (b % i == 0)){
            max = i;
        }
    }
    cout<<a/max<<" "<<b/max;
}
int main(){
    int n;
    cin>>n;
    if(n >= 1 && n<= 3){
        int p[n];//·Ö×Ó
        int q[n];//·ÖÄ¸
        for(int i = 0; i < n; i++){
            cin>>p[i];
        }
        for(int i = 0; i < n; i++){
            cin>>q[i];
        }
    int zisum = 0;
    int musum = 1;
    for(int i = 0; i < n; i++){
    	if(q[i] == 0){
    		break;
		}
        if(q[i] != 0){
            musum = musum * q[i];
        }
    }
    for(int i = 0; i < n; i++){
        zisum = zisum + musum / q[i] * p[i];
    }
    if(musum != 0){
        func(zisum, musum);
    }
    }
    return 0;
}
