#include <windows.h>
#include "controller.h"

void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = FALSE;
	cursor.dwSize = sizeof(cursor);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(handle, &cursor);
}

int main()//�������
{
	HideCursor();//���ع��
    Controller c;//����һ��Controller��
    c.Game();//������Ϸѭ��
    return 0;
}
