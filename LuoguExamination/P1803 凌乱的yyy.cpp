#include<cstdio>  
#include<iostream>  
#include<algorithm> 
using namespace std;
int n,total;
/*
	̰�Ľ��
	>�Ȱ�����ʱ����������
	>ѡ���һ������
	>�������жϿ�ʼʱ���Ƿ�����һ����ѡ�����ͻ
	>���û����ѡ�������
	>������ѡ�����������
*/
struct node{
	int x;  
	int y;  
}all[1000001];  
bool cmp(const node a,const node b)  
{  
    if ((a.y<b.y) || ((a.y==b.y) && (a.x<b.x))) return true;  
    else return false;  
}  
int main(){
	cin>>n;
	for(int a = 0;a<n;a++){
		cin>>all[a].x>>all[a].y;
	}
	sort(all,all+n,cmp);  
	int end = -1;
	for(int a = 0;a<n;a++){
		if(all[a].x>=end){
			end = all[a].y;
			total++;
		}
	}
	cout<<total;
}
