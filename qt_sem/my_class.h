#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <QObject>
#include <QDebug>

/**
 * 注意事项：
 *     * 自定义的类必须继承于QObject，而且开头第一句必须是Q_OBJECT，头文件加上#include <QObject>
 *     * 被"signal:"修饰的信号函数只需声明，无需实例，因为它仅仅是把本类中的某个变量(由它的形参决定)往外丢
 *     * 类中的信号，如果你要手动发送，就要在类中新写一个函数调用它，格式是emit <信号函数>(...)，但是当你用
 *       connect连接信号和槽的时候，信号必须写用"signal:"修饰的那个。另外，connct函数中的信号和槽别忘了写形
 *       参
 *     * 有时你可能要清除一下工程然后qmake再构建
 */

class AAA : public QObject
{
    Q_OBJECT

public:
    AAA(const QString &name) : m_name(name)
    {
    }

    void send()
    {
        emit newPaper(m_name);
    }

signals:
    void newPaper(const QString &name);

private:
    QString m_name;
};

class BBB : public QObject
{
    Q_OBJECT

public:
    BBB() {}

private slots:
    void display(const QString &name)
    {
        qDebug() << "the string=" << name;
    }
};

#endif // MY_CLASS_H
