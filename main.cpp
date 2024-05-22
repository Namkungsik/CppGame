#include<iostream>
#include "CWorrior.h"
#include "CPaladin.h"
#include "CWizard.h"
#include <stdlib.h>
#include <stdio.h>
#include "base.h"
#include "HeroNumber.h"

using namespace std;

#define MAX 4

CObject* pObj[MAX];

void mainmenu()
{
	gotoxy(0, 0);
	cout << "소지골드 : 1000000G";
	gotoxy(1, 1);
	cout << "1.사냥터";
	gotoxy(15, 1);
	cout << "2.회복소";
	gotoxy(30, 1);
	cout << "3.주점\n";
}

void main()
{
	int sel = 0;
	for (;;)
	{
		mainmenu();
		for (int i = 0; i < MAX; i++)
		{
			if (pObj[i] != NULL)
			{
				gotoxy(i, 21);
				pObj[i];
			}
			else
			{
			}
		}
		gotoxy(1, 5);
		cin >> sel;
		if (sel == 1)
		{
			clrscr();
			int n = 0;
			cout << "사냥터입니다\n";
			cout << endl;
			cout << "1.핏빛 황무지\n";
			cout << "2.악의 소굴\n";
			cout << "3.차가운 평야\n";
			cout << "4.매장지\n";
			cout << "5.바위 벌판\n";
			cin >> n;
		}
		else if (sel == 2)
		{
			cout << "회복소입니다\n";
			cout << "회복하시겠습니까?(100G차감)\n";
			cout << "1. 예    2. 아니오\n";
		}
		else
		{
			int heroType = 0, num = 0;
			CObject* pPub[3];
			clrscr();
			cout << "영입할 히어로 선택\n";
			for (int i = 0; i < 3; i++)
			{
				heroType = rand() % 4;
				switch (heroType)
				{
				case HERO_WORRIOR: pPub[i] = new CWorrior; break;
				case HERO_PALADIN: pPub[i] = new CPaladin; break;
				case HERO_WIZARD: pPub[i] = new CWizard; break;
				}
				//gotoxy(0, i * 10);
				pPub[i]->DisplayState();
				cout << i << "번 히어로" << endl;
				cout << endl;
			}
			gotoxy(20, 0);
			cin >> num;
			for (int i = 0; i < MAX; i++)
			{
				if (pObj[i] == NULL)
				{
					switch (pPub[num]->GetHeroType())
					{
					case HERO_WORRIOR: 
						pObj[i] = new CWorrior;
						pObj[i]->SetHp(pPub[i]->GetHp());
						pObj[i]->SetAtk(pPub[i]->GetAtk());
						pObj[i]->SetMAtk(pPub[i]->GetMAtk());
						pObj[i]->SetDef(pPub[i]->GetDef());
						break;
					case HERO_PALADIN:
						pObj[i] = new CPaladin;
						pObj[i]->SetHp(pPub[i]->GetHp());
						pObj[i]->SetAtk(pPub[i]->GetAtk());
						pObj[i]->SetMAtk(pPub[i]->GetMAtk());
						pObj[i]->SetDef(pPub[i]->GetDef());
						break;
					case HERO_WIZARD:
						pObj[i] = new CWizard;
						pObj[i]->SetHp(pPub[i]->GetHp());
						pObj[i]->SetAtk(pPub[i]->GetAtk());
						pObj[i]->SetMAtk(pPub[i]->GetMAtk());
						pObj[i]->SetDef(pPub[i]->GetDef());
						break;
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				if (pPub[i])
				{
					delete pPub[i];
					pPub[i] = NULL;
				}
			}
		}
		clrscr();
	}
}