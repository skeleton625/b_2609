#include <iostream>
using namespace std;
// 유클리드 호제법을 이용
// A, B의 최소공배수 =  (A*B) / A. B의 최대 공약수

int main()
{
	int a, b, m, n, tmp;
	cin >> a >> b;
	m = a; n = b;
	while (m%n != 0) {
		tmp = n;
		n = m % n;
		m = tmp;
	}
	cout << n << endl;
	cout << (a*b) / n;
	return 0;
}