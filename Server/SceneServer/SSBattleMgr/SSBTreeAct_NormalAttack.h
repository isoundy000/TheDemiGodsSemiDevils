/*
* file name			:SSBTreeAct_NormalAttack.h
* file mark			:
* summary			:
*
* version			:1.0
* author			:LiuLu
* complete date		:November 11 2014
* summary			:
*
*/
#pragma once
#include "stdafx.h"
#include "SSBTreeAction.h"

namespace SceneServer{
	class CSSHero;

	class CSSBTreeAct_NormalAttack : public CSSBTreeAction{
	private:

	public:
		CSSBTreeAct_NormalAttack(INT32 id, INT32 parameters[]):CSSBTreeAction(id,parameters){}
		~CSSBTreeAct_NormalAttack(){};

		BOOLEAN	Action(CSSAI_HeroRobot* pAI);
	};

};