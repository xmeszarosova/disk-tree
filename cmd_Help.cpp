#include "headers.h"
#include "cmd_Handlers.h"
#include <iostream>
#ifdef _DEBUG
#define new DBG_NEW
#endif
#include "cmd_Parse.h"
#include "tree_Node.h"
using namespace cmd;
using namespace tree;

Handler cmd::Help(const Options & options)
{
	//todo: print command help
	return[command = options.path](Node * node, std::ostream & out)
	{
		
		if (command == "")
			out << "Prikazy:\nquit\nlist [-follow] [-recursive] [path]\nsize [-follow] [-recursive] [path]\ntree [path]\ndump [path]\nrm <path>\nmkdir <path>" << std::endl;
		else if (command == "quit")
			out << "Ukoncenie aplikaciu" << std::endl;
		else if (command == "list")
			out << "Vypis adresara/ path alebo adresara/ default" << std::endl;
		else if (command == "size")
			out << "Vypis velkosti suboru/adresara" << std::endl;
		else if (command == "tree")
			out << "Zobrazenie štrukturu pre cestu alebo pre hlavny adresar" << std::endl;
		else if (command == "dump")
			out << "Vypis cestu " << std::endl;
		else if (command == "rm")
			out << "Zmazanie suboru/adresara/odkazu." << std::endl;
		else if (command == "mkdir")
			out << "Vytvorenie adresara" << std::endl;
		//else if (command == "touch")
			//out << "Vytvorenie suboru" << std::endl;
		else
			out << "Prikaz neexistuje" << std::endl;

		return true;
	};
}
