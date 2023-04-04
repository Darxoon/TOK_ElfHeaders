typedef unsigned char   undefined;

typedef struct group group, *Pgroup;

struct group {
    int field0_0x0;
    int index;
    int field2_0x8;
    int field3_0xc;
    int field4_0x10;
    int field5_0x14;
    char name[64];
    int field7_0x58;
    int field8_0x5c;
    int tri_amount;
    int field10_0x64;
    int field11_0x68;
    int field12_0x6c;
    int field13_0x70;
    int field14_0x74;
    int field15_0x78;
};

typedef struct tri tri, *Ptri;

struct tri {
    int field0_0x0;
    int field1_0x4;
    int field2_0x8;
    float field3_0xc;
    float field4_0x10;
    float field5_0x14;
};

typedef struct vec3 vec3, *Pvec3;

struct vec3 {
    float field0_0x0;
    float field1_0x4;
    float field2_0x8;
};

