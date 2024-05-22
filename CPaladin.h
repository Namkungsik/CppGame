#include "CObjHeal.h"
#include "CObjAttack.h"
#include "HeroNumber.h"

class CPaladin : public CObjAttack, public CObjHeal
{
public:
	CPaladin(int mHp, int mLevel, int mExp, int mAtk, int mMAtk, int mDef,
		int mHeroNum, bool bAttack, bool bUseHeal);
	CPaladin();
	~CPaladin();

	bool Attack(CObject* pTarget);
	
	void DisplayState(void);

private:
	bool DoAttack(CObject* pTarget);
	bool Heal(CObject* pTarget);

	//int m_nHeroNum;
};