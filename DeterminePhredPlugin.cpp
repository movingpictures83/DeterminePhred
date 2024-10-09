#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "DeterminePhredPlugin.h"

void DeterminePhredPlugin::input(std::string file) {
 inputfile = file;
}

void DeterminePhredPlugin::run() {}

void DeterminePhredPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "determine-phred";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<DeterminePhredPlugin> DeterminePhredPluginProxy = PluginProxy<DeterminePhredPlugin>("DeterminePhred", PluginManager::getInstance());
