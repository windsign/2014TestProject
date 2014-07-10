#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H

#include <string>
class CContext;
class CPlayerController
{
public:
	void Update(float t);
	CPlayerController();
	void Init(CContext* pContext){m_pContext = pContext;}
private:
	CContext* m_pContext;
};
#endif