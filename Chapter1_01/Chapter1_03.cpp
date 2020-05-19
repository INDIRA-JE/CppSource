#include <stdio.h>	// C	표준입출력
#include <iostream>	// C++	표준입출력
#include <string>	// 문자열
#include <sstream>	// 클래스형 객체 생성
#include <iomanip>	// 출력 형식 조작
#include <conio.h>	// _getch() 사용하려면 입력 해야함


using namespace std;	// ? 이게 뭔가 (외워야함)
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
//	/* using namespace std; 사용, 미사용 접두어 구분 첨부 */
//	//std::cout << "Hello C++" << std::endl;	//using namespace std 미사용시
//	//cout << "Hello C++" << std::endl;			// using namespace std 사용시
//
//	// C 출력
//	printf("*****************C언어 출력 함수*****************\n");
//	printf("  name  kor eng mat tot avg\n");
//	printf("%s8%d4%d4%d4%d4%6.1\n", name, kor, eng, mat, tot, avg);	// 출력시키는 부분 → 타입 설정
//
//	// C++ 출력
//	cout << endl <<"*****************C언어 출력 함수*****************\n"<< endl;
//	cout << "      name      kor eng mat tot avg\n" << endl;
//	cout << setw(10) << name << setw(6) << kor << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;	// setprecision(3) : 소수점 3자리
//}

//void main() {
//	int number;
//	cout << "숫자 입력받기 : ";
//	cin >> number;
//	cout << "출력 : " << number << endl;
//	
//	char dan[15];
//	cout << "문자 입력받기 : ";
//	cin >> dan;
//	cout << "출력 : " << dan << endl;
//	cout << "멈추려면 0을 snfmtpdy! ";
//	_getch();	// 메소드, conio.h ← 헤더파일 입력해야 함
//	
//	cout << endl;
//}

//char str;	// 변수방 이름일 뿐

//int main() {
//	int n;
//	stringstream ss;	// sstream
//	ss.str("12 345 6789 0 -12");	// ss.str 메소드 : 공백을 알아서 제거 해 준다
//
//	for (int i = 0; i < 5; i++) {
//		ss >> n; // 문자를 숫자로 형변환 없이 가능
//		cout << n << endl;
//	}
//	return 0;
//}

//void main() {
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << setiosflags(ios::left);	// 지금부터 왼쪽 정렬 적용
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6);
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.15 << endl;
//	cout << resetiosflags(ios::left);	//왼쪽정렬해제
//	
//	cout << setw(10) << "World" << "|" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "이름을 입력하세요 : ";
//	//cin >> name;
//	//cout << name;
//
//	cin.get(Name, 15);	// name을 주는데 15개를 받아가라
//	cin.ignore();	// 자동 enter가 실행되는데 버퍼에 남는 enter를 무시하는 명령어, 연속 입력이 가능하게 한다)
//	cout << "address : ";
//	cin.get(address, 20);	// get : 문자가 올 때 주로 사용
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//}

//void main() {
//	char name[15];
//	char address[20];
//	cout << "What's tour name ? ";
//	cin.getline(name, 15);	// getline : 버퍼에 남기지 않고 자동으로 지워준다
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
	//printf("두 값을 입력하세요 : ");
	//scanf_s("%d %d", &a, &b);
	//c = a > b;
	//printf("C 결과 : %d\n", c);			// 1
	//printf("a > b 결과 : %d\n", a > b);	// 1
	//a++;
	//printf("a와 b가 같다 : %d\n", a == b);
	//printf("a와 b가 같지 않다 : %d\n", a != b);

	//int a = 3, b = 2, c;
	//c = a == ++b;	// c = 1(true) 관계연산
	//printf("결과 : %d\n", (a == b) && (--b == c));	// 0(false) 논리연산
	//printf("결과 : %d\n", (a != b) || (b == c));	// 1(true)
	//printf("결과 : %d\n", !((a != b) || (b == c)));	// 0(false)
}