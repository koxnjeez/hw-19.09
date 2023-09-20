#include "settings.h"

void DrawLine(int count, string elem, int hzshoeto, bool lie) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	if (lie) {
		SetConsoleTextAttribute(h, hzshoeto);
		for (int i = 0; i < count; i++) {
			cout << elem << "\n";
		}
	}
	else {
		SetConsoleTextAttribute(h, hzshoeto);
		for (int i = 0; i < count; i++) {
			cout << elem;
		}
		cout << "\n";
	}
	cout << "\n";
}

int main()
{
	DrawLine(20, "@", 12, true);
	DrawLine(20, "@", 12, false);
	Sleep(INFINITE);
}