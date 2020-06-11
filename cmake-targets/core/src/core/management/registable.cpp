#include <core/management/registable.hpp>

/**
 * @brief Конструктор регистрируемой сущности.
 * @param type Тип регистрации.
 *
 * Создает экземляр класса регестрируемой сущности. При создании генерируется
 * новый UUID, а также происходит регистрация в Manager.
 */
Registable::Registable(const QString &type)
    : m_uuid( QUuid::createUuid() )
{
    #warning [TO-DO] make registration in Manager
}

/**
 * @brief Возвращает UUID экземпляра.
 * @return UUID экземпляра.
 */
QUuid
Registable::getUuid() const
{
    return m_uuid;
}
