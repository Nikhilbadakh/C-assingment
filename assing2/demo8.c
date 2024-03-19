/*Write a program that will calculate the price for a quantity entered from the keyboard, given
  that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
  percent discount for quantities over 50.*/

  #include<stdio.h>

int main()
{
	int quantity;
	float unit_price=5.0f,total_price,discount=0.0f;

	printf("enter the quantity:");
	scanf("%d",&quantity);
	total_price= unit_price*quantity;

	if(quantity>=50)
	{discount=0.15f;
		printf("the discount customer getting is:%.2f\n",discount*100);
	}
	else if(quantity>=30 && quantity<50)
	{discount=0.10f;
		printf("the discount customer getting is:%.2f\n",discount*100);
	}
	if (discount>0.0f)
	{	total_price= total_price*(1.0f-discount);
	}

	printf("the total price is:%.2f\n",total_price);

	return 0;



}

