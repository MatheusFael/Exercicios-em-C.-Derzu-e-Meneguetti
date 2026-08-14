    #include <stdio.h>


    int main () {


        int choice;

        printf("Enter a number between 1 and 5: ");
        scanf("%d", &choice);

        switch (choice){


            case 1 :
                printf("You have selected option 1\n");
                break;

            case 2 :
                printf("You have selected option 2\n");
                break;

            default :
                printf("Invalid option selected\n");
                break;

        } 



        return 0;
    }