#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
stack<int> ans;
int n,j;
char ji[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K'};
/*
����Ĭ����0ȡ��
-3 / -2 = 1 ������ -1 
���ǽ���в�Ӧ���ָ���
-3 / -2 = 2  ������ 1
*/
int main(){
	freopen("in.txt","r",stdin);
	cin >> n >> j;
	cout << n << "=";
	while(n != 0){
		int x = n % j;
		n = n / j;
		if(x < 0){
			x -= j;
			n++;
		}
		ans.push(x);
	}
	while(!ans.empty()){
		cout << ji[ans.top()];
		ans.pop();
	}
	cout <<"(base" << j << ")";
	return 0;
}
