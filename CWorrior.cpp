#include "CWorrior.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

CWorrior::CWorrior(int mHp, int mLevel, int mExp, int mAtk, int mMAtk, int mDef,
	int mHeroNum, bool bAttack, bool bUseHeal)
{
	m_nHP = mHp;
	m_nLEVEL = mLevel;
	m_nEXP = mExp;
	m_nAtk = mAtk;
	m_nMAtk = mMAtk;
	m_nDef = mDef;
	m_nHeroNum = mHeroNum;
	m_bIsPossibleAttack = bAttack;
	m_bIsPossibleHeal = bUseHeal;

	//m_nHeroNum = HERO_WORRIOR;
}

CWorrior::CWorrior()
{
	m_nHP = 250;
	m_nLEVEL = 1;
	m_nEXP = 0;
	m_nAtk = rand() % 10 + 10;
	m_nMAtk = 0;
	m_nDef = rand() % 3;
	m_bIsPossibleAttack = true;
	m_bIsPossibleHeal = false;
	m_nHeroNum = HERO_WORRIOR;
}

CWorrior::~CWorrior()
{
}

bool CWorrior::Attack(CObject* pTarget)
{
	return DoAttack(pTarget);
}

bool CWorrior::DoAttack(CObject* pTarget)
{
	int nAtk;

	nAtk = CObjAttack::AttackToEnemy(pTarget);

	return true;
}

void CWorrior::DisplayState(void)
{
	cout << "[ ภüป็ ]";
	CObject::DisplayState();
}

