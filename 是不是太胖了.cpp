/*//////////////////////////
L1-031. �����ǲ���̫����
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B

��˵һ���˵ı�׼����Ӧ��������ߣ���λ�����ף���ȥ100���ٳ���0.9���õ��Ĺ���������ʵ�������׼���������10%���ڶ���������ģ��� |��ʵ����-��׼����| < ��׼����x10%������֪1�н�=0.5����ָ���һȺ�˵���ߺ�ʵ�����أ�������������Ƿ�̫�ֻ�̫���ˡ�

�����ʽ��

�����һ�и���һ��������N��<= 20�������N�У�ÿ�и��������������ֱ���һ���˵����H��120 < H < 200����λ�����ף�����ʵ����W��50 < W <= 300����λ���н������Կո�ָ���

�����ʽ��

Ϊÿ�������һ�н��ۣ������������ģ������You are wan mei!�������̫���ˣ������You are tai pang le!�������������You are tai shou le!����

����������
3
169 136
150 81
178 155
���������
You are wan mei!
You are tai shou le!
You are tai pang le!

///////////////////////////*/ 

 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct node {
	float h;
	float w;
};

float NorWeight(float h, float w){
	return (h-100)*0.9*2;
}

int main() {
	
	int n;
	cin>>n;
	vector<node> BMI;
	
	for(int i = 1; i<= n; i++){
		
		node temp;
		cin>>temp.h>>temp.w;
		BMI.push_back(temp);
	}
	
	for (int i = 0; i<n ; i++){
		
		float stan = NorWeight(BMI[i].h , BMI[i].w);
		cout<<"ʵ�������ǣ�"<<BMI[i].w;
		cout<<"��׼�����ǣ�"<<stan<<endl;
		
		if(abs( BMI[i].w - stan) < 0.1 * stan){
			cout<<"You are wan mei!"<<endl;
			
		}else if(BMI[i].w >  stan * 1.1){
			cout<<"You are tai pang le!"<<endl;
			
		}else{
			cout<<"You are tai shou le!"<<endl;
		}
		
	}
	
	return 0; 
	
}



