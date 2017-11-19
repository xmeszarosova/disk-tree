#pragma once

#include "tree_Folder.h"

namespace tree
{
	std::unique_ptr<Folder> ParseDisk(rapidjson::Value & json);
}
