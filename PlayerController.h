#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H

#include <string>

class CPlayerController
{
public:
	void Update(float t);
	CPlayerController();
private:
	std::string m_strAttackKey;
};
#endif