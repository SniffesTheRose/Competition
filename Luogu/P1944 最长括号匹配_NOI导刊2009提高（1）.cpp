#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

string data;

int F[1000005]; // F[i] ��ʾ������ i ��ͷ���ƥ��ĳ��� 

int main() {
	freopen("in.txt", "r", stdin);
	data.resize(1000000);
	scanf("%s", &data[0]);
	int id = 0;
	for (int i = data.length() - 1; i >= 0; i--) {
		if (data[i] == ')' || data[i] == ']')
			continue;
		if ((data[i + F[i + 1] + 1] == ')' && data[i] == '(') || (data[i + F[i + 1] + 1] == ']' && data[i] == '[')) {
			F[i] = F[i + 1] + 2;
			F[i] += F[i + F[i]];
			if (F[i] >= F[id])
				id = i;
		}
	}
	for (int i = 0; i < F[id]; i++)
		cout << data[id + i];
	return 0;
}
