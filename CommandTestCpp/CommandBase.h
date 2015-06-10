#pragma once

class CommandBase
{
protected:

	IReceiver *pReciever_;

public:

	CommandBase(IReceiver *reciever)
		:pReciever_(reciever)
	{
	}

	virtual int Execute() = 0;
};
