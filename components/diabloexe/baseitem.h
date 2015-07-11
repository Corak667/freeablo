#ifndef ITEM_H
#define ITEM_H
#include <stdint.h>

#include <string>
#include <map>
#include <faio/faio.h>



namespace DiabloExe
{
    struct BaseItem
    {
    public:
        uint32_t activTrigger;

        uint8_t itemType;
        uint8_t equipLoc;

        uint8_t unknown0;
        uint8_t unknown1;

        uint32_t graphicValue;

        uint8_t itemCode;
        uint8_t uniqCode;

        uint8_t unknown2;
        uint8_t unknown3;

        std::string itemName;
        std::string itemSecondName;
        uint32_t qualityLevel;
        uint32_t durability;
        uint32_t minAttackDamage;
        uint32_t maxAttackDamage;
        uint32_t minArmourClass; // LONG LIVE OUR GLORIOUS QUEEN
        uint32_t maxArmourClass;

        uint8_t  reqStr;
        uint8_t  reqMagic;
        uint8_t  reqDex;
        uint8_t  reqVit;

        uint32_t specialEffect;
        uint32_t magicCode;
        uint32_t spellCode;
        uint32_t useOnce;
        uint32_t price1;
        uint32_t price2;

        std::string dump() const;
        BaseItem(){}

    private:
        BaseItem(FAIO::FAFile* exe, size_t codeOffset);
        friend class DiabloExe;


    };



}














#endif // ITEM_H