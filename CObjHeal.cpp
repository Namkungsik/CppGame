#include "CObjHeal.h"

CObjHeal::CObjHeal()
{
}

CObjHeal::~CObjHeal()
{
}

int CObjHeal::HealingToPlayer(CObject* pTarget)
{
	return pTarget->GetMAtk() * 10;
}
