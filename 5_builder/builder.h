#ifndef BUILER_H
#define BUILER_H

#include "abstract_builder.h"

class ThinkPadBuilder: public AbstractBuilder
{
public:
	ThinkPadBuilder() {m_pComputer = new Computer();}
	void BuildCpu() {m_pComputer->setCpu("i5-6200U");}
	void BuildMainBoard() {m_pComputer->setMainBoard("Intel DH57DD");}
	void BuildRam() {m_pComputer->setRam("DDR4");}
	void BuildVideoCard() {m_pComputer->setVideoCard("NVIDIA Geforce 920MX");}
	Computer *GetProduct() {return m_pComputer;}

private:
	Computer *m_pComputer;
};


class YogaBuilder: public AbstractBuilder
{
public:
	YogaBuilder() {m_pComputer = new Computer();}
	void BuildCpu() {m_pComputer->setCpu("i7-7500U");}
	void BuildMainBoard() {m_pComputer->setMainBoard("Intel DP55KG");}
	void BuildRam() {m_pComputer->setRam("DDR5");}
	void BuildVideoCard() {m_pComputer->setVideoCard("NVIDIA GeForce 940MX");}
	Computer *GetProduct() {return m_pComputer;}

private:
	Computer *m_pComputer;
};

#endif
