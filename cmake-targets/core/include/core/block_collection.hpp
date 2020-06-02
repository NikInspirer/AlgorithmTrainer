
#include <inttypes.h>
#include <QSharedPointer>
#include <QVector>

class AbstractBlock;

/**
 * @brief Коллекция блоков алгоритма, которая предоставляет методы для их
 *        добавления, удаления и получения по индексу.
 */
class BlockCollection {
public:
    BlockCollection() = default;
    ~BlockCollection() = default;

    size_t size() const;
    QSharedPointer<AbstractBlock> getBlock(uint64_t index) const;

    void prepend(QSharedPointer<AbstractBlock> block);
    void append(QSharedPointer<AbstractBlock> block);
    void insert(uint64_t index, QSharedPointer<AbstractBlock> block);
    void remove(uint64_t index);

private:
    QVector<QSharedPointer<AbstractBlock>> m_collection;  //< Коллекция блоков.
};
