#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
int v,m,n;//v������   m�������  
int f[405][405]; //f[���][����]
struct thing{
	int v;//��� 
	int m;//���� 
	int k;//��·�� 
}t[60];
int main(){
	freopen("in.txt","r",stdin);
	cin >> v >> m;
	cin >> n;
	for(int i = 1;i <= n;i++)
		cin >> t[i].v >> t[i].m >> t[i].k;
	for(int i = 1;i <= n;i++){ // ��i����Ʒ 
		for(int a = v;a >= t[i].v;a--){ // ��� 
			for(int b = m;b >= t[i].m;b--){ // ���� 
				f[a][b] = max(f[a][b],f[a - t[i].v][b - t[i].m] + t[i].k);
			}
		}
	}
	cout << f[v][m];
	return 0;
}

