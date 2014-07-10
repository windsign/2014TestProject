#include "Context.h"
#include "FinitState.h"


void CContext::Init()
{

	m_pStates[Wait] = new CState_Wait(this);
	m_pStates[Run] = new CState_Run(this);
	m_pStates[RunStop] = new CState_RunStop(this);


}

void CContext::ChangeState(EState newState)
{
	m_bChangeState = true;
	
	m_eCurState = newState;
	//change the speed
	
	
	//
}

void CContext::ShouldGroundControl()
{

}

void CContext::ShouldAttack()
{

}

void CContext::Update()
{
	if(m_bChangeState){
		m_pStates[m_eCurState]->Active();
		m_bChangeState = false;
	}else{
		m_pStates[m_eCurState]->Update();
	}
}

void CContext::SetAttack(const std::string& attackKey)
{
	m_strAttackKey = attackKey;
}