typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned short    word;
typedef struct BShape BShape, *PBShape;

typedef struct Vector3 Vector3, *PVector3;

struct Vector3 {
    float x;
    float y;
    float z;
};

struct BShape {
    char * level_str;
    char * shape_str;
    struct Vector3 pos;
    struct Vector3 ang;
    int field_28;
    struct Vector3 unk_2C;
    float field_38;
    int field_3C;
    char * field_40;
    int field_48;
    int field_4C;
};

