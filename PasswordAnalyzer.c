#include <stdio.h>

void main()
{
    char password[100] = {};
    int choice;
    while (choice!=3)
    {
        choice = interface();
        int rating = 0;
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        if (choice ==1)
        {
            printf("Enter the password: ");
            scanf(" %99[^\n]", password);
            if (containsSpaces(password)) 
            {
                printf("\033[1;31mError: Password should not contain spaces.\033[0m\n\n");
            } 
            else 
            {
                rating = choice1(password);
            }
        }
        else if (choice ==2)
        {
            choice2(password);
        }
       
    }
    printf("\033[1;31mExiting...\033[0m\n\n");

}

void choice1(char password[])
{
    int passLen = 0;
    int i;
    int rating = 0;

    for (i = 0; password[i] != '\0'; i++)
    {
        passLen++;
    }
   
    if (passLen >= 8)
    {
        printf("Evaluating the strength of your password.\n");
        rating = evaluateStrength(password);
        if (rating<=2)
        {
            printf("\033[1;31mWeak\033[0m\n\n");
        }
        else if (rating<=4 && rating>2)
        {
            printf("\033[1;33mModerate\033[0m\n\n");
        }
        else
        {
            printf("\033[1;32mStrong\033[0m\n\n");
        }

    }

    else if (passLen < 8)
    {
        printf("\033[1;31mError: Current password must be at least 8 characters long.\033[0m\n\n");
    }
}

void choice2(char password[])
{
    printf("Evaluating the strength of your password.\n");
    int rating = 0;
    int i;
    int len = 0;
    printf("Password being tested: %s\n", password);    

    if (password[0]=='\0')
    {
        printf("\033[1;31mError: Current password is empty\033[0m\n\n");
        return;
    }
    if (containsSpaces(password)==1)
    {
        printf("\033[1;31mError: Current password has spaces\033[0m\n\n");
        return;
    }
    rating = evaluateStrength(password);
    if (rating<=2)
    {
        printf("\033[1;31mWeak\033[0m\n\n");
    }
    else if (rating<=4 && rating>2)
    {
        printf("\033[1;33mModerate\033[0m\n\n");
    }
    else
    {
        printf("\033[1;32mStrong\033[0m\n\n");
    }
}

int interface() 
{
    printf("\033[1;35mPassword\033[0m");
    printf("\033[1;34m Resilience\033[0m");
    printf("\033[1;36m Analyzer\033[0m\n");
    printf("1. Test a new password\n");
    printf("2. View strength of the last tested password\n");
    printf("3. Exit\n");

    char choice[100];
    choice[0] = '\0';
    int flag = 1;

    while (flag == 1) {
        printf("Enter your choice: ");
        scanf(" %99[^\n]", choice);
        
        if (containsSpaces(choice) ==1)
        {
	 printf("\033[1;31mError: Invalid choice, choice must be 1, 2, or 3\033[0m\n");
        }
        else if (choice[0]=='\0')
        {
	 printf("\033[1;31mError: Invalid choice, choice must be 1, 2, or 3\033[0m\n");
        }
        else if (strlen(choice) != 1) {
            printf("\033[1;31mError: Invalid choice, choice must be 1, 2, or 3\033[0m\n");
        } else if (choice[0] < '1' || choice[0] > '3') {
            printf("\033[1;31mError: Invalid choice, choice must be 1, 2, or 3\033[0m\n");
        } else {
            flag = 0;
        }
    }

    return atoi(choice);
}

int evaluateStrength(char password[])
{
    int rating = 0;
    if(hasUpperCase(password)==1)
    {
        rating+=1;
    }
    if(hasLowerCase(password)==1)
    {
        rating+=1;
    }
    if(hasDigit(password)==1)
    {
        rating+=1;
    }
    if(hasSpecialChar(password)==1)
    {
        rating+=1;
    }
    if(hasLength(password)==1)
    {
        rating+=1;
    }
    return rating;
}

int containsSpaces(char password[])
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] == ' ')
        {
            return 1; 
        }
    }
    return 0; 
}

int hasUpperCase(char password[])
{
    int i;
    for (i=0; password[i]!='\0'; i++)
    {
        if(password[i]>='A' && password[i]<='Z')
        {
            return 1;
        }
    }
    return 0;
}

int hasLowerCase(char password[])
{
    int i;
    for (i=0; password[i]!='\0'; i++)
    {
        if(password[i]>='a' && password[i]<='z')
        {
            return 1;
        }
    }
    return 0;
}

int hasDigit(char password[])
{
    int i;
    for (i=0; password[i]!='\0'; i++)
    {
        if(password[i]== '0' || password[i]=='1' 
        || password[i]== '2' || password[i]=='3' 
        || password[i]== '4' || password[i]=='5'
        || password[i]== '6' || password[i]=='7'
        || password[i]== '8' || password[i]=='9')
        {
            return 1;
        }
    }
    return 0;
}

int hasSpecialChar(char password[])
{
    int i;
    for (i=0; password[i]!='\0'; i++)
    {
        if ((password[i]>=33&&password[i]<=47) 
        ||  (password[i]>=58&&password[i]<=64) 
        ||  (password[i]>=91&&password[i]<=96)
        ||  (password[i]>=123&&password[i]<=126))
        {
            return 1;
        }
    }
    return 0;
}

int hasLength( char password[])
{
    int i;
    int count = 0;
    for (i=0; password[i]!='\0'; i++)
    {
        count++;
    }
    if (count>=12)
    {
        return 1;
    }
    return 0;
}


