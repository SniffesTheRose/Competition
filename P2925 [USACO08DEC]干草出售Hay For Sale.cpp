#include<iostream>
using namespace std;
int c,h;//c���� h����� 
int f[50005];
int v[50005];
int main(){
    cin >> c >> h;
    for(int i = 1;i <= h;i++)
        cin >> v[i];
    for(int i = 1;i <= h;i++){
        for(int a = c;a >= v[i];a--){
        	if(f[a] == a)
        		continue;  //��ʱf[a]�Ѿ�ȡ�����ֵ �Ͳ����ٶ�f[a]���и��� 
            if(f[a - v[i]] + v[i] > f[a])
                f[a] = f[a - v[i]] + v[i];
        }
        if(f[c] == c){//�ж��Ƿ��Ѿ��ܹ�װ��c����ĸɲ�
            cout << c;//�ܹ�װ��
            return 0;//�˳�
        }
    }
    cout << f[c];
    return 0;
}
