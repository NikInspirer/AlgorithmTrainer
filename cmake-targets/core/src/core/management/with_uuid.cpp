#include <core/management/with_uuid.hpp>

/**
 * @brief Конструктор сущности с UUID.
 *
 * Создает экземляр класса и генерирует для нее UUID.
 */
WithUuid::WithUuid()
    : m_uuid( QUuid::createUuid() )
{
}

/**
 * @brief Возвращает UUID экземпляра.
 * @return UUID экземпляра.
 */
QUuid
WithUuid::getUuid() const
{
    return m_uuid;
}
