/**
 * 
 * Copyright (c) 2021 Pokerpoke
 * 
 * @file
 * @author   Pokerpoke (pokerpoke@qq.com)
 * @date     1970-01
 * @brief    
 * 
 * Last Modified:  2021-03-23
 * Modified By:    Pokerpoke (pokerpoke@qq.com)
 * 
 */

#include <QtCore/QString>
#include <QtCore/QDebug>
#include <QtCore/QMetaEnum>

class Enums : public QObject
{
    Q_OBJECT

public:
    enum class myEnum
    {
        First_key = 1,
        Second_key = 2,
        Third_key = 123,
    };
    Q_ENUM(myEnum);
};

int main(int argc, const char **argv)
{
    auto my_enum = QMetaEnum::fromType<Enums::myEnum>();
    qDebug() << "Enum name: " << my_enum.name();
    qDebug() << "Enum scope: " << my_enum.scope();
    qDebug() << "Number of myEnum keys: " << my_enum.keyCount();
    for (int i = 0; i < my_enum.keyCount(); i++)
    {
        qDebug() << "key: " << my_enum.key(i)
                 << " value: " << my_enum.value(i);
    }
    return 0;
}

#include "qt_get_enum_key.moc"