
#include <QSharedPointer>
#include <QVector>
#include <core/management/with_uuid.hpp>

class AbstractBlock;

/**
 * @brief Коллекция блоков, которая предоставляет методы для их добавления,
 *        удаления и получения по индексу.
 *
 * Коллекция блоков является аналогом безразмерного одномерного массива, в
 * котором хранятся указатели на блоки. Индексация блоков начинается с 0 без
 * пропущенных позиций в середине. Индексы при доступе к блокам должны быть
 * больше 0, но не больше размера коллекции.
 *
 * Коллекция блоков наследуется от WithUuid, поэтому имеет UUID.
 */
class BlockCollection : public WithUuid {
public:
    BlockCollection() = default;
    ~BlockCollection() = default;

    int size() const;
    QSharedPointer<AbstractBlock> getBlock(int index) const;

    void prepend(QSharedPointer<AbstractBlock> block);
    void append(QSharedPointer<AbstractBlock> block);
    void insert(int index, QSharedPointer<AbstractBlock> block);
    void remove(int index);

private:
    QVector<QSharedPointer<AbstractBlock>> m_collection;  //< Коллекция блоков.
};
