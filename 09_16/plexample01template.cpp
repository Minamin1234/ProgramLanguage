// プログラミング言語論 演習課題1

#include <iostream>
using namespace std;

// 手続きの例
void calculate_gcd(int a, int b, int& result) {
	while (b != 0) {
		int new_a = b;
		b = a % b;
		a = new_a;
	}
	result = a; 
}

// 数学的関数の例
int gcd(int a, int b) {
	while (b != 0) {
		int new_a = b;
		b = a % b;
		a = new_a;
	}
	return a; 
}

// 手続き的関数の例
int divide(int a, int b, int& rem) {
	rem = a % b;
	return a / b;
}

// 述語の例
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
	// ここに各関数を呼び出すコードを書く。
	//

	return 0;
}
