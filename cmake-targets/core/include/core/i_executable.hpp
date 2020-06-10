
class IExecutable;

/**
 * @brief Результат выполнения.
 */
struct ExeResult {
    const IExecutable *redirect;    ///< Перенаправление после выполнения.
};

/**
 * @brief Интерфейс, определяющий поведение исполняемой сущности.
 */
class IExecutable {
public:
    IExecutable() = default;
    virtual ~IExecutable() = default;
    virtual ExeResult execute() = 0;
};
