#ifndef DBWRITEBLOCK_H
#define DBWRITEBLOCK_H

#include "../block.h"
const int freq=50;
class DBWriteBlock : public Block
{
    public:
        DBWriteBlock();
        ~DBWriteBlock();
        void work();
};

#endif // DBWRITEBLOCK_H
