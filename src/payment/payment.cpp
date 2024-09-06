//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#include "payment_method.cpp"
#include "payment_status.cpp"

class Payment
{
    PaymentMethod *payment_method;
    PaymentStatus status;
    Payment()
    {
        status = PENDING;
    }
    bool processPayment()
    {
        payment_method->pay() ? status = SUCCESSFUL : status = FAILED;
        if (status == SUCCESSFUL){
            return true;
        }
        return false;
    }
};
