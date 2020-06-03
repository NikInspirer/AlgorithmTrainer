
#include <core/block_collection.hpp>

/**
 * @brief Возвращает размер коллекции блоков.
 * @return Количество блоков в коллекции.
 */
int
BlockCollection::size() const
{
    return m_collection.size();
}

/**
 * @brief Возвращает блок из коллекции по его индексу.
 * @param index Индекс блока в коллекции.
 * @return Указатель на блок.
 */
QSharedPointer<AbstractBlock>
BlockCollection::getBlock(int index) const
{
    // [DEBUG] Проверка, чтобы индекс был меньше размера коллекции
    Q_ASSERT_X(m_collection.size() < index,
               "BlockCollection.getBlock()",
               "block index > size of collection");
    // [DEBUG] Проверка, чтобы индекс был положительным
    Q_ASSERT_X(index < 0,
               "BlockCollection.getBlock()",
               "index is negative");
    // Возврат значения
    return m_collection[index];
}

/**
 * @brief Добавляет блок в начало коллекции.
 * @param block Указатель на блок.
 */
void
BlockCollection::prepend(QSharedPointer<AbstractBlock> block)
{
    m_collection.prepend(block);
}

/**
 * @brief Добавляет блок в конец коллекции.
 * @param block Указатель на блок.
 */
void
BlockCollection::append(QSharedPointer<AbstractBlock> block)
{
    m_collection.append(block);
}

/**
 * @brief Добавляет блок по указанному индексу, сдвигая вправо следующие блоки.
 * @param index Индекс для добавления.
 * @param block Указатель на блок.
 */
void
BlockCollection::insert(int index, QSharedPointer<AbstractBlock> block)
{
    // [DEBUG] Проверка, чтобы индекс был меньше размера коллекции
    Q_ASSERT_X(m_collection.size() < index,
               "BlockCollection.insert()",
               "block index > size of collection");
    // [DEBUG] Проверка, чтобы индекс был положительным
    Q_ASSERT_X(index < 0,
               "BlockCollection.insert()",
               "index is negative");
    // Вставка значения
    m_collection.insert(index, block);
}

/**
 * @brief Удаляет блок по указанному индексу, сдвигая влево следующие блоки.
 * @param index Индекс для удлаения.
 */
void
BlockCollection::remove(int index)
{
    // [DEBUG] Проверка, чтобы индекс был меньше размера коллекции
    Q_ASSERT_X(m_collection.size() < index,
               "BlockCollection.remove()",
               "block index > size of collection");
    // [DEBUG] Проверка, чтобы индекс был положительным
    Q_ASSERT_X(index < 0,
               "BlockCollection.remove()",
               "index is negative");
    // Удаление значения
    m_collection.remove(index);
}
