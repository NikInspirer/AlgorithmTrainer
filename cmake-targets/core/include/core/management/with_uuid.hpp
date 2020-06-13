
#include <QUuid>

/**
 * @brief Сущность с UUID.
 *
 * Сущность при создании получает UUID, который можно получить при вызове
 * метода WithUuid::getUuid().
 */
class WithUuid {
public:
    explicit WithUuid();
    virtual ~WithUuid() = default;

    QUuid getUuid() const;

private:
    const QUuid m_uuid;     ///< UUID экземпляра класса.
};
