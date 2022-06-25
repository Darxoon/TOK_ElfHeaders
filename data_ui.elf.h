typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct menu menu, *Pmenu;

typedef struct menu_header menu_header, *Pmenu_header;

struct menu_header {
    pointer s_menuData;
    pointer field1_0x8;
    long field2_0x10;
    long field3_0x18;
    pointer field4_0x20;
    pointer field5_0x28;
    pointer field6_0x30;
    long field7_0x38;
    long field8_0x40;
    long field9_0x48;
    long field10_0x50;
    long field11_0x58;
    long field12_0x60;
    long field13_0x68;
    long field14_0x70;
    long field15_0x78;
};

struct menu {
    struct menu_header s_menuData;
    pointer field1_0x80[32];
};

typedef struct model model, *Pmodel;

struct model {
    pointer s_uiModelData;
    pointer field1_0x8;
    pointer field2_0x10;
    int field3_0x18;
    int field4_0x1c;
    int field5_0x20;
    int field6_0x24;
};

typedef struct msg msg, *Pmsg;

struct msg {
    pointer s_uiMessageData;
    pointer field1_0x8;
    pointer field2_0x10;
    pointer field3_0x18;
    pointer field4_0x20;
    pointer field5_0x28;
    pointer field6_0x30;
    float field7_0x38;
    float field8_0x3c;
    float field9_0x40;
    float field10_0x44;
    float field11_0x48;
    float field12_0x4c;
    float field13_0x50;
    int field14_0x54;
    int field15_0x58;
    int field16_0x5c;
    int field17_0x60;
    int field18_0x64;
    int field19_0x68;
    int field20_0x6c;
    pointer field21_0x70;
    int field22_0x78;
    int field23_0x7c;
};

typedef struct model_property model_property, *Pmodel_property;

struct model_property {
    pointer id;
    undefined * type;
    int field2_0x10;
    int field3_0x14;
    int field4_0x18;
    int field5_0x1c;
    float field6_0x20;
    int field7_0x24;
    int field8_0x28;
    int field9_0x2c;
    pointer field10_0x30;
    int field11_0x38;
    int field12_0x3c;
};

typedef struct seamap_item seamap_item, *Pseamap_item;

struct seamap_item {
    pointer s_uiSeaMapData;
    pointer field1_0x8;
    int field2_0x10;
    int field3_0x14;
    int field4_0x18;
    int field5_0x1c;
    pointer field6_0x20;
    int field7_0x28;
    int field8_0x2c;
    int field9_0x30;
    int field10_0x34;
    pointer field11_0x38;
    int field12_0x40;
    int field13_0x44;
    int field14_0x48;
    int field15_0x4c;
};

typedef struct sell_item sell_item, *Psell_item;

struct sell_item {
    pointer field0_0x0;
    int field1_0x8;
    int field2_0xc;
    int field3_0x10;
    int field4_0x14;
    int field5_0x18;
    int field6_0x1c;
    int field7_0x20;
    int field8_0x24;
    pointer field9_0x28;
    int field10_0x30;
    int field11_0x34;
    pointer field12_0x38;
    pointer field13_0x40;
    int field14_0x48;
    int field15_0x4c;
    pointer field16_0x50;
    int field17_0x58;
    int field18_0x5c;
    int field19_0x60;
    int field20_0x64;
    int field21_0x68;
    int field22_0x6c;
};

typedef struct shop shop, *Pshop;

struct shop {
    pointer s_shopData;
    pointer field1_0x8;
    int field2_0x10;
    int field3_0x14;
};

