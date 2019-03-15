#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

class implementor
{
public:
	virtual ~implementor(){}
	virtual void PowerOn() = 0;
	virtual void PowerOff() = 0;
};

#endif
