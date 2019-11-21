#include<stdio.h>
int c[2][3]={{1,10,100},{2,20,200}};
struct cart{
    int ItemCode;
    int quant;
    int price;
    };
struct cart o[];
void AddItem();
void DelItem();
void DispCart();
void BillInfo();
int itempurchased=0;
int main()
{
    int i,j,opt;
    while(1)
    {
    printf("***************ITEM LIST***************\n");
    printf("Item No.\tQuantity\tPrice\n");
    for(i=0;i<2;i++)
    {
        printf("%d\t\t%d\t\t%d\n",c[i][0],c[i][1],c[i][2]);
    }

    printf("Do you want to \n 1.Add an item\n 2.Delete an Item\n 3.Display an Item\n 4.Bill Info\n5 Exit\n");
    scanf("%d",&opt);
    switch(opt)
     {
        case 1 :
            AddItem();
            break;
        case 2 :
            DelItem();
            break;
        case 3 :
            DispCart();
            break;
        case 4 :
            BillInfo();
            break;
        default :
            exit(0);
     }
}

}
void AddItem()
{

    int i,j=0,n,qty;
    printf("Your choice is add item.\n");
    printf("Enter the item code to be added and quantity to cart:\n");
    scanf("%d %d",&n,&qty);
    if(n<0||n>2)
        printf("Itme not present in list\n");
   else if(qty>c[n-1][1]||qty<0)
        printf("QUANTITY OUT OF STOCK\n");

    else {
        for(i=0;i<2;i++)
        {
            if (c[i][j]==n)
            {
                o[i].ItemCode=c[i][0];
                o[i].quant=o[i].quant+qty;
                o[i].price=qty*c[i][2];
            }
    }
    c[n-1][1]=c[n-1][1]-qty;
    printf("Item %d added",n);
    itempurchased+=1;
    }
    DispCart();

}
void DelItem()
{
    itempurchased-=1;
    printf("Your choice is Delete item\n");
    int i,j=0,n,qty=0;
    printf("Enter the item code to be deleted from cart and qty to be deleted\n:");
    scanf("%d %d",&n,&qty);
//    qty=o[n-1].quant;
     if(n<0||n>2)
        printf("Item not resent in list\n");
    else if(qty>c[n-1][1]||qty<0)
        printf("QUANTITY OUT OF STOCK\n");
    if(o[n].quant==0)
    {
        printf("No Item in cart please give a valid input\n");
    }
    for(i=0;i<itempurchased;i++)
    {
            if (c[i][j]==n)
            {
                o[i].quant=o[i].quant-qty;
            }
    }
    c[n-1][1]=c[n-1][1]+qty;
    printf("Item %d deleted ",n);
    DispCart();
}
void DispCart()
{
    int i;
//    printf("Your choice is display cart\n");
    printf("CART STATUS\n");
    printf("Item No.\tQuantity\tPrice\n");
    for(i=0;i<itempurchased;i++)
    {
        printf("%d\t\t%d\t\t%d\n",o[i].ItemCode,o[i].quant,o[i].price);
    }
}
void BillInfo()
{
    int i,j=0;
   printf("Your choice is Bill info");
   for(i=0;i<2;i++)
   {
       j=j+o[i].price;
   }
   printf("The price of cart is: %d\n",j);
}

