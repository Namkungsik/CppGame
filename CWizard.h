#include "CObjAttack.h"
#include "HeroNumber.h"

class CWizard : public CObjAttack
{
public:
	CWizard(int mHp, int mLevel, int mExp, int mAtk, int mMAtk, int mDef,
		int mHeroNum, bool bAttack, bool bUseHeal);
	CWizard();
	~CWizard();

	bool Attack(CObject* pTarget);

	void DisplayState(void);

private:
	bool DoAttack(CObject* pTarget);

	//int m_nHeroNum;
};
