#include <stdio.h>

int main() {

    float price1, price2, price3, total, discount;

    
    printf("price1: ");
    scanf("%f", &price1);

    
    discount = price1 * 0.05;  
    total = price1 - discount; 
    printf("discount 5%%: %.2f ???\n", total);

    
    printf("price2: ");
    scanf("%f", &price2);

    discount = price2 * 0.15;  
    total = price2 - discount; 
    printf("discount 15%%: %.2f ???\n", total);
    
    
     printf("price3: ");
    scanf("%f", &price3);

    discount = price3 * 0.3;  
    total = price3 - discount; 
    printf("discount 30%%: %.2f ???\n", total);
    
    
}

