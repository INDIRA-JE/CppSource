#include <iostream>
using namespace std;

void main() {
	/*int kor, eng, tot, mok;
	double avg;

	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok) {
		case 10:
			printf("학점은 : A+");
			break;
		case 9:
			printf("학점은 : A");
			break;
		case 8:
			printf("학점은 : B");
			break;
		case 7:
			printf("학점은 : C");
			break;
		case 6:
			printf("학점은 : D");
			break;
		default :
			printf("FFFFFFFFFF");
			break;
	}*/

	int a, b;
	char op;
	cout << "두수를 입력하세요. ";
	cin >> a >> b;
	cout << "연산자를 입력하세요(+, -, *, /, %) " << endl;
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