typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned short    word;
typedef struct NPC NPC, *PNPC;

typedef struct Vector3 Vector3, *PVector3;

struct Vector3 { /* A 3-dimensional vector */
    float x;
    float y;
    float z;
};

struct NPC { /* An interactable character */
    pointer level_str;
    pointer obj_str;
    pointer shape_str;
    struct Vector3 pos;
    float field_0x24;
    int field_0x28;
    int field_0x2c;
    pointer enemy_encounter_str;
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
    int field_0xac;
    int field_0xb0;
    int field_0xb4;
    float field_0xb8;
    int field_0xbc;
    int field_0xc0;
    int field_0xc4;
    pointer init_function_str;
    int field_0xd0;
    int field_0xd4;
    int field_0xd8;
    int field_0xdc;
    pointer talk_function_str;
    int field_0xe8;
    int field_0xec;
    int field_0xf0;
    int field_0xf4;
    int field_0xf8;
    int field_0xfc;
};

