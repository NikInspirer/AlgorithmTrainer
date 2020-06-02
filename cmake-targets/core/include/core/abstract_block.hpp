#pragma once

#include <QString>
#include <QSharedPointer>
#include <core/branch.hpp>

/**
 * @brief Абстрактный класс, определяющий поведение блока алгоритма с
 *        определением поведения по умолчанию для большинства методов.
 */
class AbstractBlock
{
public:
    AbstractBlock() = default;
    virtual ~AbstractBlock() = default;

    virtual QString getType() const = 0;
    virtual QSharedPointer<Branch> getParent() const;
    virtual QSharedPointer<Branch> getBranch(const QString &name) const;
    virtual QStringList getBranchNames() const;

    virtual void setParent(QSharedPointer<Branch> branch);
//    virtual void setData()
};

