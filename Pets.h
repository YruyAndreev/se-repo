#pragma once
#include<iostream>
#include<string>
#include"conio.h"
#include"Logic.h"
#include <windows.h>
#include<thread>

using namespace std;

class Pets
{
private:
	string NamePets;
	int HealthPoint;
	int Satiety;
	int Happiness;
	int Fatigue;
public:

	Pets()
	{
		HealthPoint = 100;
		Satiety = 100;
		Happiness = 100;
		Fatigue = 0;
	}

	void GameOver()
	{
		cout << "Your pet is dead" << endl;
		cout << "Game Over" << endl;
		system("pause");
		exit(0);
	}

	void Dead()
	{
		
		if (HealthPoint == 0)
		{
			cout << "Your pet is going to die now" << endl;
		}

			if (Satiety == 0)
			{
				cout << "Your pet is going to die now" << endl;
			}

			if (Happiness == 0)
			{
				cout << "Your pet is going to die now" << endl;
			}

			if (Fatigue == 100)
			{
				cout << "Your pet is going to die now" << endl;
			}

			if (HealthPoint < 0)
			{
				GameOver();
			}

			if (Satiety < 0)
			{
				GameOver();
			}

			if (Happiness < 0)
			{
				GameOver();
			}

			if (Fatigue > 100)
			{
				GameOver();
			}

			if (Satiety > 100)
			{
				cout << "The pet vomited" << endl;
			}

			if (Satiety < 20)
			{
				cout << "I'm hungry,feed me please " << endl;
			}

			if (Happiness < 20)
			{
				cout << "I'm bored,play with me please " << endl;
			}

			if (Fatigue > 80)
			{
				cout << "I want to sleep" << endl;
			}

			if (Fatigue > 100)
			{
				cout << "The pet fainted" << endl;
			}
	}

	void SkillReduction()
	{
		Satiety -= rand() % 5;
		Happiness -= rand() % 5;
		Fatigue += rand()%5;
		HealthPoint -= rand()% 5;
	}

	void LifeCircle()
	{
		GetStatus();
		SkillReduction();
		Dead();
	}

	void GetStatus()
	{
		cout << NamePets<<endl;
		cout << "3:Feed " << "4:Play " << "5:Sleep "<< endl;
		cout << " Health point: " << HealthPoint << endl << " Satiety: " << Satiety << endl << " Happiness: " << Happiness << endl << " Fatigue: " << Fatigue << endl;

	}



	void Feed()
	{
		Satiety += 10, Fatigue += 10;
		cout << "Yummy";
		system("cls");
		GetStatus();
	}

	void Play()
	{
		Happiness += 10, Satiety -= 10, Fatigue += 10;
		cout << "Played well";
		system("cls");
		GetStatus();
	}

	void Sleep()
	{
		cout << "I've slept enough";
		HealthPoint += 10, Happiness += 10, Fatigue -= 10, Satiety -= 10;
		system("cls");
		GetStatus();
	}

}Pet;
