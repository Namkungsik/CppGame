#ifndef __OBJBUFF_H_
#define __OBJBUFF_H_

#include "CObject.h"

class CObjBuff : public virtual CObject
{
public:
	CObjBuff();
	virtual ~CObjBuff();

	int BuffToPlayer(CObject* pTarget);
};
#endif
