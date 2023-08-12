/* #include<stdio.h>
int main(){
   // int m1 = 24;
   // int m2 = 25;
   // int m3 = 26;

    //int m[3] = {24,25,26};

    int marks[3];
                           // how to do input output
    printf("enter phy :");
    scanf("%d",&marks[0]);

     printf("enter chem :");
    scanf("%d",&marks[1]);

     printf("enter math :");
    scanf("%d",&marks[2]);

    printf("phy =%d, chem =%d, math =%d",marks[0], marks[1], marks[2]);


    return 0;
}*/
#include<stdio.h>
int main(){
      float price[3] = {100.00, 200.00, 300.00}; // we can direactly put the value to get the output

        //  float price[3];                    // how to calculate any bill GST
        //  printf("enter 3 prices :");
        //  scanf("%f", &price[0]);
        //  scanf("%f", &price[1]);    
        //  scanf("%f", &price[2]);

         printf("total price 1 : %f\n" , price[0]+(0.18*price[0]));
         printf("total price 1 : %f\n" , price[1]+(0.18*price[1]));
         printf("total price 1 : %f\n" , price[2]+(0.18*price[2]));



    return 0;
}