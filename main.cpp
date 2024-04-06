#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int a;
	int b;

	int c;

	cin >> a;
	cin >> b;
		
	__asm
	{
		mov eax, a
		mov ebx, b

		mul ebx
			
		mov c, eax

	}

	cout << c << endl;

	system("pauese");

	return 0;
}	