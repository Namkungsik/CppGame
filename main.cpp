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
	cout << "������� : 1000000G";
	gotoxy(1, 1);
	cout << "1.�����";
	gotoxy(15, 1);
	cout << "2.ȸ����";
	gotoxy(30, 1);
	cout << "3.����\n";
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
			cout << "������Դϴ�\n";
			cout << endl;
			cout << "1.�ͺ� Ȳ����\n";
			cout << "2.���� �ұ�\n";
			cout << "3.������ ���\n";
			cout << "4.������\n";
			cout << "5.���� ����\n";
			cin >> n;
		}
		else if (sel == 2)
		{
			cout << "ȸ�����Դϴ�\n";
			cout << "ȸ���Ͻðڽ��ϱ�?(100G����)\n";
			cout << "1. ��    2. �ƴϿ�\n";
		}
		else
		{
			int heroType = 0, num = 0;
			CObject* pPub[3];
			clrscr();
			cout << "������ ����� ����\n";
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
				cout << i << "�� �����" << endl;
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