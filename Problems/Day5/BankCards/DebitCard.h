#ifndef DEBITCARD_H
#define DEBITCARD_H
#include "Card.h"
#include "Tier.h"
#include <ostream>
class DebitCard : public Card
{
private:
    Tier _tier;

public:
    DebitCard(int _number,
              int _cvv,
              IssuerType _iType,
              float _annualCharges,
              int _limit, Tier _tier);

    float CalculateTaxOnCharge() override;
    ~DebitCard() {
        std::cout<<"debit card destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);
};

std::string DisplayEnum2(const Tier value);
#endif // DEBITCARD_H
