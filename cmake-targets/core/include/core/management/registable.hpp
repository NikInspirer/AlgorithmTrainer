
#include <QString>
#include <QUuid>

/**
 * @brief Регестрируемая сущность.
 *
 * Регистрируемая сущность при создании получает UUID, который можно получить
 * при вызове метода Registable::getUuid().
 *
 * Также при создании происходит регистрация экземпляра класса у Manager по
 * типу type, который задается в конструкторе.
 */
class Registable {
public:
    explicit Registable(const QString &type);
    virtual ~Registable() = default;

    QUuid getUuid() const;

private:
    const QUuid m_uuid;     ///< UUID экземпляра класса.
};
