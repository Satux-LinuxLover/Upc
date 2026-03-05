#include <stdio.h> 
// a program that asks you for the full upc digit number
// Created by satux_breadlover
int main(void){
	int n1 ,n2 ,n3 ,n4 ,n5 ,n6 ,n7 ,n8 ,n9 ,n10 ,n11;

		printf("Enter the full digit number 11 numbers : ");
		scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);


		 int total ,first_sum ,second_sum ,check_digit;
                first_sum  = n1 + n3 + n5 + n7 + n9 + n11;
                second_sum = n2 + n4 + n6 + n8 + n10;
        total = (first_sum * 3) + second_sum;
        --total;
        total %= 10;
        check_digit += 9 - total;

                printf("the check digit is : %d \n",check_digit);

return 0; }
