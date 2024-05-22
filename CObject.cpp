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
			cout << "Ÿ�� :: ��ƿ��Ƽ ����" << endl;
		else
			cout << "Ÿ�� :: ����" << endl;
	}
	else
	{
		if (IsPossibleHeal())
			cout << "Ÿ�� :: ��ƿ��Ƽ ����" << endl;
		else
			cout << "Ÿ�� :: ����" << endl;
	}
	cout << "���� :: " << m_nLEVEL << endl;
	cout << "����ġ :: " << m_nEXP << endl;
	cout << "ü�� :: " << m_nHP << endl;
	cout << "���ݷ� :: " << m_nAtk << endl;
	cout << "�������ݷ� :: " << m_nMAtk << endl;
	cout << "���� :: " << m_nDef << endl;
	cout << "����� ��ȣ :: " << m_nHeroNum << endl;
}
