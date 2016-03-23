#ifndef CANEVA_H
#define CANEVA_H

#include <string>
#include <json/json.h>
#include "components/block.h"

class Caneva
{
public:
    Caneva(std::string filename);
    ~Caneva();

private:
    void loadFile(std::string filename);
    void createBlocks();

    std::vector<Block*> blocks;

    Json::Reader reader;
    std::string filename;
    Json::Value root;
};

#endif // CANEVA_H