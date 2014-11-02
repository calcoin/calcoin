#ifndef CALCOINADDRESSVALIDATOR_H
#define CALCOINADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class CalcoinAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit CalcoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // CALCOINADDRESSVALIDATOR_H
