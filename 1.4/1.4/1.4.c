#include <stdio.h>

// Function declarations
void name();
void date();

int main() {
    name(); 
    date();  
    return 0; 
}


void name() {
    puts("=================================");
    puts("        Project Title            ");
    puts("       Full Name of Performer    ");
    puts("=================================");
}


void date() {
    puts("Date of Birth: 01/01/1990");
}