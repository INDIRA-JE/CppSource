#include <stdio.h>	// C	ǥ�������
#include <iostream>	// C++	ǥ�������
#include <string>	// ���ڿ�
#include <sstream>	// Ŭ������ ��ü ����
#include <iomanip>	// ��� ���� ����
#include <conio.h>	// _getch() ����Ϸ��� �Է� �ؾ���


using namespace std;	// ? �̰� ���� (�ܿ�����)
//void main() {
//	char name[] = "choi kuy ri";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//
//	/* using namespace std; ���, �̻�� ���ξ� ���� ÷�� */
//	//std::cout << "Hello C++" << std::endl;	//using namespace std �̻���
//	//cout << "Hello C++" << std::endl;			// using namespace std ����
//
//	// C ���
//	printf("*****************C��� ��� �Լ�*****************\n");
//	printf("  name  kor eng mat tot avg\n");
//	printf("%s8%d4%d4%d4%d4%6.1\n", name, kor, eng, mat, tot, avg);	// ��½�Ű�� �κ� �� Ÿ�� ����
//
//	// C++ ���
//	cout << endl <<"*****************C��� ��� �Լ�*****************\n"<< endl;
//	cout << "      name      kor eng mat tot avg\n" << endl;
//	cout << setw(10) << name << setw(6) << kor << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;	// setprecision(3) : �Ҽ��� 3�ڸ�
//}

//void main() {
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number;
//	cout << "��� : " << number << endl;
//	
//	char dan[15];
//	cout << "���� �Է¹ޱ� : ";
//	cin >> dan;
//	cout << "��� : " << dan << endl;
//	cout << "���߷��� 0�� snfmtpdy! ";
//	_getch();	// �޼ҵ�, conio.h �� ������� �Է��ؾ� ��
//	
//	cout << endl;
//}

//char str;	// ������ �̸��� ��

//int main() {
//	int n;
//	stringstream ss;	// sstream
//	ss.str("12 345 6789 0 -12");	// ss.str �޼ҵ� : ������ �˾Ƽ� ���� �� �ش�
//
//	for (int i = 0; i < 5; i++) {
//		ss >> n; // ���ڸ� ���ڷ� ����ȯ ���� ����
//		cout << n << endl;
//	}
//	return 0;
//}

//void main() {
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << setiosflags(ios::left);	// ���ݺ��� ���� ���� ����
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6);
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.15 << endl;
//	cout << resetiosflags(ios::left);	//������������
//	
//	cout << setw(10) << "World" << "|" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "�̸��� �Է��ϼ��� : ";
//	//cin >> name;
//	//cout << name;
//
//	cin.get(Name, 15);	// name�� �ִµ� 15���� �޾ư���
//	cin.ignore();	// �ڵ� enter�� ����Ǵµ� ���ۿ� ���� enter�� �����ϴ� ��ɾ�, ���� �Է��� �����ϰ� �Ѵ�)
//	cout << "address : ";
//	cin.get(address, 20);	// get : ���ڰ� �� �� �ַ� ���
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//}

//void main() {
//	char name[15];
//	char address[20];
//	cout << "What's tour name ? ";
//	cin.getline(name, 15);	// getline : ���ۿ� ������ �ʰ� �ڵ����� �����ش�
//	cout << "address ? ";
//	cin.getline(address, 20);
//	cout << "\nName : " << name << endl;
//	cout << "Address : " << address << endl;
//}

//void main() {
//	int a = 10, b = 5, c, d, e;
//
//	printf("a = %d b = %d\n", a++, b);		// 10, 5
//	printf("a = %d b = %d\n", a++, --b);	// 11, 4
//	printf("a = %d b = %d\n", ++a, b);		// 13, 4
//
//	c = a;
//	printf("c = %d\n", c);
//	d = c % b;
//	printf("d = %d\n", d);
//}

//void main() {
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	s = ++h + ++h;
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}

void main() {
	//int h, s;
	//h = 3;
	//s = h > 2;
	//cout << s << endl;	// 1
	//s = h < 2;
	//cout << s << endl;	// 0
	//s = 2 == 3;
	//cout << s << endl;	// 0

	//int h, s;
	//h = 2 != 4 && 5 > 3;
	//s = ! 1 || !0;
	//cout << h << endl;	// 1
	//cout << s << endl;	// 1

	//flase : 0 / true : 1

	//int a, b, c;
	//printf("�� ���� �Է��ϼ��� : ");
	//scanf_s("%d %d", &a, &b);
	//c = a > b;
	//printf("C ��� : %d\n", c);			// 1
	//printf("a > b ��� : %d\n", a > b);	// 1
	//a++;
	//printf("a�� b�� ���� : %d\n", a == b);
	//printf("a�� b�� ���� �ʴ� : %d\n", a != b);

	//int a = 3, b = 2, c;
	//c = a == ++b;	// c = 1(true) ���迬��
	//printf("��� : %d\n", (a == b) && (--b == c));	// 0(false) ������
	//printf("��� : %d\n", (a != b) || (b == c));	// 1(true)
	//printf("��� : %d\n", !((a != b) || (b == c)));	// 0(false)
}