#include<cstdio>  
#include<iostream>  
#include<algorithm> 
using namespace std;
/*
	�����ݴӴ�С����
	������ļ�����С�Ĵ���Ҫ�����Ҫ��۸�
		������۸���Ʒ������Ϊһ��
	������ļ�����С��С�ڻ�������Ҫ��۸� 
		����һ��������������Ʒ
		������ĺ���С��һ���Ϊһ�� 
*/
int n,biggest,end;
struct in{
    int in;  
    int id;  
}all[1000001];
bool cmp(const in a,const in b)  
{  
    if (a.in>b.in) return true;  
    else return false;  
}    
int main(){
    cin>>biggest>>n;
    for(int a = 0;a < n;a++){
        cin>>all[a].in;
        all[a].id = a;
    }
    sort(all,all+n,cmp);
    int last = n-1;
    for(int a = 0;a<=last;a++){
        if(all[a].in+all[last].in>biggest){
            end++;
        }else{
            end++;
            last--;
        }
    }
    cout<<end;
}
