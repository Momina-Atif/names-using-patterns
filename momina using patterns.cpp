#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{
    system("mode con: cols=160 lines=25");

    int i, j;

    // M STARTS (X: 2 to 9)
    for(i = 2, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 2, j = 2; j <= 5 && i <= 5; j++, i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 5, j = 5; i <= 8 && j >= 2; i++, j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 8, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // O STARTS (X: 11 to 18)
    for(i = 11, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 11, j = 2; i <= 18; i++) {
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 18, j = 2; j <= 8; j++) {
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 11, j = 8; i <= 18; i++) {
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // M STARTS (X: 20 to 27)
    for(i = 20, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 20, j = 2; j <= 5 && i <= 23; j++, i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 23, j = 5; i <= 26 && j >= 2; i++, j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 26, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // I STARTS (X: 29 to 36)
    for(i = 29, j = 2; i <= 36; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 32, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 29, j = 8; i <= 36; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // N STARTS (X: 38 to 45)
    for(i = 38, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 38, j = 2; i <= 45 && j <= 8; i++, j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 45, j = 7; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // A STARTS (X: 47 to 54)
    for(i = 47, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 47, j = 2; i <= 54; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 54, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 47, j = 5; i <= 54; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // --- SPACE BETWEEN FIRST AND LAST NAME ---

    // A STARTS (X: 59 to 66)
    for(i = 59, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 59, j = 2; i <= 66; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 66, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 59, j = 5; i <= 66; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // T STARTS (X: 68 to 75)
    for(i = 68, j = 2; i <= 75; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 71, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // I STARTS (X: 77 to 84)
    for(i = 77, j = 2; i <= 84; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 80, j = 2; j <= 8; j++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 77, j = 8; i <= 84; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    // F STARTS (X: 86 to 93)
    for(i = 86, j = 8; j >= 2; j--) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 86, j = 2; i <= 93; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }
    for(i = 86, j = 5; i <= 91; i++) 
	{
        Sleep(40); system("color 08"); gotoxy(i, j); cout << "*";
    }

    getch();
    return 0;
}
