#include<iostream>

using namespace std;

int foo()
{
	int i=0, j;
	j = i + 2;
	return j;
}
int sign()
{
	signed char s = -127;
	unsigned char z = s;
	printf("%d, %d\n", z, s);
	return 0;
}

int pi()
{
	int r;
	float  width ,result, pi = 3.1415;
	cin >> r;
	result = r * r * pi;
	width = r * 2 * pi;
	cout << "���̴� " << result << "�Դϴ�" << endl;
	cout << "�ѷ��� " << width << "�Դϴ�" << endl;
	return 0;
}

int su()
{
	float su;
	int n, i, imsi;
	
	cout << "�Ǽ� �Է�" << endl;
	cin >> su;
	cout << "�ݿø� �ڸ��� �Է� : ";
	cin >> n;

	for (i = 0; i < n; i++) {
		su = su * 10;
	}

	su = su + 5; 
	imsi = (int)su / 10;
	su = (float)imsi;
	
	for (i = 0; i < n - 1; i++) {
		su = su / 10;
	}
	cout << "�ݿø� �����" << su << endl;
	return 0;
}
int arr()
{
	int score[3] = { 99,88,100 };
	cout << "score[0]�� �ּ�" << &score[0] << endl;
	cout << "score[1]�� �ּ�" << &score[1] << endl;
	cout << "score[2]�� �ּ�" << &score[2] << endl;
	cout << "***********************************************" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "score["<<i<<"]�� �ּ� " << &score[i] << endl;
	}
	cout << "***********************************************" << endl;
	cout << "score[0]�� �ּ�" << score << endl;
	cout << "score[1]�� �ּ�" << score+1 << endl;
	cout << "score[2]�� �ּ�" << score+2 << endl;

	cout << "***********************************************" << endl;
	for (int i = 0; i < 3; i++)
		cout << "score[" << i << "]�� �ּ�" << score + i << endl;
	cout << "***********************************************" << endl;
	cout << score[0]<<' ' << score[1] << " " << score[2] << endl;

	return 0;
}
int charArr()
{
	char string[30] = "computer";
	cout << string<<endl;
	int i = 0;
	for (i = 0; i < string[i] != '\0'; i++)
		cout << string[i] << endl;
	return 0;
}
int strcpy()
{
	char s_string[100] = "C++ programming is very interesting!!!";
	char d_string[100];
	cout << "s_string : " << s_string << endl;
	
	//s_string�� d_string�� �����ϱ�
	strcpy_s(d_string, _countof(d_string), s_string);
	cout << "d_string : " << d_string << endl;

	//s_string���� 3���� ���ڸ� d_string�� �����ϱ�
	strncpy_s(d_string, _countof(d_string), s_string, 3);
	cout << "d_string : " << d_string << endl;

	//d_string�� "*****"�� �߰��� ����
	strcat_s(d_string, _countof(d_string), "*****");
	cout << "d_string : " << d_string << endl;

	//s_string���� 3���� ���ڸ� d_string�� �߰��� ����
	strncat_s(d_string, _countof(d_string), s_string, 3);
	cout << "d_string : " << d_string << endl;

	return 0;
}
int point()
{
	int basic = 20;
	int* point = &basic;
	//*point = 10;
	cout << basic << " " << *point << endl;
	return 0;
}
int point1()
{
	int sum = 0, i = 0;

	for (i = 1; i <= 10; i++) {
		sum = sum + i;

	}
	cout << "1~10 ������ ��" << &sum << endl;
	cout << "1~10 ������ ��" << sum << endl;
	return 0;
}
int point2()
{
	int value = 100;
	int* pValue = &value;

	cout << value << endl;
	cout << &value << endl;
	cout << pValue << endl;
	cout << *pValue << endl;
	cout << &pValue << endl;

	int** ppValue = &pValue;
	cout << *ppValue << endl;
	cout << &ppValue << endl;
	cout << **ppValue << endl;
	cout << ppValue << endl;
	return 0;
}
int main()
{
	point2();
	//strcpy();
	//charArr();
	//arr();
	//su();
	//pi();
	//sign();
	//for (int i = 0; i < 10; i++) {
		//printf("Result #%d : %d\n", i, foo());
	//}
	//return 0;
//	char x, y;
//	x = -128;
//	y = -x;
//
//	if (x == y) printf("1");
//	if ((x- y) ==0) printf("2");
//	if ((x+y) == 2*x) printf("3");
//	if (x != -y) printf("4");

	//int num1 = 10, num2 = 3;
	//int result, s;
	//s = num1 % num2;
	//
	//result = num1 / num2;
	//cout << " 10 /4 = 2" << endl;
	//cout << num1 << " /" << num2 << "=" << result << endl;
	//cout << "�������� =" << s << endl;
	//return 0;

	

}