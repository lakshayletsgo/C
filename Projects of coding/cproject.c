#include<stdio.h>
void menu();
int preference(int);
double coupons();
int main(){
    int choice;
    
    menu();
    int bill = 0;
    double total = preference(bill);
    for(int j=0;j<=10;j++){
    printf("If you want to continue then press 1 otherwise press any key ");
    scanf("%d",&choice);
    if(choice==1){
    total = total+  preference(bill);
    }else{
       break;
    }}
      total = total - total*(coupons()/100);
    printf("your total is %lf\n",total);
    return 0 ;
}

void menu(){
    printf("\t\t\tPizza Menu\n\t\t\t\t\ts\tm\tl\n1.Margherita -    \t\t\t110\t195\t395 \n2.Double cheese Margherita -      \t165\t305\t495\n3.Farm House -    \t\t\t230\t400\t520\n4.Peppy Paneer -      \t\t\t210\t390\t550\n5.Mexican Green Wave -     \t\t195\t365\t545 \n6.Deluxe Veggie -     \t\t\t210\t405\t615\n7.Cheese and Corn -     \t\t200\t380\t500\n8.Fresh Veggie -      \t\t\t230\t430\t600\n9.Paneer Makhani -    \t\t\t215\t400\t595\n10.Veggie Paradise -  \t\t\t215\t395\t595\n");
}
int preference(int bill ){
    char size;
    int choice;
    printf("Enter your order number: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+110;
                              break;
                    case 'm': bill = bill+195;
                              break;
                    case 'l': bill = bill+395;
                              break;
                    default: printf("Enter valid size");
                }
                break;
        case 2: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+165;
                              break;
                    case 'm': bill = bill+305;
                              break;
                    case 'l': bill = bill+495;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
         case 3: printf("Enter size: ");
                 scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+230;
                              break;
                    case 'm': bill = bill+400;
                              break;
                    case 'l': bill = bill+520;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
                
         case 4: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+210;
                              break;
                    case 'm': bill = bill+390;
                              break;
                    case 'l': bill = bill+550;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
         case 5: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+195;
                              break;
                    case 'm': bill = bill+365;
                              break;
                    case 'l': bill = bill+545;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
                
         case 6: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+210;
                              break;
                    case 'm': bill = bill+405;
                              break;
                    case 'l': bill = bill+615;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
                
         case 7: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+200;
                              break;
                    case 'm': bill = bill+380;
                              break;
                    case 'l': bill = bill+500;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
                
         case 8: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+230;
                              break;
                    case 'm': bill = bill+430;
                              break;
                    case 'l': bill = bill+600;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
                
         case 9: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+215;
                              break;
                    case 'm': bill = bill+400;
                              break;
                    case 'l': bill = bill+595;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
                
         case 10: printf("Enter size: ");
                scanf("%s",&size);
                switch(size){
                    case 's': bill = bill+215;
                              break;
                    case 'm': bill = bill+395;
                              break;
                    case 'l': bill = bill+595;
                              break;
                    default: printf("Enter valid size\n");
                }
                break;
         default: printf("Enter valid ");
        
    }
    return bill;
}
double coupons(){
    int coup;
    printf("Available coupons: \n\t1.TRYNEW\n\t2.OFFER100\n\t3.DOMNEW3\n\t4.WEEKENDY\n\t5.NEW50\n");
    printf("Enter serial number of the coupon: ");
    scanf("%d",&coup);
    switch(coup){
        case 1: printf("TRYNEW-30\n");
                return 30;
                break;
        case 2: printf("OFFER100-20\n");
                return 20;
                break;
        case 3: printf("DOMNEW3-25\n");
                return 25;
                break;
        case 4: printf("WEEKENDY-30\n");
                return 30;
                break;
        case 5: printf("NEW50-15\n");
                return 15;
                break;
                
        default: printf("You have entered wrong coupon serial number");
    }
}
