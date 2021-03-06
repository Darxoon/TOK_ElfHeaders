typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned short    word;
typedef struct Mobj Mobj, *PMobj;

typedef struct Vector3 Vector3, *PVector3;

struct Vector3 { /* A 3-dimensional vector using floats */
    float x;
    float y;
    float z;
};

struct Mobj { /* A placeable object */
    pointer level_str;
    pointer obj_str;
    pointer shape_str;
    struct Vector3 pos;
    struct Vector3 ang;
    bool field_0x30;
    byte field_0x31;
    byte field_0x32;
    byte field_0x33;
    int field_0x34;
    int field_0x38;
    int field_0x3c;
    int field_0x40;
    int field_0x44;
    int field_0x48;
    int field_0x4c;
    int field_0x50;
    int field_0x54;
    int field_0x58;
    int field_0x5c;
    int field_0x60;
    int field_0x64;
    int field_0x68;
    int field_0x6c;
    int field_0x70;
    int field_0x74;
    int field_0x78;
    int field_0x7c;
    int field_0x80;
    int field_0x84;
    int field_0x88;
    int field_0x8c;
    int field_0x90;
    int field_0x94;
    int field_0x98;
    int field_0x9c;
    int field_0xa0;
    int field_0xa4;
    int field_0xa8;
    float field_0xac;
    int field_0xb0;
    int field_0xb4;
    int field_0xb8;
    int field_0xbc;
    int field_0xc0;
    int field_0xc4;
    int field_0xc8;
    int field_0xcc;
    int field_0xd0;
    int field_0xd4;
    float field_0xd8;
    int field_0xdc;
    int field_0xe0;
    int field_0xe4;
    int field_0xe8;
    int field_0xec;
    int field_0xf0;
    int field_0xf4;
    int field_0xf8;
    int field_0xfc;
    int field_0x100;
    int field_0x104;
    int field_0x108;
    int field_0x10c;
    int field_0x110;
    int field_0x114;
    int field_0x118;
    int field_0x11c;
    int field_0x120;
    int field_0x124;
    int field_0x128;
    int field_0x12c;
    int field_0x130;
    int field_0x134;
    int field_0x138;
    int field_0x13c;
    int field_0x140;
    int field_0x144;
    int field_0x148;
    int field_0x14c;
    int field_0x150;
    int field_0x154;
    int field_0x158;
    int field_0x15c;
    int field_0x160;
    int field_0x164;
    int field_0x168;
    int field_0x16c;
    int field_0x170;
    int field_0x174;
};

