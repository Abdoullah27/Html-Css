#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int job() {
    int type, age;

    printf("\n Choose type:  ");
    scanf("%d", &type);

    if (type == 6) {
        return 0;
    }

    while (type < 1 || type > 6) {
        printf("\n Invalid Number... Try again\n\n");
        printf("Enter number from 1 to 6:");
        scanf("%d", &type);
        if (type == 6) return 0;
    }

    return 1;
}

void req() {

    printf("\n\n\nWe would like to ask you some questions:\n ");
    char name[100];
    printf("\n Your name is: ");

    scanf(" %[^\n]", name);

    printf("\n Your age: ");
    float age;
    scanf("%f", &age);

    printf("\n How many years of experience do you have : ");
    float exp;
    scanf("%f", &exp);
}

int ex() {
    char prob[100];
    int rate;

    printf("please rate us from 0 to 5\n");
    scanf("%d",&rate);

    while (rate!=0 && rate!=1 && rate!=2 && rate!=3 && rate!=4 && rate!=5 ) {
        printf("\n Invalid Number... Try again\n\n");
        printf("Please enter number from 1 to 5: \n");
        scanf("%d", &rate);
    }
    printf("If you have any problem send us here: hirex_offical@gmail.com ");
    printf("\n How could we improve our services :");
    scanf("%s", prob);

    printf("\n\nthanks for using our Site\n");
    return 0;
}

void job1() {
    char bc[5];
    char bc1[5];
    char en[5];
    char uni[20];

    req();

    printf("\n 1-Do you have a bachelor of Engineering \n Answer yes or no: ");
    scanf("  %[^\n]", bc);

    printf("\nWhere did you get your certificate (If you have it) ? \n Answer the question:  ");
    scanf("  %[^\n]", uni);

    printf("\nDid you know how to use AutoCad ?\n Answer yes or no: ");
    scanf("  %[^\n]", bc1);

    printf("\n\n 2-Your score in EN is B2 or above ? \n Answer yes or no: ");
    scanf("  %[^\n]", en);
}

void job2() {
    char bc[5];
    char bc1[5];
    char en[5];
    char uni[20];

    req();


    printf("\n 1-Do you have a bachelor of medicine? \n Answer yes or no: ");
    scanf("%s", bc);

    printf("\nWhere did you get your certificate ? \n Answer yes or no:");
    scanf("%s", uni);

    printf("\nDo you have the BME certificate (If you have it) ?\n Answer the question: ");
    scanf("%s", bc1);

    printf("\n\n 2-Your score in EN is B2 or above?\n Answer yes or no: ");
    scanf("%s", en);
}

void job3() {
    char bc[5];
    char bc1[5];
    char bc2[5];
    char en[5];
    char uni[20];

    req();

    printf("\n 1-Do you have a bachelor of science? \n Answer yes or no: ");
    scanf("%s", bc);

    printf("\nWhere did you get your certificate (If you have it)? \n Answer the question: ");
    scanf("%s", uni);

    printf("\n 2-Practical skill \n   Do you have this skill?\n Answer yes or no: ");
    scanf("%s", bc1);

    printf("\n 3-Soft skills \n   Do you have this skill?\n Answer yes or no: ");
    scanf("%s", bc2);

    printf("\n 4-Your score in EN is B2 or above ? \n Answer yes or no: ");
    scanf("%s", en);
}

void job4() {
    char bc[5];
    char bc1[5];
    char bc2[5];
    char en[5];
    char uni[20];

    req();

    printf("\n 1-Do you have a bachelor of literature \n Answer yes or no: ");
    scanf("%s", bc);

    printf("\nWhere did you get your certificate (If you have it) ? \nAnswer the question: ");
    scanf("%s", uni);

    printf("\n 2-Communication skill \n   Do you have this skill? \n Answer yes or no: ");
    scanf("%s", bc1);

    printf("\n 3-Explanation skill \n   Do you have this skill? \n Answer yes or no: ");
    scanf("%s", bc2);

    printf("\n 4-Your score in EN is B2 or above ? \n Answer yes or no: ");
    scanf("%s", en);
}

void acceptance() {
    float exp;
    if (exp >= 3) {
        printf("\nThanks for your submit... \n Our experts are reviewing your form , we will call you back soon\n\n");
    } else {
        printf("\nSorry you are not qualified for this job \n Thanks for your time...\n\n");
    }
}


void add_job(char company[100], char job_field[100], char job[200]) {
    printf("\nNew job added successfully!\n");
    printf("Company: %s\n", company);
    printf("Field: %s\n", job_field);
    printf("Job:  %s\n\n", job);

}

int main(void) {
    int x;
    printf("-------- Welcome to Hirex --------\n   (the best place to find & offer a job) \n");
    printf(" 1-find a job\n 2-offer a job \n 3-exit \n select an option: ");
    scanf("%d", &x);

    while (x!=1 & x!=2 & x!=3) {
        printf("\n Invalid Number... Try again\n\n");
        printf(" 1-find a job\n 2-offer a job \n 3-exit \n select an option: ");
        scanf("%d", &x);
    }

    switch (x) {
        case 1: {
            int field_choice;
            printf("\n 1-Engineering\n 2-Medical field\n 3-Science\n 4-Education\n 5-exit \n");
            printf("Choose a field: ");
            scanf("%d", &field_choice);

            while (field_choice < 1 || field_choice > 5) {
                printf("\n Invalid Number... Try again\n\n");
                printf(" 1-Engineering\n 2-Medical field\n 3-Science\n 4-Education\n 5-exit \n");
                printf("Choose a field: ");
                scanf("%d", &field_choice);
            }

            switch (field_choice) {
                case 1:
                    printf("\n1-Programming Engineer | Full Time | Cairo | at Siemens digital industries \n2-Communication Engineer | Part Time | Giza | at EgyptAir  Company \n3-IT Engineer | Part Time | Remotely | at FAMA Company \n4-Architecture Engineer| Full Time | Dubai | at Arabian Conctruction Company \n5-Electric field | Internship | Cairo | at Elswedy Electric Company \n6-exit\n");

                    if (job() == 0) {
                        ex();
                        return 0;
                    }

                    job1();
                    acceptance();
                    ex();
                    break;

                case 2:
                    printf(" 1-Cardiologist | full time | Cairo |at Clinca Egypt \n2-Dentist | part time | Giza |at Al-Arabi clinics \n3-Surgeon | internship | Mansoura |at Technoclinc specialized clinics\n4-Veterinarian |part time| Zifta |at Al Safa Veterinary clinic \n5-Allergist |full time| Cairo| at Core clinic\n6-exit\n");

                    if (job() == 0)  {
                    ex();
                    return 0;
                    }

                    job2();
                    acceptance();
                    ex();
                    break;

                case 3:
                    printf("1-Biologist | full time | Cairo | at downtown \n2-Chemist | full time | 6th of October city | at Chemical industry \n3-Environmental scientist | full time |at Chemical industry\n4-Data scientist | remotely | Cairo |at aptendo\n5-Aeronautical Engineer | full time | Giza |at chemical industry \n6-exit\n");

                    if (job() == 0)  {
                    ex();
                    return 0;
                    }

                    job3();
                    acceptance();
                    ex();
                break;

                case 4:
                    printf("1-Math teacher | full time | Cairo |at al-Ahram secondary school \n2-Arabic teacher | part time | Mansoura | at al-shahid Ahmed El-Mansy school\n3-school principal | full time | Mit Ghamr |at Mohamed Koraim primary school\n4-English teacher | part time | Zagazig |at Omar makram secondary  school\n5-Physics teacher | full time | Alexandria |at Soliman El-halaby secondary school\n6-exit\n");

                    if (job() == 0)  {
                    ex();
                    return 0;
                    }

                    job4();
                    acceptance();
                    ex();
                break;

                case 5:
                    ex();
                    return 0;
            }
            break;
        }

        case 2:


            printf("Enter your company name: ");
            char company[100], job_field[100], job[200];
            scanf(" %[^\n]", company);

            printf("Enter job field: ");
            scanf("  %[^\n]", job_field);

            printf("Enter job title and details: ");
            scanf("  %[^\n]", job);

            add_job(company, job_field, job);
        break;

        default:
            printf("\n Invalid Number... Try again\n\n");
        break;

        case 3:
            printf("please rate us from 0 to 5\n");
            int rate;
            scanf("%d",&rate);

            while(rate!=0 && rate!=1 && rate!=2 && rate!=3 && rate!=4 && rate!=5 ){
                printf("\n Invalid Number... Try again\n\n");
                printf("please rate us from 0 to 5\n");
                scanf("%d",&rate);
            }

            printf("If you have any problem send us here: hirex_offical@gmail.com ");
            printf("\n How could we improve our services :");
            char prob[100];
            scanf("%s", prob);
            printf("\n\nthanks for using our Site\n");
        }

}