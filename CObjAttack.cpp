#include "CObjAttack.h"

CObjAttack::CObjAttack()
{
}

CObjAttack::~CObjAttack()
{
}

int CObjAttack::AttackToEnemy(CObject* pTarget)
{
	if (pTarget->IsPossibleAttack())
		return pTarget->GetAtk();
	else
		return pTarget->GetMAtk();
}
