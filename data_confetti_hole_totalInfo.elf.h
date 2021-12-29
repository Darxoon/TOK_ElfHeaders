typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned short    word;
typedef struct data data, *Pdata;

struct data {
    int data;
    int field_0x4;
    int field_0x8;
    int field_0xc;
    pointer field_0x10;
};

typedef struct list list, *Plist;

struct list {
    pointer id;
    int field_0x8;
    float field_0xc;
    float field_0x10;
    int field_0x14;
};

typedef struct mapList mapList, *PmapList;

struct mapList {
    pointer mapList;
    int field_0x8;
    float field_0xc;
    pointer field_0x10;
};

