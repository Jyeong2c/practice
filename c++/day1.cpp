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
	//		cout << "Best�� ������ �Լ�" << endl;
	//	}
	//}
	//namespace ProgComlmpl
	//{
	//	void SimpleFunc(void)
	//	{
	//		cout << "Prog�� ������ �Լ�" << endl;
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
	/*cout << "ù ��° C++ ���α׷��Դϴ�\n";
	
	int num;
	cout << "������ �Է��ϼ���";
	cin >> num;
	cout << "�Էµ� ������" << num << "�Դϴ�\n";
	return 0;*/

	

	//array obj = { '�ҿ�', '7����', '���˵���',' Ÿ��Ÿ��', '��󷣵�' };
	
	//int val1;
	//cout << " ù ��° ���� �Է�" << endl;
	//cin >> val1;
	//
	//int val2;
	//cout << "�ι�° ���� �Է�" << endl;
	//cin >> val2;
	//int result = val1 + val2;
	//cout << "�� ������ ���� " << result << "�Դϴ�." << endl;
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
	
	cout << "�̸��� �����Դϱ�" << endl;
	cin >> name;
	cout << "�����ϴ� ���α׷��� ���� �����ΰ���" << endl;
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
	//		cout << " ����� �Է��ϼ���" << endl;
	//	}
	//	cout << " ���� �Է�" << endl;
	//	cin >> a;
	//	flag = 'n';
	//} while (a < 0);
	//
	//for (i = 1; i <= a; i++) {
	//	r = r * i;
	//}
	//cout << a << "! =" << r << endl;
	//return 0;
	// ���丮�� �ڵ�

	
}
