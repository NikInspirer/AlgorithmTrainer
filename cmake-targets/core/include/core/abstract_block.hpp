#pragma once

#include <QString>
#include <QHash>
#include <core/block_collection.hpp>

/**
 * @brief Абстрактный класс, определяющий поведение блока.
 */
class AbstractBlock
{
public:
    explicit AbstractBlock( const QStringList &brNames = QStringList() );
    virtual ~AbstractBlock();

    virtual QString getType() const = 0;
    QStringList getBranchNames() const;

protected:
    QHash<QString, BlockCollection *> branches;     ///< Хэш внутренних ветвей.
};

