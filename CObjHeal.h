#ifndef __OBJHEAL_H_
#define __OBJHEAL_H_

#include "CObject.h"

class CObjHeal : public virtual CObject
{
public:
	CObjHeal();
	virtual ~CObjHeal();

	int HealingToPlayer(CObject* pTarget);
};

#endif