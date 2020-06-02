#ifndef GUARD_DUNGEON_H
#define GUARD_DUNGEON_H

struct DungeonName
{
    const u8 *name1;
    const u8 *name2;
};

struct Dungeon
{
    u8 stairDirection;
    u8 unk1;
    u8 unk2;
    s8 unk3;
    u8 maxItemCount;
    u8 maxPartySize;
    u8 levelCondition;
    u8 moneyCondition;
    u8 unk8;
    u8 unk9;
    u8 saveBeforeEntering;  //whether to quicksave or not before entering
    u8 unkB;
    s16 unkC;
    s16 unkE;
};

extern struct Dungeon gDungeons[];
extern struct DungeonName gDungeonNames[];

#endif //GUARD_DUNGEON_H