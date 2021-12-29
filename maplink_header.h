typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct MapLink MapLink, *PMapLink;

struct MapLink {
    pointer level_str;
    int field_0x8;
    int field_0xc;
    pointer nodes_start;
    int field_0x18;
    int field_0x1c;
    int field_0x20;
    int field_0x24;
    int field_0x28;
    int field_0x2c;
};

