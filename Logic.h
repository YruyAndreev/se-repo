#pragma once
#include<iostream>
#include<ctime>
#include<string>
#include <windows.h>

#include"Pets.h"

using namespace std;

void Input();
void Sleep(BYTE time);

void Input()
{
	cout << "Please, choose The Tamagotchi" << endl;

	int Choose;
	string NamePet;

	cout << "1:Puppy " << "2:Kitten " << "3:Bunny " << "4:Hamster " << endl;

	cin >> Choose;

	switch (Choose)
	{

	case 1:
	{
		cout << "Input name pet" << endl;
		cin >> NamePet;
		cout << "Hi I'm "+ NamePet << endl;
		Sleep((BYTE)3);
		break;
	}
	case 2:
	{
		cout << "Input name pet" << endl;
		cin >> NamePet;
		cout << "Hi I'm " + NamePet << endl;
		Sleep((BYTE)3);
		break;
	}
	case 3:
	{
		cout << "Input name pet" << endl;
		cin >> NamePet;
		cout << "Hi I'm " + NamePet << endl;
		Sleep((BYTE)3);
		break;
	}
	case 4:
	{
		cout << "Input name pet" << endl;
		cin >> NamePet;
		cout << "Hi I'm " + NamePet << endl;
		Sleep((BYTE)3);
		break;
	}
	default:
	{
		system("cls");
		Input();
	}
	}

}

void Number()
{
	char Numeric = 0;

	for (;;)
	{
		Numeric = _getch();
		if (Numeric == 3)
		{
			Pet.Feed();
		}

		if (Numeric == 4)
		{
			Pet.Play();
		}

		if (Numeric = 5)
		{
			Pet.Sleep();
		}
	}
}

void Sleep(BYTE time)
{
	Sleep((DWORD)time * 1000);
	return;
}

