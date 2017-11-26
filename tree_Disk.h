#pragma once

#include "tree_Folder.h"

namespace tree
{
	std::unique_ptr<tree::Folder> ParseDisk(rapidjson::Value & json);
}
