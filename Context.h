#ifndef CONTEXT_H
#define CONTEXT_H

#include "StateEnum.h"
#include <string>
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
	
	void SetAttack(const std::string& attackKey);
	void ShouldGroundControl();
	void ShouldAttack();
private:
	bool 		m_bChangeState;
	CState* 	m_pStates[ALL];
	CEntity* 	m_pEnitty;
	std::string m_strAttackKey;
	EState 		m_eCurState;
};

#endif