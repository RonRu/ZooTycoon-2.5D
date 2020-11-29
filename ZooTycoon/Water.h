#pragma once
#include "Terrain.h"

class Water :
	public Terrain
{
public:
	static const std::string NAME;
	Water();
	std::string getPrice() { return m_price; }
private:
	static bool m_registerIt;
	std::string m_price = "60";
};

