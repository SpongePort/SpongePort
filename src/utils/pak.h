
#ifndef __PAK_PAK_H__
#define __PAK_PAK_H__

struct pakHeader
{
    char ident[4];
    int tableOffset;
    int tableSize;
};

struct pakEntry
{
    char name[56];
    int offset;
    int size;
};


#endif	
