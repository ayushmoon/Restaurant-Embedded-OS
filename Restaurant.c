#include<stdio.h>
void main()
{       
        int choice;
        int choice2;
        int choice3;
        printf("Welcome to our restaurant sir✨😊!!\n\n");
        printf("Do you want to continue??\n\n1.Yes\n");
        scanf("%d",&choice2);
        printf("Good Morning Sir✨✨!!\n\nWhat do you gone have today sir??\n\n");
        printf("Here is our MENU CARD🍽🍽️️!!\n\n");
        menu();
        
}

int menu()
{
    int choice;
    int choice3;
    printf("1.Masala Dosa - ₹20\n2.Masala Paneer - ₹20\n3.Palak Paneer - ₹20\n4.Dhokla - ₹20\n5.Jalebi Fafda - ₹20\n6.Bread Pakoda - ₹20\n7.Sandwitch - ₹20\n8.Pizza - ₹20\n9.Burger - ₹20\n10.Ramen - ₹20\n\n");
        
        printf("Plz Enter Your Choice Number:\n\n");
        scanf("%d",&choice);
        
        printf("Your dish '%d' has been sent for making...\n",choice);
        printf("Plz wait for some time\nYour dish is Preparing...🍽️🍽️\n\n");
         printf("Do you want anything else sir??\n");
        printf("Enter 1.Yes😊\t2.No\n\n");
        scanf("%d",&choice3);
        
        if(choice3==1)
        {
            menu();
        }
        else if(choice3==2)
        {
            printf("For Billing:\n");
            Bill();
            
            printf("Thank You for your order...✨😊");
        }
        return menu;
}
int Bill()
{   
    int a,b,c,d,e,f,g,h,i,j;
    
        printf("You have to enter total 10 items price..\nIf you ordered 2 items then enter 2 item's price and other 0\n\n");
        printf("Enter each Items Price one by one:");
        scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
        

        int total;
        total=a+b+c+d+e+f+g+h+i+j;
        printf("Final Bill is ₹%d\n",total);
        
    return Bill;
        
 }