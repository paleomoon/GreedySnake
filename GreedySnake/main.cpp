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

int main()//程序入口
{
	HideCursor();//隐藏光标
    Controller c;//声明一个Controller类
    c.Game();//整个游戏循环
    return 0;
}
