#include <stdio.h>
#include "FinitState.h"
int main(int argc, char* argv[])
{
	printf("Hello World!\n");
	CState_Wait *a = new CState_Wait;
	CState_Run *b = new CState_Run;
	printf("a's name : %s\n", a->GetName());
	printf("b's name : %s\n", b->GetName());
	a->Active();
	b->Active();
	return 0;
}