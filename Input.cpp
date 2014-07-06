#include "Input.h"

void CInput::Flush()
{
	for(int i = 0; i < eBP_All; i++)
	{
		m_bButtonDown[i] = false;
		m_bButtonUp[i] = false;
	}
}