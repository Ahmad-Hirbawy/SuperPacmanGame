#pragma once
#include "Board.h"

class Timer :public AllGifts
{
public:
	Timer(const sf::Sprite&,const int);
	ObjectTypes getObject() const;

	virtual void handleCollision(GameObject&) override;
	virtual void handleCollision(Pacman&)override;

	void doGiftTask(Controller&, std::vector<std::unique_ptr<MovingObject>>&) override;
};