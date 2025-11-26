#include <stdio.h>

/* ----------------------------------------------
   1. Structure within a Structure
   ---------------------------------------------- */

// Inner structure
struct Address {
    char city[20];
    int pincode;
};

// Outer structure containing inner structure
struct Student {
    char name[20];
    int age;
    struct Address addr;  // structure inside structure
};


/* ----------------------------------------------
   2. Union within a Union
   ---------------------------------------------- */

// Inner union
union Dimensions {
    int length;
    int width;
};

// Outer union containing inner union
union Shape {
    union Dimensions dim;   // union inside union
    float radius;
};


/* ----------------------------------------------
   3. Union within a Structure
   ---------------------------------------------- */

union Number {
    int i;
    float f;
};

struct Data {
    char type;        // 'i' or 'f'
    union Number num; // union inside structure
};


/* ----------------------------------------------
   4. Structure within a Union
   ---------------------------------------------- */

struct CPU {
    int cores;
    float speed;
};

union DeviceInfo {
    struct CPU cpu;   // structure inside union
    int deviceID;
};


/* ----------------------------------------------
   MAIN PROGRAM
   ---------------------------------------------- */

int main() {

    /* ----- 1. Structure within a Structure ----- */
    struct Student s = {"Naveen", 24, {"Lucknow", 226001}};
    printf("Student Name: %s\n", s.name);
    printf("City: %s, Pincode: %d\n\n", s.addr.city, s.addr.pincode);

    /* ----- 2. Union within a Union ----- */
    union Shape sh;
    sh.dim.length = 10;     // Accessing inner union member
    printf("Shape Length: %d\n\n", sh.dim.length);

    /* ----- 3. Union within a Structure ----- */
    struct Data d;
    d.type = 'i';
    d.num.i = 42;
    printf("Data stored (int): %d\n\n", d.num.i);

    /* ----- 4. Structure within a Union ----- */
    union DeviceInfo dev;
    dev.cpu.cores = 8;
    dev.cpu.speed = 3.5;
    printf("CPU Cores: %d, Speed: %.1f GHz\n", dev.cpu.cores, dev.cpu.speed);

    return 0;
}
