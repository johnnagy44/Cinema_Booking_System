#include "payment_method.cpp"
#include "payment_status.cpp"

class Payment
{
    PaymentMethod *payment_method;
    int amount;
    PaymentStatus status;
    Payment()
    {
        status = PENDING;
    }
    bool processPayment()
    {
        payment_method->pay() ? status = SUCCESSFUL : status = FAILED;
        if (status == SUCCESSFUL)
            return true;
        return false;
    }
};
