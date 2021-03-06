#pragma once

#include "cmd_defs.h"

#include <ostream>

namespace tree
{
	class Node;
}

namespace cmd
{
	Handler Help(const Options & options);
	bool Quit(tree::Node *, std::ostream & out);

	Handler Size(const Options & options);
	Handler List(const Options & options);
	Handler Remove(const Options & options);
	Handler MkDir(const Options & options);
	//Handler Touch(const Options & options);
}
