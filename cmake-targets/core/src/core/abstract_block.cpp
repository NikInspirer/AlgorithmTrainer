#include <core/abstract_block.hpp>

/**
 * @brief Конструктор абстрактного блока.
 * @param brNames Список имен внутренних ветвей блока. Имеет значение по
 * умолчанию = QStringList().
 */
AbstractBlock::AbstractBlock(const QStringList &brNames)
{
    // Создание внутренних ветвей по заданым именам.
    for (const QString &name : brNames) {
        this->branches[name] = new BlockCollection;
    }
}

/**
 * @brief Виртуальный деструктор абстрактного блока.
 */
AbstractBlock::~AbstractBlock()
{
    // Освобождение памяти внутренних ветвей блока.
    for (BlockCollection *branch : this->branches.values()) {
        delete branch;
    }
}

/**
 * @brief Возвращает имена всех внутренних ветвей блока.
 * @return Список имен внутренних ветвей.
 *
 * Возвращает QList<QString> имен внутренних ветвей блока, если они есть.
 * Если их нет, то возвращает пустой QList<QString>.
 */
QStringList
AbstractBlock::getBranchNames() const
{
    return this->branches.keys();
}
