// C���� �����ΰ�? ---> 
	// ���� :  �ſ� ������.
	// ���� : �ſ� �����ϴ�. (��ƴ�)
// C++ �̶� �����ΰ�??? ---->>>>
// C����� ������ �ణ ���غ����� 
// C����� ������ �����ϵ��� ���� ���.

// -> C++ ���� -> ���� �ӵ��� ���� �ڵ�
// -> C++ ���� -> �ſ� ������ ���� �ӵ�
// -> C++ ���� -> �ſ� ������ ���� �ڵ�

// .C++ ������ ���� -> C������ ��ȭ
// auto, decltype, &(���۷���) �� ���������

#include <stdio.h>
#include <iostream>
#include <vector>

decltype(4) A() {
	return 5;
}


//void main() {
//	auto a = 5; //�ڵ����� �ڷ����� �ν� �ʱⰪ�� �ʼ��� �ǹ���.
//	printf("%d", a);
//	//std::vector<int> b;
//	//std::vector<int>::iterator c = b.begin(); 
//	//auto c = b.begin();
//
//	decltype(5 + 3.5) b; // auto ó�� �ڵ� Ÿ���ε� �ʱⰪ�� ����� �Ǵ�.
//	b = 0.5;
//	printf("\n%lf\n", b);
//
//	// �ڷ��� ���� ������ �̿��ؼ� �������� ����ϼ��� 
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


// & ���۷��� -> �����͸� ��ü�ϴ� ���, ������ ������ ����� ���
// ������ ���� ��ҿ��� ������ ũ��, ������ �������, ������ �̸�

	//������ �̸� �� �߰��� �ִ� ���

//void Swap(int* n, int* m) {
//
//}
void Swap(int& n, int& m) {

}


//void main() {
//	//int a;
//	//auto b = &a; // b�� �����ʹ�. 
//	//auto c = &b; // ���� ���Ͱ� �ȴ�.
//	//*b; // 
//
//	int a;
//	int& b = a; // ������ ������ ���� ���� �ϴ°� �ƴ� ���� �����ִ°�.
//	a = 5;
//	printf("%d\n", b);
//
//	// ���۷����� ���� ������ �����ϴ�.
//	// 1. ������ �ʱⰪ�� �ʿ��ϴ�.
//	int c;
//	int& d = c; // �̷��� 
//}

// 2. ������ ������ �ִ�.
//void main() {
//	//int& b = 3; �ȵ�.
//	int b = 3;
//	int& a = b;
//
//	const int& c = 3; // �̷��Դ� ����
//	int&& d = 3;	// �̷��Ե� ����
//}


#include <stdlib.h>
//void main() {
//	int& i = *(int*)malloc(4);
//	auto& j = *(int*)malloc(4);
//	free(&i); //�ΰ��� ��� ��¦ ������ �ִ�.
//	free(&j);
//}



// �迭�� �����
// ���� �迭�� �� ���ڸ� N�� �ϴ� �Լ��� ����ÿ�
// ���� �ڷ����� ���۷����θ� ������ �����ϼ���




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

 //Ranged For ������� ����
	// ���յ����� (�迭, �ڷᱸ��, ...) �������� 

//void main() {
//	int arr[] = { 1,2,3,4,4,4,4,4 };
//	for (auto& a : arr) { //arr ���ִٰ��� ���� ��arr�� ���տ����� a��� ������ �����
//		a = a * 2; // a �������ٰ� a*2�� �Ѱ��� ����
//	}
//	for (auto& a : arr) { //arr ���ִٰ��� ���� 
//		printf("%d\n", a); // ����غ���
//	}
//
//}


 //Ranged For �������� 
//void main() {
//	int arr[3];
//	auto p = arr; // �̷��� �ּҰ��� ������
//
//	/*for (auto i : p) {//Ranged For �������� 
//						// �ȵ� �� ���� ���� ��ü�� �;���
//	}*/
//
//	auto& p2 = arr;
//	for (auto& i : p2) {
//
//	}
//	for (auto i : "auto"){
//		// �̷��Ե� ����
//	}
//}

// Range For �� ������ �������� �̿��Ͽ� �������� ����ϼ��� 

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


// ���� 2���� �Է��ϸ� �Է��� ���� ������ ��� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�
// �μ��� ���� 10���� ������ �ٽ� �Է��Ͻÿ�


//void main() {
//	//���� 2���� �Է��ϸ� �Է���
//	auto a = 0;
//	auto b = 0;
//	auto result = 0;
//	// �Է��� ���� ������ ��� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�
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


// C��� ->  ������ ����ȯ�� ���ִµ�
// C++ -> ����� ����ȯ

void main() {
	void* p;
	//int* pp = p;
	int* pp = (int*)p; // ������ 
	pp = static_cast<int*>(p); // ������ ��� 
}
