#pragma once
#include "CommandBase.h"
#include "IReceiver.h"

class AddCommand : public CommandBase
{
public:
	AddCommand(IReceiver *reciever)
		: CommandBase(reciever)
	{

	}

	int Execute()
	{
		pReciever_->SetAction(TYPES::ACTION_LIST::ADD);
		return pReciever_->GetResult();
	}
};

class SubtractCommand : public CommandBase
{
public:
	SubtractCommand(IReceiver *reciever)
		: CommandBase(reciever)
	{

	}

	int Execute()
	{
		pReciever_->SetAction(TYPES::ACTION_LIST::SUBTRACT);
		return pReciever_->GetResult();
	}
};

class MultiplyCommand : public CommandBase
{
public:
	MultiplyCommand(IReceiver *reciever)
		: CommandBase(reciever)
	{

	}

	int Execute()
	{
		pReciever_->SetAction(TYPES::ACTION_LIST::MULTIPLY);
		return pReciever_->GetResult();
	}
};
