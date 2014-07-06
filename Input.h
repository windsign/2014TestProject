#ifndef INPUT_H
#define INPUT_H

enum EBtnPressed
{
	eBP_Up,
	eBP_Down,
	eBP_Left,
	eBP_Right,
	eBP_Attack,
	eBP_Jump,
	eBP_All
};

enum EBtnClick
{
	eBC_Attack,
	eBC_Jump
};

class CInput
{
public:
	void Flush();
	bool m_bButtonDown[eBP_Jump];
	bool m_bButtonUp[eBP_Jump];
};


#endif