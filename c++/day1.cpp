#include <iostream>

using namespace std;

//int main()
//{
//	cout << "Hello World" << endl;
//	return 0;
//}
//case 1:
//namespace first
//{
//	int value = 1;
//}
//namespace second
//{
//	int value = 2;
//}
//case 2:
	//namespace BestComlmpl
	//{
	//	void SimpleFunc(void)
	//	{
	//		cout << "Best이 정의한 함수" << endl;
	//	}
	//}
	//namespace ProgComlmpl
	//{
	//	void SimpleFunc(void)
	//	{
	//		cout << "Prog이 정의한 함수" << endl;
	//	}
	//}
//namespace Parent
//{
//	int num = 2;
//	namespace SubOne
//	{
//		int num = 3;
//	}
//	namespace SubTwo
//	{
//		int num = 4;
//	}
//}
void swapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void swapByRef(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{

	//cout<<swapByValue;
	cout << swapByRef;
	// 
	//cout << Parent::SubOne::num << endl;
	//cout << Parent::SubTwo::num;
	//BestComlmpl::SimpleFunc();
	//ProgComlmpl::SimpleFunc();
	return 0;
	//cout << first::value;
	//cout << second::value<<endl;
	//cout << first::value - second::value << endl;
	/*cout << "첫 번째 C++ 프로그램입니다\n";
	
	int num;
	cout << "정수를 입력하세요";
	cin >> num;
	cout << "입력된 정수는" << num << "입니다\n";
	return 0;*/

	

	//array obj = { '소원', '7번방', '범죄도시',' 타이타닉', '라라랜드' };
	
	//int val1;
	//cout << " 첫 번째 숫자 입력" << endl;
	//cin >> val1;
	//
	//int val2;
	//cout << "두번째 숫자 입력" << endl;
	//cin >> val2;
	//int result = val1 + val2;
	//cout << "두 정수의 합은 " << result << "입니다." << endl;
	//return 0;

	//int result = 0;
	//int val1, val2;
	//cin >> val1 >> val2;
	//if (val1 < val2) {
	//	for (int i = val1 + 1; i < val2; i++) {
	//		result += i;
	//	}
	//}
	//else {
	//	for (int i = val2 + 1; i < val1; i++) {
	//		result += i;
	//	}
	//}
	//cout << result << endl;

	/*char name[100];
	char lang[200];
	
	cout << "이름은 무엇입니까" << endl;
	cin >> name;
	cout << "좋아하는 프로그래밍 언어는 무엇인가요" << endl;
	cin >> lang;
	cout << name << lang << endl;*/


	/*int i = 100;
	int r = 1;

	for (int i = 0; i < 50; i++) {
		char flag = 'y';
		if (i % 2) flag = 'n';
		printf((flag == 'n') ? "o\n": "x\n");
	}
	{
		int r = 30;
		printf("\n%d %d\n", r, i);
	}*/

	//int a, i;
	//int r = 1;
	//char flag = 'y';
	//
	//do {
	//	if (flag == 'n') {
	//		cout << " 양수를 입력하세요" << endl;
	//	}
	//	cout << " 정수 입력" << endl;
	//	cin >> a;
	//	flag = 'n';
	//} while (a < 0);
	//
	//for (i = 1; i <= a; i++) {
	//	r = r * i;
	//}
	//cout << a << "! =" << r << endl;
	//return 0;
	// 팩토리얼 코드

	
}
