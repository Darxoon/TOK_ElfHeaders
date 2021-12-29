typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct face_entry face_entry, *Pface_entry;

struct face_entry {
    int field_0x0;
    int field_0x4;
    pointer anime_ptr;
    int anime_count;
    int field_0x14;
};

typedef struct anime anime, *Panime;

struct anime {
    pointer P_KURC_anime0;
    pointer field_0x8;
};

typedef struct state_number state_number, *Pstate_number;

struct state_number {
    int field_0x0;
    int field_0x4;
    pointer face0_ptr;
    int field_0x10;
    int field_0x14;
};

