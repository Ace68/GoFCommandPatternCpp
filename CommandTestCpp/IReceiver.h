#pragma once

namespace TYPES
{
	enum ACTION_LIST
	{
		ADD,
		SUBTRACT,
		MULTIPLY
	};
};

class IReceiver
{
public:
	virtual void SetAction(TYPES::ACTION_LIST action) = 0;
	virtual int GetResult() = 0;	
};
