#include <iostream>
using namespace std;
// ��Ŭ���� ȣ������ �̿�
// A, B�� �ּҰ���� =  (A*B) / A. B�� �ִ� �����

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