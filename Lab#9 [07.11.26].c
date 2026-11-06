#include <stdio.h>
#include <Windows.h>
#include <time.h>

int numImage = 0;

void Elochka(HDC hdc, int x, int y) {
	MoveToEx(hdc, x, y, NULL);
	LineTo(hdc, x + 150, y);
	LineTo(hdc, x + 75, y - 75);
	LineTo(hdc, x, y);

	MoveToEx(hdc, x + 25, y - 75, NULL);
	LineTo(hdc, x + 125, y - 75);
	LineTo(hdc, x + 75, y - 125);
	LineTo(hdc, x + 25, y - 75);

	MoveToEx(hdc, x + 50, y - 125, NULL);
	LineTo(hdc, x + 100, y - 125);
	LineTo(hdc, x + 75, y - 150);
	LineTo(hdc, x + 50, y - 125);
}

void Automobilchik(HDC hdc, int x, int y) {
	Rectangle(hdc, x + 100, y - 49, x + 250, y - 150);

	Ellipse(hdc, x, y, x + 50, y - 50);
	Ellipse(hdc, x + 150, y, x + 200, y - 50);

	MoveToEx(hdc, x, y - 50, NULL);
	LineTo(hdc, x + 100, y - 50);
	LineTo(hdc, x + 100, y - 150);
	LineTo(hdc, x + 50, y - 150);
	LineTo(hdc, x + 50, y - 100);
	LineTo(hdc, x + 25, y - 100);
	LineTo(hdc, x + 0, y - 75);
	LineTo(hdc, x + 0, y - 50);
}

void Babchik(HDC hdc, int x, int y) {
	Ellipse(hdc, x, y, x + 100, y - 100);
	Ellipse(hdc, x + 25, y - 100, x + 75, y - 150);
	Ellipse(hdc, x + 25, y - 150, x + 75, y - 200);

	MoveToEx(hdc, x + 25, y - 125, NULL);
	LineTo(hdc,   x - 25, y - 125);
	MoveToEx(hdc, x + 75, y - 125, NULL);
	LineTo(hdc,   x + 125, y - 125);

	MoveToEx(hdc, x + 25, y - 200, NULL);
	LineTo(hdc, x + 75, y - 200);
	LineTo(hdc, x + 50, y - 225);
	LineTo(hdc, x + 25, y - 200);
}

void logchik(HDC hdc, int x, int y) {
	HBRUSH hBrush = GetStockObject(NULL_BRUSH);
	SelectObject(hdc, hBrush);
	Ellipse(hdc, x, y, x + 50, y - 50);
	Ellipse(hdc, x + 35, y, x + 50 + 35, y - 50);
	Ellipse(hdc, x + 35 + 35, y, x + 50 + 35 + 35, y - 50);
	Ellipse(hdc, x + 35 + 35 + 35, y, x + 50 + 35 + 35 + 35, y - 50);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_KEYDOWN:
		numImage++;

		if (numImage >= 4) {
			numImage = 0;
		}

		InvalidateRect(hWnd, NULL, TRUE);
		break;

	case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			HPEN hPen;
			HPEN hOldPen;
			hOldPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
			HBRUSH hBrush;
			HBRUSH hOldBrush;
			hOldBrush = CreateSolidBrush(RGB(255, 255, 255));


			/*
//-------------------- DOM ----------------------
			MoveToEx(hdc, 150, 350, NULL);
			LineTo(hdc, 275, 250);
			LineTo(hdc, 400, 350);

			LineTo(hdc, 400, 525);
			LineTo(hdc, 150, 525);
			LineTo(hdc, 150, 350);
			LineTo(hdc, 400, 350);

			MoveToEx(hdc, 225, 400, NULL);
			LineTo(hdc, 225, 475);
			LineTo(hdc, 325, 475);
			LineTo(hdc, 325, 400);
			LineTo(hdc, 225, 400);

			MoveToEx(hdc, 275, 400, NULL);
			LineTo(hdc, 275, 475);
			MoveToEx(hdc, 275, 425, NULL);
			LineTo(hdc, 325, 425);

//-------------------- ELKA ----------------------
			MoveToEx(hdc, 450, 525, NULL);
			LineTo(hdc, 525, 450);
			LineTo(hdc, 600, 525);
			LineTo(hdc, 450, 525);

			MoveToEx(hdc, 475, 450, NULL);
			LineTo(hdc, 575, 450);
			LineTo(hdc, 525, 400);
			LineTo(hdc, 475, 450);

			MoveToEx(hdc, 500, 400, NULL);
			LineTo(hdc, 550, 400);
			LineTo(hdc, 525, 375);
			LineTo(hdc, 500, 400);

//-------------------- AVTOMOBIL ----------------------
			hPen;
			hOldPen;

			hOldPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
			hPen = CreatePen(PS_SOLID, 2, RGB(0, 255, 0));

			SelectObject(hdc, hPen);
			MoveToEx(hdc, 800, 525, NULL);
			LineTo(hdc, 900, 525);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));
			SelectObject(hdc, hPen);
			Ellipse(hdc, 750, 500, 800, 550);
			Ellipse(hdc, 900, 500, 950, 550);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 2, RGB(0, 255, 0));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 750, 525, NULL);
			LineTo(hdc, 750, 450);
			LineTo(hdc, 800, 450);
			LineTo(hdc, 800, 400);
			LineTo(hdc, 900, 400);
			LineTo(hdc, 950, 450);
			LineTo(hdc, 950, 525);
			LineTo(hdc, 975, 500);
			LineTo(hdc, 975, 425);
			LineTo(hdc, 925, 375);
			LineTo(hdc, 825, 375);
			LineTo(hdc, 800, 400);
			MoveToEx(hdc, 900, 400, NULL);
			LineTo(hdc, 925, 375);
			MoveToEx(hdc, 950, 450, NULL);
			LineTo(hdc, 975, 425);
			MoveToEx(hdc, 750, 450, NULL);
			LineTo(hdc, 775, 425);
			LineTo(hdc, 800, 425);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 750, 525, NULL);
			Rectangle(hdc, 825, 425, 875, 450);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			SelectObject(hdc, hOldPen);
//-------------------- SNOW BABA ----------------------
			hBrush = CreateSolidBrush(RGB(220, 220, 255));
			hOldBrush = CreateSolidBrush(RGB(255, 255, 255));
			SelectObject(hdc, hBrush);
			Ellipse(hdc, 450 + 600, 200 + 350, 550 + 600, 300 + 350);
			Ellipse(hdc, 475 + 600, 150 + 350, 525 + 600, 200 + 350);
			Ellipse(hdc, 475 + 600, 100 + 350, 525 + 600, 150 + 350);
			SelectObject(hdc, hOldBrush);
			DeleteObject(hBrush);

			MoveToEx(hdc, 525 + 600, 175 + 350, NULL);
			LineTo(hdc, 575 + 600, 175 + 350);
			MoveToEx(hdc, 475 + 600, 175 + 350, NULL);
			LineTo(hdc, 425 + 600, 175 + 350);

			MoveToEx(hdc, 475 + 600, 100 + 350, NULL);
			LineTo(hdc, 525 + 600, 100 + 350);
			LineTo(hdc, 500 + 600, 75 + 350);
			LineTo(hdc, 475 + 600, 100 + 350);

			MoveToEx(hdc, 425 + 600, 300 + 350, NULL);
			LineTo(hdc, 425 + 600, 50 + 350);
			MoveToEx(hdc, 400 + 600, 50 + 350, NULL);
			LineTo(hdc, 400 + 600, 100 + 350);
			LineTo(hdc, 450 + 600, 100 + 350);
			LineTo(hdc, 450 + 600, 50 + 350);
			LineTo(hdc, 450 + 600, 100 + 350);
			LineTo(hdc, 425 + 600, 100 + 350);
			LineTo(hdc, 425 + 600, 75 + 350);

			MoveToEx(hdc, 500 + 600, 100 + 25 + 350, NULL);
			LineTo(hdc, 550 + 600, 125 + 350);
			MoveToEx(hdc, 500 + 600, 150 - 10 + 350, NULL);
			LineTo(hdc, 550 + 600, 125 + 350);

			MoveToEx(hdc, 500 - 20 + 600, 100 + 15 + 350, NULL);
			LineTo(hdc, 495 + 600, 115 + 350);
			MoveToEx(hdc, 500 + 5 + 600, 100 + 15 + 350, NULL);
			LineTo(hdc, 500 + 20 + 600, 115 + 350);

//-------------------- DEREVO ----------------------
			hPen = CreatePen(PS_SOLID, 10, RGB(0, 255, 0));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 50, 550, NULL);
			LineTo(hdc, 50, 350);

			MoveToEx(hdc, 50, 500, NULL);
			LineTo(hdc, 100, 450);
			MoveToEx(hdc, 50, 500 - 50, NULL);
			LineTo(hdc, 100, 450 - 50);
			MoveToEx(hdc, 50, 500 - 50 - 50, NULL);
			LineTo(hdc, 100, 450 - 50 - 50);

			MoveToEx(hdc, 50, 500, NULL);
			LineTo(hdc, 0, 450);
			MoveToEx(hdc, 50, 500 - 50, NULL);
			LineTo(hdc, 0, 450 - 50);
			MoveToEx(hdc, 50, 500 - 50 - 50, NULL);
			LineTo(hdc, 0, 450 - 50 - 50);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

//-------------------- SOORUJENYE ----------------------
			hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
			SelectObject(hdc, hPen);
			Rectangle(hdc, 1000, 300, 1250, 25);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 2, RGB(255, 255, 0));
			SelectObject(hdc, hPen);
			Rectangle(hdc, 1150, 300, 1200, 200);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
			SelectObject(hdc, hPen);
			Rectangle(hdc, 1050, 250, 1100, 200);
			Rectangle(hdc, 1050, 250 - 75, 1100, 200 - 75);
			Rectangle(hdc, 1050, 250 - 75 - 75, 1100, 200 - 75 - 75);
			Rectangle(hdc, 1050 + 100, 250 - 75, 1100 + 100, 200 - 75);
			Rectangle(hdc, 1050 + 100, 250 - 75 - 75, 1100 + 100, 200 - 75 - 75);
			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

//-------------------- CHTOTO IZ LINYI ----------------------
			hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 850, 275, NULL);
			LineTo(hdc, 850, 100);
			MoveToEx(hdc, 850 + 100, 275, NULL);
			LineTo(hdc, 850 + 100, 100);
			MoveToEx(hdc, 850 + 25, 275 + 25, NULL);
			LineTo(hdc, 850 + 25, 100 + 25);
			MoveToEx(hdc, 850 + 25 + 25 + 25, 275 + 25, NULL);
			LineTo(hdc, 850 + 25 + 25 + 25, 100 + 25);

			MoveToEx(hdc, 850, 275, NULL);
			LineTo(hdc, 875, 300);
			LineTo(hdc, 925, 300);
			LineTo(hdc, 950, 275);

			MoveToEx(hdc, 850, 275 - 175, NULL);
			LineTo(hdc, 875, 300 - 175);
			LineTo(hdc, 925, 300 - 175);
			LineTo(hdc, 950, 275 - 175);

			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
			SelectObject(hdc, hPen);

			MoveToEx(hdc, 875 + 12, 62, NULL);
			LineTo(hdc, 875 + 12 + 25, 62);

			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			hPen = CreatePen(PS_SOLID, 2, RGB(255, 255, 0));
			SelectObject(hdc, hPen);

			MoveToEx(hdc, 850, 100, NULL);
			LineTo(hdc, 900, 50);
			LineTo(hdc, 950, 100);

			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

			


//----------- TRANSPORTNOYE SREDSTVO S KOLYOSAMI ---------------
			Ellipse(hdc, 500, 250, 550, 200);
			Ellipse(hdc, 650, 250, 700, 200);

			MoveToEx(hdc, 500, 200, NULL);
			LineTo(hdc, 750, 200);
			LineTo(hdc, 750, 100);
			LineTo(hdc, 550, 100);
			LineTo(hdc, 550, 150);
			LineTo(hdc, 525, 150);
			LineTo(hdc, 500, 175);
			LineTo(hdc, 500, 200);

			MoveToEx(hdc, 600, 100, NULL);
			LineTo(hdc, 600, 200);


//----------- ZAKRASHENYE RECTANGLE ---------------
			hBrush = CreateSolidBrush(RGB(255, 0, 0));
			SelectObject(hdc, hBrush);
			Rectangle(hdc, 250, 200, 400, 50);
			SelectObject(hdc, hOldBrush);
			DeleteObject(hBrush);

			Rectangle(hdc, 300, 150, 350, 100);

			Rectangle(hdc, 275 - 8, 75 + 8, 275 + 8, 75 - 8);
			Rectangle(hdc, 275 - 8 + 50, 75 + 8, 275 + 8 + 50, 75 - 8);
			Rectangle(hdc, 275 - 8 + 50 + 50, 75 + 8, 275 + 8 + 50 + 50, 75 - 8);
			Rectangle(hdc, 275 - 8 + 50 + 50, 75 + 8 + 50, 275 + 8 + 50 + 50, 75 - 8 + 50);
			Rectangle(hdc, 275 - 8 + 50 + 50, 75 + 8 + 50 + 50, 275 + 8 + 50 + 50, 75 - 8 + 50 + 50);
			Rectangle(hdc, 275 - 8, 75 + 8 + 50, 275 + 8, 75 - 8 + 50);
			Rectangle(hdc, 275 - 8, 75 + 8 + 50 + 50, 275 + 8, 75 - 8 + 50 + 50);
			Rectangle(hdc, 275 - 8 + 50, 75 + 8 + 50 + 50, 275 + 8 + 50, 75 - 8 + 50 + 50);

//----------- CHTOTO S ELLIPSES ---------------
			hBrush = GetStockObject(NULL_BRUSH);
			SelectObject(hdc, hBrush);

			Ellipse(hdc, 200, 600, 250, 650);
			Ellipse(hdc, 200 + 35, 600, 250 + 35, 650);
			Ellipse(hdc, 200 + 35 + 35, 600, 250 + 35 + 35, 650);
			Ellipse(hdc, 200 + 35 + 35 + 35, 600, 250 + 35 + 35 + 35, 650);

			SelectObject(hdc, hOldBrush);
//----------- CHTOTO S DUGY ---------------

			Arc(hdc, 100, 75, 150, 125, 150, 100, 100, 100);
			Arc(hdc, 100, 75 + 50, 150, 125 + 50, 100, 100 + 50, 150, 100 + 50);

			Arc(hdc, 100 - 25, 75 + 25, 150 - 25, 125 + 25, 100, 100, 100, 150);
			Arc(hdc, 100 - 25 + 50, 75 + 25, 150 - 25 + 50, 125 + 25 , 100 + 50, 150, 100 + 50, 100);

			Ellipse(hdc, 100, 100, 150, 150);

			MoveToEx(hdc, 125, 175, NULL);
			LineTo(hdc, 125, 250);
			MoveToEx(hdc, 125, 250, NULL);
			LineTo(hdc, 150, 225);
			MoveToEx(hdc, 125, 225, NULL);
			LineTo(hdc, 100, 200);
			*/






/*
//-------------------------- KUST ----------------------------
			int x1 = 50, y1 = 100;
			int x2 = 250,  y2 = 100;
			int N = 30;
			for (int i = 0; i < N; i++) {
				MoveToEx(hdc, 150, 200, NULL);
				LineTo(hdc, x1, y1);
				x1 = x1 + (x2 / N);
			}
			
//-------------------------- KUST 2 ----------------------------
			x1 = 300, y1 = 200;
			x2 = 400, y2 = 200;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 = x1 + 5;
				y1 = y1 - 10;
			} while (x1 <= 400);
			x1 = 400;
			y1 = 0;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 = x1 + 5;
				y1 = y1 + 10;
			} while (x1 <= 500);

//-------------------------- ZABOR ----------------------------
			x1 = 600; y1 = 50;
			x2 = 850; y2 = 150;
			N = 20;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x1, y2);
				x1 = x1 + (250/N);
			} while (x1 <= x2);

//-------------------------- TRAVA ----------------------------
			hPen = CreatePen(PS_SOLID, 1, RGB(0, 255, 0));
			SelectObject(hdc, hPen);

			x1 = 50; y1 = 650;
			x2 = 100; y2 = 600;
			N = 20;
			MoveToEx(hdc, x1, y1, NULL);
			do {
				LineTo(hdc, x2, y2);
				x1 = x1 + 100;
				LineTo(hdc, x1, y1);
				x2 = x2 + 100;
			} while (x1 <= 1200);

			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

//-------------------------- LESNITSA 925 ----------------------------
			x1 = 950; y1 = 250;
			x2 = 1150; y2 = 50;
			N = 20;
			MoveToEx(hdc, x1, y1, NULL);
			do {
				y1 = y1 - (200 / N);
				LineTo(hdc, x1, y1);
				x1 = x1 + (200 / N);
				LineTo(hdc, x1, y1);
			} while (x1 <= x2);

//-------------------------- 926 1 ----------------------------
			hPen = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
			SelectObject(hdc, hPen);

			x1 = 250; y1 = 500;
			x2 = 50;  y2 = 500;
			N = 10;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 = x1 - N;
				y2 = y2 - N;
			} while (x1 >= x2);



//-------------------------- 926 2 ----------------------------
			x1 = 350; y1 = 400;
			x2 = 600;  y2 = 400;
			N = 10;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				y1 = y1 - 10;
				y2 = y2 + 15;
			} while (y2 <= 550);

//-------------------------- 926 3 ----------------------------
			x1 = 750; y1 = 500;
			x2 = 1000;  y2 = 350;
			N = 10;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x1, y2);
				x1 = x1 + 15;
				y2 = y2 - 4;
				y1 = y1 + 4;
			} while (x1 <= x2);

//-------------------------- 926 4 ----------------------------
			x1 = 1150; y1 = 550;
			x2 = 1150;  y2 = 300;
			N = 7;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 = x1 - N;
				x2 = x2 + N;
			} while (x1 >= 1050);

			SelectObject(hdc, hOldPen);
			DeleteObject(hPen);

//-------------------------- GRADIENT ----------------------------
			int x = 10;
			int r = 0;
			do {
				hPen = CreatePen(PS_SOLID, 1, RGB(r, r, 0));
				SelectObject(hdc, hPen);
				MoveToEx(hdc, x, 10, NULL);
				LineTo(hdc, x, 80);
				DeleteObject(hPen);
				x += 1;
				r += 2;
			} while (x <= 125);
*/
//-------------------------- LES ELOK ----------------------------
/*
			Elochka(hdc, 100, 200);
			Elochka(hdc, 100, 600);
			Elochka(hdc, 1000, 200);
			Elochka(hdc, 1000, 600);
			Elochka(hdc, 550, 400);
*/
/*
			Elochka(hdc, 100, 200);
			Elochka(hdc, 100, 400);
			Elochka(hdc, 100, 600);
*/
/*
			Elochka(hdc, 100, 200);
			Elochka(hdc, 300, 200);
			Elochka(hdc, 500, 200);
			Elochka(hdc, 700, 200);
*/
/*
			Elochka(hdc, 50, 200);
			Elochka(hdc, 250, 300);
			Elochka(hdc, 450, 400);
			Elochka(hdc, 650, 500);
			Elochka(hdc, 850, 600);
			Elochka(hdc, 1050, 700);
*/
//-------------------------- LES AUTO ----------------------------
/*
			Automobilchik(hdc, 100, 200);
			Automobilchik(hdc, 100, 600);
			Automobilchik(hdc, 1000, 200);
			Automobilchik(hdc, 1000, 600);
			Automobilchik(hdc, 550, 400);
*/
/*
			Automobilchik(hdc, 100, 200);
			Automobilchik(hdc, 100, 400);
			Automobilchik(hdc, 100, 600);
*/
/*
			Automobilchik(hdc, 100, 200);
			Automobilchik(hdc, 300, 200);
			Automobilchik(hdc, 500, 200);
			Automobilchik(hdc, 700, 200);
*/
/*
			Automobilchik(hdc, 50, 200);
			Automobilchik(hdc, 300, 300);
			Automobilchik(hdc, 550, 400);
			Automobilchik(hdc, 800, 500);
			Automobilchik(hdc, 1050, 600);
*/
//-------------------------- LES BAB ----------------------------
			/*
			Babchik(hdc, 100, 200);
			Babchik(hdc, 100, 600);
			Babchik(hdc, 1000, 200);
			Babchik(hdc, 1000, 600);
			Babchik(hdc, 550, 400);
*/
/*
			Babchik(hdc, 100, 200);
			Babchik(hdc, 100, 400);
			Babchik(hdc, 100, 600);
*/
/*
			Babchik(hdc, 100, 200);
			Babchik(hdc, 300, 200);
			Babchik(hdc, 500, 200);
			Babchik(hdc, 700, 200);
*/
/*
			Babchik(hdc, 50, 200);
			Babchik(hdc, 300, 300);
			Babchik(hdc, 550, 400);
			Babchik(hdc, 800, 500);
			Babchik(hdc, 1050, 600);
*/
//-------------------------- LES LOGO ----------------------------
/*
			logchik(hdc, 100, 200);
			logchik(hdc, 100, 600);
			logchik(hdc, 1000, 200);
			logchik(hdc, 1000, 600);
			logchik(hdc, 550, 400);
*/
/*
			logchik(hdc, 100, 200);
			logchik(hdc, 100, 400);
			logchik(hdc, 100, 600);
*/
/*
			logchik(hdc, 100, 200);
			logchik(hdc, 300, 200);
			logchik(hdc, 500, 200);
			logchik(hdc, 700, 200);
*/
/*
			logchik(hdc, 50, 200);
			logchik(hdc, 300, 300);
			logchik(hdc, 550, 400);
			logchik(hdc, 800, 500);
			logchik(hdc, 1050, 600);
*/
			if (numImage == 0) {
				Elochka(hdc, 100, 200);
				Elochka(hdc, 100, 600);
				Elochka(hdc, 1000, 200);
				Elochka(hdc, 1000, 600);
				Elochka(hdc, 550, 400);
			}
			else if (numImage == 1) {
				Automobilchik(hdc, 100, 200);
				Automobilchik(hdc, 100, 600);
				Automobilchik(hdc, 1000, 200);
				Automobilchik(hdc, 1000, 600);
				Automobilchik(hdc, 550, 400);
			}
			else if (numImage == 2) {
				Babchik(hdc, 100, 200);
				Babchik(hdc, 100, 600);
				Babchik(hdc, 1000, 200);
				Babchik(hdc, 1000, 600);
				Babchik(hdc, 550, 400);
			}
			else if (numImage == 3) {
				logchik(hdc, 100, 200);
				logchik(hdc, 100, 600);
				logchik(hdc, 1000, 200);
				logchik(hdc, 1000, 600);
				logchik(hdc, 550, 400);
			}

			DeleteObject(SelectObject(hdc, hOldPen));
			DeleteObject(SelectObject(hdc, hOldBrush));

			EndPaint(hWnd, &ps);
		}
		break;
	
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;

}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow) {
	const char CLASS_NAME[] = "MyWindowClass";

	WNDCLASS wc = { 0 };
	wc.lpfnWndProc = WndProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = CLASS_NAME;
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

	RegisterClass(&wc);

	HWND hwnd = CreateWindowEx(0, CLASS_NAME, "FIST", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 600, 400, NULL, NULL, hInstance, NULL);

	if (hwnd == NULL) {
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);

	MSG msg = { 0 };

	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return msg.wParam;

}