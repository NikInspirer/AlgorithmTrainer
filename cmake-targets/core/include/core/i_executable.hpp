
/**
 * @brief Результат выполнения.
 */
struct ExeResult {};

/**
 * @brief Интерфейс, определяющий поведение исполняемой сущности.
 */
class IExecutable {
public:
    IExecutable() = default;
    virtual ~IExecutable() = default;
    virtual ExeResult execute() = 0;
};
