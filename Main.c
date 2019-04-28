#include <stdio.h>
#include <stdlib.h>
static int (x);//Initializing x as a static int it can be used throughout code in all functions

int RotationCipherDecryption() /*This function is called upon when 
the user selects decryption of a rotatio cypher.*/
{
    printf ("If the rotation amount is known press (1)"); //Output makes it easier for the user to naivgate
    printf ("If the rotation amount is unknown press (2)"); //Output makes it easier for the user to naivgate
    char Message[50]; //Initialises an array which will store the message
    char message; //Initialises a char variable
    int Count, RA, y; //Initialises three variables of type int
    scanf ("%d", &y); //Reads and stores input from the user for flow control
    switch (y){ //switch statement used for flow control
        case (1):{
            printf ("Please input rotation amount"); //Output makes it easier for the user to naivgate
            scanf("%d", &RA); //Reads user input of rotation amount
            printf("Input Message\n"); //Output makes it easier for the user to naivgate
            while (Count<50){ //While loop that will execute 50 times
                scanf("%c", &message); //Reads the users input 
                if (message==32) //32 is the ascii code for a space, the space should still be a space after decrypting
                message=message+RA; //adds the rotation amount when a space is input, an input of space will have an output of space
                x=message-RA; //takes away the rotation amout from the encrypted input message
                Message[Count]=x; //Stores the value in the array
                printf("%c", Message[Count]); //prints the decrypted message
                Count++; //adds one to the count
        }    
        case (2):{//This is the second case for decryption with an unknown rotation
        }
    }
}
    
int RotationCipherEncryption()
/*This function is called upon when the user selects rotation cipher encryption. It will read
input from the user, rotated the input a set amount as specified by the user then print the encrypted message.*/
{
    char Message[50];//Initialises an array which will store the message
    char message;//Initialises a char variable
    int Count, RA;//Initialises two variables of type int
    printf ("Please input rotation amount"); //Output makes it easier for the user to naivgate
    scanf("%d", &RA); //reads user input on rotation amount
    printf("Input Message\n"); //Output makes it easier for the user to naivgate
    while (Count<50){
        scanf("%c", &message);//Reads the users message
        if (message==32) //32 is the ascii code for a space, the space should still be a space after encryption
        message=message-RA; //subtracts the rotation amount when a space is input, an input of space will have an output of space
        x=message+RA; //Adds the rotation amout from the encrypted input message
        Message[Count]=x;//Stores the value in the array
        printf("%c", Message[Count]);//prints the decrypted message
        Count++;//adds one to the count
    }
}

int SubstitutionCipherEncryption()
/*This function is called upon when the user inputs the appropriate values.
If completed it should read user input, convert it into an encrypted substitution cipher*/
{
    printf ("Substition Cypher Encryption Selected"); //informs the user of their selection
}

int SubstitutionCipherDecryption()
/*This function is called upon when the user inputs the appropriate values.
If completed it should read user input, convert it into a decrypted substitution cipher*/{
     printf ("Substition Cypher Decryption Selected");
}
int SelectCipher() 
/*
{
    int y;
    if (x==1) printf ("Which Cipher to do you wish to encrypt\n"); //Output makes it easier for the user to naivgate
    else printf ("Which Cipher to do you wish to decrypt\n"); //Output makes it easier for the user to naivgate
    printf ("Press (1) for Rotation Cipher\n");//Output makes it easier for the user to naivgate
    printf ("Press (2) for Substitution Cipher\n");
    scanf("%d", &y);//Output makes it easier for the user to naivgate
    switch (y){
        case (1):{
        printf("Rotation Cipher Selected\n");
        switch (x){
            case (1):
            RotationCipherEncryption();
            break;
            case (2):
            RotationCipherDecryption();
            break;
            }
        break;
        }
        case (2):{ 
        printf("Substitution Cipher Selected\n");
        switch (x){
            case (1):
            SubstitutionCipherEncryption(); //calls appropriate function based off selections
            break;
            case (2):
            SubstitutionCipherDecryption(); //calls appropriate function based off selections
            break;
        }
        break;
        }
        default:
        printf ("No option selected, program will restart\n"); //Informs user
        main(); //recalls main function restarting
    }
}

int main() 
{
    printf("Do you require encryption or decryption\n"); //This is output, it will be easier for the program to follow for users
    printf("Press (1) for encryption\n"); //Instructions for user
    printf("Press (2) for decryption\n"); //Instructions for user
    scanf("%d", &x); //reads an input from the disc
    switch (x){
        case (1):{
        printf("enryption selected\n");
        SelectCipher(); //calls appropriate function based off selections
        break;
        }
        case (2):{ 
        printf("decryption selected\n");
        SelectCipher(); //calls appropriate function based off selections
        break;
        }
        default:
        printf ("No option selected, program will restart\n");
        main (); //calls appropriate function based off selections
    }
}
