#include "CPaladin.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

CPaladin::CPaladin(int mHp, int mLevel, int mExp, int mAtk, int mMAtk, int mDef,
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

	//m_nHeroNum = HERO_PALADIN;
}

CPaladin::CPaladin()
{
	m_nHP = 300;
	m_nLEVEL = 1;
	m_nEXP = 0;
	m_nAtk = rand() % 10 + 5;
	m_nMAtk = rand() % 10 + 5;
	m_nDef = rand() % 5 + 3;
	m_bIsPossibleAttack = true;
	m_bIsPossibleHeal = true;

	m_nHeroNum = HERO_PALADIN;
}

CPaladin::~CPaladin()
{
}

bool CPaladin::Attack(CObject* pTarget)
{
	return DoAttack(pTarget);
}

bool CPaladin::DoAttack(CObject* pTarget)
{
	int nAtk;

	nAtk = CObjAttack::AttackToEnemy(pTarget);

	return true;
}

bool CPaladin::Heal(CObject* pTarget)
{
	int nDef;

	nDef = CObjHeal::HealingToPlayer(pTarget);
	pTarget->IncreaseDef(nDef);

	return true;
}

void CPaladin::DisplayState(void)
{
	cout << "[ ÆÈ¶óµò ]" << endl;
	CObject::DisplayState();
}