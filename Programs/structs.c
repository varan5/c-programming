#include<stdio.h>

struct identity {
    char name;
    int roll;
    char address;
    char college_name;
};

int main() {
    struct identity var;
    var.name="varan";
    var.roll=8;
    var.address="vishrantwadi";
    var.college_name="wadia college";
    printf("Name of student is %s ",var.name);
    printf("Roll number of student is %d ",var.roll);
    printf("Address of student is %s ",var.address);
    printf("Name of college is %s ",var.college_name);
    return 0;
}
