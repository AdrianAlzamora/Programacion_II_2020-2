#include "ListaPersona.h"
ListaPersona::ListaPersona(){
	listadoPersona = vector<Persona*>();
}
ListaPersona::~ListaPersona(){}
//---------------------------------------------
void ListaPersona::registrarPersona(Persona* persona){
	listadoPersona.push_back(persona);

}
//-----------------------------------------
void ListaPersona::registrarPersona(string n, int e, double p, bool v, char ec){
	Persona* per = new Persona(n, e, p, v, ec);
	listadoPersona.push_back(per);
}
void ListaPersona::eliminarPersona(int Pos){
	vector<Persona*>::iterator it = listadoPersona.begin();
	advance(it, Pos);
	listadoPersona.erase(it);
}
//------------------------------------------
vector<Persona*> ListaPersona::getListadoPersona(){
	return this->listadoPersona;
}
vector<Persona*> ListaPersona::reporte1() {
	vector<Persona*> auxPersona;
	for (Persona* p : listadoPersona){
		if (p->getAge() < 15) {
			auxPersona.push_back(p);
		}
	}
	return auxPersona;
}
void ListaPersona::initListaPersona(){
	Persona* per;
	for (int i = 0; i < 10; i++)
	{
		per = new Persona();
		string no = "Nombre" + to_string(i + 1);
		int ed = rand()%90+10;
		double pe = 50 + (i % 2 == 0 ? (i * 2 + 1) : (i * 2));
		bool vi = (i % 2 == 0 ? true : false);
		char ec = rand()%90+67;

		per->setName(no);
		per->setAge(ed);
		per->setPeso(pe);
		per->setVive(vi);
		per->setEstadoCivil(ec);

		registrarPersona(per);
	}
}