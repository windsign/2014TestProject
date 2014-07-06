#include "FinitState.h"
#include <stdio.h>

void CState_Wait::Active()
{
	printf("%s 's Active\n", GetName());
}

void CState_Wait::Update()
{
}

void CState_Wait::Exit()
{
}

void CState_Run::Active()
{
}

void CState_Run::Update()
{
}

void CState_Run::Exit()
{
}

void CState_RunStop::Active()
{
}

void CState_RunStop::Update()
{
}

void CState_RunStop::Exit()
{
}
