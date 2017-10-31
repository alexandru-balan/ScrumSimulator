#include "stdafx.h"
#include "Developers.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <Windows.h>

using namespace std;

Developers::Developers()
{
	Sleep(500);
	srand(time(0));
	int random = rand() % 4 + 1;
	switch (random)
	{
	case 1:
		strcpy_s(primary, "Front-end");
		break;
	case 2:
		strcpy_s(primary, "Back-end");
		break;
	case 3:
		strcpy_s(primary, "Integrations");
		break;
	case 4:
		strcpy_s(primary, "A.I.");
		break;
	default:
		break;
	}

	Sleep(500);
	srand(time(0));
	random = rand() % 4 + 1;
	switch (random)
	{
	case 1:
		strcpy_s(secondary, "Front-end");
		break;
	case 2:
		strcpy_s(secondary, "Back-end");
		break;
	case 3:
		strcpy_s(secondary, "Integrations");
		break;
	case 4:
		strcpy_s(secondary, "A.I.");
		break;
	default:
		break;
	}

	verificare();

}

void Developers::verificare() {
	srand(time(0));
	int random;

	while (strcmp(primary, secondary) == 0) {
		random = rand() % 4 + 1;
		switch (random)
		{
		case 1:
			strcpy_s(secondary, "Front-end");
			break;
		case 2:
			strcpy_s(secondary, "Back-end");
			break;
		case 3:
			strcpy_s(secondary, "Integrations");
			break;
		case 4:
			strcpy_s(secondary, "A.I.");
			break;
		default:
			break;
		}
	}
}

void Developers::afisare() {
	cout << "Primary skill is :" << primary<<endl;
	cout << "Secondary skill is :" << secondary << endl;
}


Developers::~Developers()
{
}
