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
}

void CContext::Update()
{

}
