#include <stdio.h>
float calculateDiscount(float amount,char type){
    float rate;

    if (type == 'P' || type == 'p')
    {
        rate = 20;
    }
    else if (type == 'G' || type == 'g')
    {
        rate = 10;
    }
    else
    {
        rate = 5;
    }

    if (amount > 10000)
    {
        rate = rate + 2;
    }

    float discount = amount * rate / 100;

    return discount;
}


float calculateFinalBill(float discountedAmount)
{
    float tax, shipping, total;

    tax = discountedAmount * 15 / 100;

    if (discountedAmount <= 5000)
    {
        shipping = 300;
    }
    else
    {
        shipping = 0;
    }

    total = discountedAmount + tax + shipping;

    return total;
}

int main()
{
    float amount, discount, discountedAmount, finalBill;
    char type;

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);

    discount = calculateDiscount(amount, type);

    discountedAmount = amount - discount;

    finalBill = calculateFinalBill(discountedAmount);

    printf("\nOriginal Amount = %.2f", amount);
    printf("\nDiscount = %.2f", discount);
    printf("\nDiscounted Amount = %.2f", discountedAmount);
    printf("\nFinal Payable Bill = %.2f", finalBill);

    return 0;
}









