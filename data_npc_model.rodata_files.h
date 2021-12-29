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
    undefined * model_name;
    int field_0x10;
    int field_0x14;
    pointer field_0x18;
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
};

