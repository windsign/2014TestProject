#ifndef ATTACKTABLE_H
#define ATTACKTABLE_H

#include <string>
#include "GameType.h"
#include "StateEnum.h"
#include <vector>

struct CAttack
{
	std::string m_Name;
	std::string m_Animation;
	EWeaponType m_eWeaponType;
	EState		m_eState;
	int 		m_iMP;
};

struct CAttackTable
{
	std::vector<CAttack> m_vAttacks;
};


#endif
