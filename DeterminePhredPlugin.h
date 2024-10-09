#ifndef DETERMINEPHREDPLUGIN_H
#define DETERMINEPHREDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class DeterminePhredPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "DeterminePhred";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
