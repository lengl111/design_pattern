#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;


class Computer
{
public:
	void setCpu(string cpu)
	{
		m_cpu = cpu;
	}
	
	void setMainBoard(string mb)
	{
		m_mainBoard = mb;
	}

	void setRam(string ram)
	{
		m_ram = ram;
	}
	
	void setVideoCard(string vc)
	{
		m_videoCard = vc;
	}

	string getCpu() {return m_cpu;}
	string getMainBoard() {return m_mainBoard;}
	string getRam() {return m_ram;}
	string getVideoCard() {return m_videoCard;}
private:
	string m_cpu;
	string m_mainBoard;
	string m_ram;
	string m_videoCard;

};


#endif
