///////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : Simulation.h
///	Description : Classe principale du simulateur Archimède
///	Créé le : 29/09/14
///	Modifié le : 29/09/14
///	Modifié par : C. Emond
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <map>
#include "Scenes/Scene.h"

using namespace std;

class Simulation
{
public:
	~Simulation();
	static Simulation* getInstance();
private:
	Simulation();
	static Simulation* _instance;
	map<TypeScene, Scene*> _scenes;
	Scene* _sceneCourante;
};

