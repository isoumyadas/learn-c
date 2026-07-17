#include <stdio.h>
#include <string.h>


typedef struct
{
	char *name;
	char *number;
}person;


int main(void) {
    person people[3];
    char *target = "soumya";

    people[0].name ="Kelly";
    people[0].number ="+1-567-5555";

    people[1].name ="John";
    people[1].number ="+1-567-6666";

    people[2].name ="David";
    people[2].number ="+1-567-0000";


    for(int i = 0; i < 3; i++){
        if(strcmp(people[i].name, target) == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found: %s\n", target);
    return 1;

}