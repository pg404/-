/*
��Ŀ����
������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��
 
 �ָ���A��DA��B��DB�����д�������PA + PB��

��������:
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��


�������:
��һ�������PA + PB��ֵ��

��������:
3862767 6 13530293 3

�������:
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
