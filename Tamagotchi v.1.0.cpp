// Tamagotchi v.1.0.cpp: определяет точку входа для консольного приложения.
//
#include <ctime> 
#include "stdafx.h"
#include"Logic.h"
#include"conio.h"
#include<thread>
#include"Pets.h"

using namespace std;

int main()
{
	cout << "Hello"<<endl;
	Sleep((BYTE)2);
	cout<<"It's The Tamagotchi Game\n Please input your Name" << endl;
	string NamePlayer;
	cin >> NamePlayer;
	cout << "Hi " + NamePlayer << endl;
	{
		Input();
	}
	Pets Pet;
	system("cls");
	thread Function (Number);

		for (;;)
		{
			Sleep((BYTE)2);
			Pet.LifeCircle();
			Sleep((BYTE)3);
			system("cls");
		}

	system("pause");
	return 0;
}

