#include <iostream>
using namespace std;

void main() {
	/*int kor, eng, tot, mok;
	double avg;

	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok) {
		case 10:
			printf("������ : A+");
			break;
		case 9:
			printf("������ : A");
			break;
		case 8:
			printf("������ : B");
			break;
		case 7:
			printf("������ : C");
			break;
		case 6:
			printf("������ : D");
			break;
		default :
			printf("FFFFFFFFFF");
			break;
	}*/

	int a, b;
	char op;
	cout << "�μ��� �Է��ϼ���. ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���(+, -, *, /, %) " << endl;
	cin >> op;


	switch (op) {
		case '-':
			printf("%d - %d", a - b);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			break;
	}
}