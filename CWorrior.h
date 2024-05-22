#include "CObjAttack.h"
#include "HeroNumber.h"

class CWorrior : public CObjAttack
{
public:
	CWorrior(int mHp, int mLevel, int mExp, int mAtk, int mMAtk, int mDef, 
		int mHeroNum, bool bAttack = true, bool bUseHeal = false);
	CWorrior();
	~CWorrior();

	bool Attack(CObject* pTarget);

	void DisplayState(void);

private:
	bool DoAttack(CObject* pTarget);

	//int m_nHeroNum;
};