#ifndef CONTEXT_H
#define CONTEXT_H

#include "StateEnum.h"
#include <vector>
class CState;
class CEntity;
class CContext
{
public:
	CContext():m_pEnitty(0){}
	CContext(CEntity* pe):m_pEnitty(pe){}
	
	void Init();
	void ChangeState(EState newState);
	void Update();	

private:
	bool m_bChangeState;
	CState* m_pStates[ALL];
	CEntity* m_pEnitty;
};

#endif