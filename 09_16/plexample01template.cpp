// �v���O���~���O����_ ���K�ۑ�1

#include <iostream>
using namespace std;

// �葱���̗�
void calculate_gcd(int a, int b, int& result) {
	while (b != 0) {
		int new_a = b;
		b = a % b;
		a = new_a;
	}
	result = a; 
}

// ���w�I�֐��̗�
int gcd(int a, int b) {
	while (b != 0) {
		int new_a = b;
		b = a % b;
		a = new_a;
	}
	return a; 
}

// �葱���I�֐��̗�
int divide(int a, int b, int& rem) {
	rem = a % b;
	return a / b;
}

// �q��̗�
bool is_gcd(int a, int b, int result) {
	while (b != 0) {
		int new_a = b;
		b = a % b;
		a = new_a;
	}
	return (result == a); 
}

int main() {
	int a = 8, b = 12;
	int result;
	cout << "a = " << a << ", b = " << b << endl;

	cout << "caluculate_gcd(a,b,result)" << endl;
	calculate_gcd(a,b,result);
	cout << "result: " << result << endl;

	cout << "devide(a,b,result)" << endl;
	cout << divide(a,b,result) << endl;
	cout << "result: " << result << endl;

	cout << "is_gcd(a,b,result)" << endl;
	cout << is_gcd(a,b,result) << endl;
	cout << "result: " << result << endl;
	//
	// �����Ɋe�֐����Ăяo���R�[�h�������B
	//

	return 0;
}
