#include "CObject.h"
#include <iostream>

using namespace std;

CObject::CObject()
{
	Init();
}

CObject::CObject(CObject* CObj)
{
	m_nHP = CObj->m_nHP;
	m_nEXP = CObj->m_nEXP;
	m_nLEVEL = CObj->m_nLEVEL;
	m_nAtk = CObj->m_nAtk;
	m_nMAtk = CObj->m_nMAtk;
	m_nDef = CObj->m_nDef;
	m_bIsPossibleAttack = CObj->m_bIsPossibleAttack;
	m_bIsPossibleHeal = CObj->m_bIsPossibleHeal;
}

CObject::~CObject()
{
}

void CObject::Init()
{
	m_nHP = 0;
	m_nEXP = 0;
	m_nLEVEL = 1;
	m_nAtk = 0;
	m_nMAtk = 0;
	m_nDef = 0;
	m_bIsPossibleAttack = true;
	m_bIsPossibleHeal = false;

	m_nHeroNum = 0;
}

int CObject::GetHp()
{
	return m_nHP;
}

int CObject::GetAtk()
{
	return m_nAtk;
}

int CObject::GetMAtk()
{
	return m_nMAtk;
}

int CObject::GetDef()
{
	return m_nDef;
}

int CObject::GetHeroType()
{
	return m_nHeroNum;
}

void CObject::SetHp(int nHP)
{
	m_nHP = nHP;
}

void CObject::SetAtk(int nAtk)
{
	m_nAtk = nAtk;
}

void CObject::SetMAtk(int nMAtk)
{
	m_nMAtk = nMAtk;
}

void CObject::SetDef(int nDef)
{
	m_nDef = nDef;
}

void CObject::IncreaseHP(int nValue)
{
	if (nValue > 0 && nValue < 1000) m_nHP += nValue;
}

void CObject::IncreaseDef(int nValue)
{
	m_nDef += nValue;
}

void CObject::Damaged(int nValue)
{
	if (nValue > 0 && nValue < 1000) m_nHP -= nValue;
	if (m_nHP < 0) m_nHP = -1;
}

bool CObject::IsPossibleAttack()
{
	return m_bIsPossibleAttack;
}

bool CObject::IsPossibleHeal()
{
	return m_bIsPossibleHeal;
}

void CObject::DisplayState(void)
{
	if (IsPossibleAttack())
	{
		if (IsPossibleHeal())
			cout << "타입 :: 유틸리티 공격" << endl;
		else
			cout << "타입 :: 공격" << endl;
	}
	else
	{
		if (IsPossibleHeal())
			cout << "타입 :: 유틸리티 마법" << endl;
		else
			cout << "타입 :: 마법" << endl;
	}
	cout << "레벨 :: " << m_nLEVEL << endl;
	cout << "경험치 :: " << m_nEXP << endl;
	cout << "체력 :: " << m_nHP << endl;
	cout << "공격력 :: " << m_nAtk << endl;
	cout << "마법공격력 :: " << m_nMAtk << endl;
	cout << "방어력 :: " << m_nDef << endl;
	cout << "히어로 번호 :: " << m_nHeroNum << endl;
}
