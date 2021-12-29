typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct ModelFiles ModelFiles, *PModelFiles;

struct ModelFiles {
    pointer model_folder;
    pointer model_name;
    pointer field_0x10;
    int field_0x18;
    int field_0x1c;
    int field_0x20;
    int field_0x24;
};

typedef struct ModelState ModelState, *PModelState;

struct ModelState {
    pointer description;
    pointer substate_arr;
    int substate_amount;
    int field_0x14;
};

typedef struct NpcModel NpcModel, *PNpcModel;

struct NpcModel {
    pointer model_id;
    float field_0x8;
    float field_0xc;
    float field_0x10;
    word field_0x14;
    word field_0x16;
    word field_0x18;
    word field_0x1a;
    int field_0x1c;
    int field_0x20;
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
    float field_0x54;
    float field_0x58;
    float field_0x5c;
    float field_0x60;
    float field_0x64;
    int field_0x68;
    int field_0x6c;
    pointer model_files_ptr;
    int model_files_count;
    int field_0x7c;
    pointer state_ptr;
    int state_count_maybe;
    int field_0x8c;
};

