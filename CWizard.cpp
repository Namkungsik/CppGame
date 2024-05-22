#include "CWizard.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

CWizard::CWizard(int mHp, int mLevel, int mExp, int mAtk, int mMAtk, int mDef,
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

	//m_nHeroNum = HERO_WIZARD;
}

CWizard::CWizard()
{
	m_nHP = 150;
	m_nLEVEL = 1;
	m_nEXP = 0;
	m_nAtk = 0;
	m_nMAtk = rand() % 10 + 10;
	m_nDef = rand() % 1;
	m_bIsPossibleAttack = false;
	m_bIsPossibleHeal = false;

	m_nHeroNum = HERO_WIZARD;
}

CWizard::~CWizard()
{
}

bool CWizard::Attack(CObject* pTarget)
{
	return DoAttack(pTarget);
}

bool CWizard::DoAttack(CObject* pTarget)
{
	int nAtk;

	nAtk = CObjAttack::AttackToEnemy(pTarget);

	return true;
}

void CWizard::DisplayState(void)
{
	cout << "[ ¸¶¹ý»ç ]" << endl;
	CObject::DisplayState();
}
