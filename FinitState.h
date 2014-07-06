#ifndef FINITE_STATE_H
#define FINITE_STATE_H

#include <stdio.h>
class CContext;

class CState
{
public:											
	virtual void Active() = 0;								
	virtual void Update() = 0;								
	virtual void Exit() = 0;	
	virtual const char* GetName() = 0;
};

#define STATE(name) class CState_##name	: public CState		\
{												\
public:											\
	CState_##name():m_pContext(0){}				\
	CState_##name(CContext* c):m_pContext(c){}	\
	const char* GetName(){return #name;}		\
	void Active();								\
	void Update();								\
	void Exit();								\
protected:										\
	CContext* m_pContext;						\
};
STATE(Wait)
STATE(Run)
STATE(RunStop)



/*
class CState_Wait		
{												
public:											
	CState_Wait():m_pContext(0){}				
	CState_Wait(CContext* c):m_pContext(c){}	
	const char* GetName(){return "Wait";}		
	void Active();								
	void Update();								
	void Exit();								
protected:										
	CContext* m_pContext;						
};
*/

#endif