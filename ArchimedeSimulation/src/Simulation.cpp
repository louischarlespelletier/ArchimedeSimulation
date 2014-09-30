#include "Simulation.h"

Simulation* Simulation::_instance = 0;

Simulation::Simulation()
{

}


Simulation::~Simulation()
{
	delete _instance;
	_instance = 0;
}

Simulation* Simulation::getInstance()
{
	if (_instance == 0)
		_instance = new Simulation();
	return _instance;
}
