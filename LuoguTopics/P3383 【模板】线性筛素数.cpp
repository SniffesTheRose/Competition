#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int n,m;// n��Χ m���� 
bool vis[10000005];
void set(){
	vis[1] = true; //ע�� 1 �������������޷�ɸȥ 
	int j = sqrt(n + 0.5);
	for (int i = 2;i <= j;i++)
		if (!vis[i])
			for (int j = i * i;j <= n;j += i)
				vis[j] = true;
}
int main(){
	freopen("in.txt","r",stdin);
	cin >> n >> m;
	set();
	int a;
	for (int i = 1;i <= m;i++) {
		scanf("%d",&a);
		if(vis[a])
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
