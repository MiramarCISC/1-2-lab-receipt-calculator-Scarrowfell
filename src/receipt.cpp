#include "receipt.hpp"

double calculateSubtotal(double item1, double item2, double item3) {
    return item1 + item2 + item3;
}

double calculateTax(double subtotal) {
    return subtotal * TAX_RATE;
}

double calculateTip(double subtotal, double tipPercent) {
    return subtotal * (tipPercent / 100.0);
}

double calculateTotal(double subtotal, double tax, double tip) {
    return subtotal + tax + tip;
}
//Enter price for item 1: 20
//Enter price for item 2: 15
//Enter price for item 3: 35
//Enter tip percentage: 20
//Subtotal: $70.00
//tax: $5.60
//tip: $14.00
//Total: $89.60