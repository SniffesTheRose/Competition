#include<iostream>
#include<cstdio>
using namespace std;
/*
�Ƶ���������¶�Ϊa
���һ���¶�Ϊa,��Ҫ����t1=a 
�ڶ��������к͵�����¶�Ϊa/2,��Ҫ����t2=a/2 
�����������к͵�����¶�Ϊt3=(a/4+a)/2=5a/8,��Ҫ����t3=3a/8 
���ı������к͵�����¶�Ϊt4=((a/8+5a/8)/2+a)/2=11a/16,��Ҫ����t4=5/16 
��t3/t2=3/4=1-1/4,  t4/t3=5/6=1-1/6
�����Ƶ���t(n+1)/t(n)=1-1/2n
t(n + 1) = t(n) - 1 / 2n * t(n);
*/
double ans = 0,now;
int n;
int main(){
	freopen("in.txt","r",stdin);
    cin >> n;
    now = 420000.00/n;
    for (int i = 1;i <= n;i++) {
        ans += now;//���� t(n + 1) = t(n) - 1 / 2n * t(n)
        now *= 1 - 0.5 / i;
    }    
    printf("%.2lf\n", ans);
	return 0;
}
