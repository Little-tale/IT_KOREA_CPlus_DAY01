// C언어란 무엇인가? ---> 
	// 장점 :  매우 빠르다.
	// 단점 : 매우 불편하다. (어렵다)
// C++ 이란 무엇인가??? ---->>>>
// C언어의 장점을 약간 손해보더라도 
// C언어의 단점을 보완하도록 만든 언어.

// -> C++ 장점 -> 빠른 속도와 편리한 코딩
// -> C++ 단점 -> 매우 빠르지 않은 속도
// -> C++ 단점 -> 매우 편리하지 않은 코딩

// .C++ 수업의 방향 -> C언어에서의 변화
// auto, decltype, &(레퍼런스) 를 배워볼꺼다

#include <stdio.h>
#include <iostream>
#include <vector>

decltype(4) A() {
	return 5;
}


//void main() {
//	auto a = 5; //자동으로 자료형을 인식 초기값은 필수가 되버림.
//	printf("%d", a);
//	//std::vector<int> b;
//	//std::vector<int>::iterator c = b.begin(); 
//	//auto c = b.begin();
//
//	decltype(5 + 3.5) b; // auto 처럼 자동 타입인데 초기값을 안적어도 되는.
//	b = 0.5;
//	printf("\n%lf\n", b);
//
//	// 자료형 추측 변수만 이용해서 구구단을 출력하세요 
//	for (auto i = 2; i < 10; ++i) {
//		for (auto j = 2; j < 10; ++j) {
//			printf(" %d * %d * %2d", j, i, j * i);
//		}
//		printf("\n");
//	}
//
//
//
//}


// & 레퍼런스 -> 포인터를 대체하는 기능, 변수의 별명을 만드는 기능
// 변수의 구성 요소에는 변수의 크기, 변수의 번역방법, 변수의 이름

	//변수의 이름 만 추가해 주는 기능

//void Swap(int* n, int* m) {
//
//}
void Swap(int& n, int& m) {

}


//void main() {
//	//int a;
//	//auto b = &a; // b는 포인터다. 
//	//auto c = &b; // 포포 인터가 된다.
//	//*b; // 
//
//	int a;
//	int& b = a; // 하지만 공간을 새로 만들어서 하는게 아닌 별명만 지어주는것.
//	a = 5;
//	printf("%d\n", b);
//
//	// 레퍼런스의 제약 조건이 존재하다.
//	// 1. 무조건 초기값이 필요하다.
//	int c;
//	int& d = c; // 이런식 
//}

// 2. 변수만 넣을수 있다.
//void main() {
//	//int& b = 3; 안됨.
//	int b = 3;
//	int& a = b;
//
//	const int& c = 3; // 이렇게는 가능
//	int&& d = 3;	// 이렇게도 가능
//}


#include <stdlib.h>
//void main() {
//	int& i = *(int*)malloc(4);
//	auto& j = *(int*)malloc(4);
//	free(&i); //널값이 없어서 살짝 무리가 있다.
//	free(&j);
//}



// 배열을 만들고
// 만든 배열의 각 숫자를 N배 하는 함수를 만드시오
// 추측 자료형과 레퍼런스로만 동작을 구현하세요




//void Multiply(decltype(0) arr[3], decltype(0)& n) {
//	auto i = 0;
//	for (i = 0; i < 4; ++i) {
//		arr[i] = arr[i] * n;
//	}
//}
//
//void main() {
//	decltype(4) a[4] = { 1,2,3,4 };
//	auto b = 5;
//	Multiply(a, b);
//
//
//}

 //Ranged For 범위기반 포문
	// 집합데이터 (배열, 자료구조, ...) 기준으로 

//void main() {
//	int arr[] = { 1,2,3,4,4,4,4,4 };
//	for (auto& a : arr) { //arr 예애다가는 집합 즉arr의 집합원본은 a라는 별명을 만들고
//		a = a * 2; // a 원본에다가 a*2를 한값을 전달
//	}
//	for (auto& a : arr) { //arr 예애다가는 집합 
//		printf("%d\n", a); // 출력해보면
//	}
//
//}


 //Ranged For 제약조건 
//void main() {
//	int arr[3];
//	auto p = arr; // 이러면 주소값을 받지요
//
//	/*for (auto i : p) {//Ranged For 제약조건 
//						// 안됨 즉 집합 원본 자체가 와야함
//	}*/
//
//	auto& p2 = arr;
//	for (auto& i : p2) {
//
//	}
//	for (auto i : "auto"){
//		// 이렇게도 가능
//	}
//}

// Range For 와 추측형 변수만을 이용하여 구구단을 출력하세요 

//void main() {
//	decltype(1) arr[] = { 2,3,4,5,6,7,8,9 };
//	std::cin >> arr[0];
//
//	std::cin.operator>>(arr[0]);
//
//	for (auto i : arr) {
//		for (auto j : arr) {
//			std::cout << i << " * " << j << " = " << j * i << " ";
//		}
//		printf("|");
//		printf("\n");
//	}
//
//}


// 숫자 2개를 입력하면 입력한 숫자 사이의 모든 수의 합을 구하는 프로그램을 작성하시오
// 두수의 차가 10보다 작으면 다시 입력하시오


//void main() {
//	//숫자 2개를 입력하면 입력한
//	auto a = 0;
//	auto b = 0;
//	auto result = 0;
//	// 입력한 숫자 사이의 모든 수의 합을 구하는 프로그램을 작성하시오
//	while (true) {
//		std::cin >> a;
//		std::cin >> b;
//		if (a > b) {
//			if (a - b < 10) continue;
//			for (auto i = b; i <= a; ++i) {
//				result += i;
//			}
//			break;
//		}
//		else if (a < b) {
//			if (b - a < 10) continue;
//			for (auto i = a; i <= b; ++i) {
//				result += i;
//			}
//			break;
//		}
//		else {
//			break;
//		}
//	}
//	std::cout << result<<" ";
//}


// C언어 ->  묵시적 형변환을 해주는데
// C++ -> 명시적 형변환

void main() {
	void* p;
	//int* pp = p;
	int* pp = (int*)p; // 강제적 
	pp = static_cast<int*>(p); // 안전한 방법 
}
