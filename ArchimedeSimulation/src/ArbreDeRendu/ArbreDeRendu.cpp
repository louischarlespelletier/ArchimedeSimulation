#include "ArbreDeRendu.h"


ArbreDeRendu::ArbreDeRendu()
{
}


ArbreDeRendu::~ArbreDeRendu()
{
}

void ArbreDeRendu::afficher()
{
}

void ArbreDeRendu::accepterVisiteur(VisiteurAbstrait& v)
{
	v.traiterArbreDeRendu(*this);
}


