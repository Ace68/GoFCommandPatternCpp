#pragma once
#include "IReceiver.h"

class Calculator : public IReceiver
{
	int x_;
	int y_;
	TYPES::ACTION_LIST currentAction;

public:

	Calculator(int x, int y)
		:x_(x), y_(y)
	{
	}

	void SetAction(TYPES::ACTION_LIST action)
	{
		currentAction = action;
	}

	int GetResult()
	{
		int result;
		if (currentAction == TYPES::ACTION_LIST::ADD)
        {
            result = x_ + y_;

        }
		else if (currentAction == TYPES::ACTION_LIST::MULTIPLY)
        {
            result = x_ * y_;
        }
        else
        {
            result = x_ - y_;
        }
        return result;
	}
};
