void SetCursor(int x, int y, int color, string text)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //���������� ����� ���� ������� (����������)
    COORD position;
    position.X = x; // ��������� ���������
    position.Y = y;
    SetConsoleCursorPosition(h, position); // ��������� ������� � ����������
	SetConsoleTextAttribute(h, color); // ��������� �����
	cout << text; // ����� ������ ������
}