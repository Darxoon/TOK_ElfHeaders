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
typedef struct Item Item, *PItem;

typedef struct Vector3 Vector3, *PVector3;

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Item {
    char * field_0x0;
    char * field_0x8;
    char * field_0x10;
    struct Vector3 field_0x18;
    int field_0x24;
    int field_0x28;
    int field_0x2c;
    int field_0x30;
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
    float field_0x74;
    int field_0x78;
    int field_0x7c;
};

