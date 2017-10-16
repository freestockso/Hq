#ifndef BLOCKDATA_H
#define BLOCKDATA_H

#include <QString>
#include <QObject>
#include <QColor>

class BlockData;
typedef QList<BlockData*>        BlockDataList;

typedef enum BlockType
{
    BLOCK_NONE= 0,
    BLOCK_GN,
    BLOCK_HY,
    BLOCK_DQ,
    BLOCK_USER,
}BLOCKTYPE;

class BlockData
{
public:
    BlockData();
    ~BlockData();
    static BlockDataList BlockDataListFromCodesList(const QStringList& codes);
    static QStringList   BlockCodsListFromBlockData(const BlockDataList& list);
public:
    QString             mName;
    QString             mCode;
    double              mChangePer;
    QString             mTopShareCode;
    QString             mTopShareName;
    double              mTopShareChangePer;
    QStringList         mShareCodeList;
    bool                mIsFav;

public:
    bool operator <(const BlockData& other)
    {
        return this->mChangePer < other.mChangePer;
    }

    bool operator >(const BlockData& other)
    {
        return this->mChangePer  > other.mChangePer;
    }

    bool operator ==(const BlockData& other)
    {
        return this->mCode == other.mCode;
    }

};

Q_DECLARE_METATYPE(BlockData)




#endif // BLOCKDATA_H