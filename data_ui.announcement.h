typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct announcement announcement, *Pannouncement;

struct announcement {
    int s_announceData;
    int field1_0x4;
    pointer field2_0x8;
    pointer field3_0x10;
    pointer field4_0x18;
    int field5_0x20;
    int field6_0x24;
    int field7_0x28;
    int field8_0x2c;
};

typedef struct announcementExclude announcementExclude, *PannouncementExclude;

struct announcementExclude {
    pointer s_announceExcludeData;
    int field1_0x8;
    int field2_0xc;
    int field3_0x10;
    int field4_0x14;
};

