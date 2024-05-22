#pragma once
#include "base.h"

class CObject
{
public:
	CObject();
	CObject(CObject* CObj);
	~CObject();

	void Init();
	int GetHp();
	int GetAtk();
	int GetMAtk();
	int GetDef();
	int GetHeroType();

	void SetHp(int nHP);
	void SetAtk(int nAtk);
	void SetMAtk(int nMAtk);
	void SetDef(int nDef);

	void IncreaseHP(int nValue);
	void IncreaseDef(int nValue);
	void Damaged(int nValue);

	bool IsPossibleAttack();
	bool IsPossibleHeal();

	virtual bool Attack(CObject* pTarget) = 0;
	virtual void DisplayState(void);

protected:
	int m_nHP;
	int m_nLEVEL;
	int m_nEXP;
	int m_nAtk;
	int m_nMAtk;
	int m_nDef;
	bool m_bIsPossibleAttack;
	bool m_bIsPossibleHeal;

	int m_nHeroNum;
};