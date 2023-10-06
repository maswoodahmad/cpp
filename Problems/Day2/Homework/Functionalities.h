#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"
#include "Type.h"
#include <vector>
//Customer::Customer(int _customerID, std::string _customerName, Type _c_type, int _customerStoreCredits)
void CustomerCreator(Customer* container[5]);

void CreditInRange100_200(Customer* container[5],Customer* arr[5]);
void TypeOfCustomer(Customer* container[5], Type type, Customer* arr[5]);
float AverageOfCertainType(Customer* container[5], Type type);

void FreeMemory(Customer * container[5]);

#endif // FUNCTIONALITIES_H
