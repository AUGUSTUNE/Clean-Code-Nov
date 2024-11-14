#include <stdio.h>

void GetStringBeginsWithalphabe(char *names[], char alphabet){
    for(int i=0;i<5;i++)
    {
        //compare the frist char of the names with the given alphabet
        if(names[i][0] == alphabet)
        printf("%s\n", names[i]);
    }
}

int main() {
    
    char *names[10] = {"Bosch", "Robert", "Lenovo", "Bengaluru", "Rubic"};
    char alphabet = 'B';
    GetStringBeginsWithalphabe(names,alphabet);
    
    return 0;
}
