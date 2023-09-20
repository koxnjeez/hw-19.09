void SetCursor(int x, int y, int color, string text)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //уникальный номер окна консоли (дескриптор)
    COORD position;
    position.X = x; // настройка координат
    position.Y = y;
    SetConsoleCursorPosition(h, position); // установка курсора в координату
	SetConsoleTextAttribute(h, color); // установка цвета
	cout << text; // вывод строки текста
}