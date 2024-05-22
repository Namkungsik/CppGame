#ifndef __OBJATTACK_H_
#define __OBJATTACK_H_

#include "CObject.h"

class CObjAttack : public virtual CObject
{
public:
	CObjAttack();
	~CObjAttack();

	int AttackToEnemy(CObject* pTarget);
};

#endif