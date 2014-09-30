#include "ArbreDeRendu/ArbreDeRendu.h"

enum TypeScene {SceneMenu, SceneSimulateur, SceneConfiguration, NbDeScenes};

class Scene
{
public:
	Scene();
	~Scene();
private:
	ArbreDeRendu* _arbre;
};

