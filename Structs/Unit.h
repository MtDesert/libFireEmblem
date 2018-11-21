#ifndef UNIT_H
#define UNIT_H

#include"ChessPiece.h"

//单位能力,主要为会随着升级而上升的能力
struct UnitAbility{
	uint8 mhp;//max HP最大生命点
	uint8 pow;//power力量
	uint8 mgc;//magic魔力
	uint8 skl;//skill技术
	uint8 spd;//speed速度
	uint8 lck;//luck幸运
	uint8 def;//defence防御
	uint8 mdf;//magic defence魔防
};

struct Item{
	uint8 makePlace;//产地,可能产自不同大陆
	uint8 id;//物品ID,表明这是什么物品
	uint8 amount;//数量,也代表武器的耐久度
};

//火焰纹章的作战单位,保存每个单位的状态属性
struct Unit:public ChessPiece<uint8,uint8>{//兵种,势力
	//主要结构
	uint16 name,headImage;//名字,头像
	uint8 level,exp;//等级,经验
	uint8 hp;//当前生命点
	UnitAbility ability;//当前能力值
	UnitAbility growth;//成长率
	Item items[8];//持有物
};

#endif // UNIT_H