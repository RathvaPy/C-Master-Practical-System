// globals.h 
#ifndef GLOBALS_H
#define GLOBALS_H
 
// Prac 1: Structure
typedef struct {
    int rollNo;              
    char name[50];            
    float percentage;         
    double fees;             
    unsigned int age;        
    long long int phone;    
} StudentData;

// Prac 13: Enum for Days of the week
// aya SUN = 0, MON = 1, ..., SAT = 6
enum Weekday { SUN, MON, TUE, WED, THU, FRI, SAT };

// Prac 14: Enum for Traffic Signal
enum SignalColor { RED, YELLOW, GREEN };

// Prac 15: Structure for student details
typedef struct {
    int rollNo;
    char name[50];
    char course[20];
    int semester;
    float cgpa;
} StudentDetail;

// Prac 16: Structure for employee details
typedef struct {
    int empId;
    char name[50];
    char designation[30];
    float salary;
    char department[30];
} Employee;

// Prac 17: Typedef Structure for Book Details
typedef struct {
    int bookId;
    char title[50];
    char author[30];
    float price;
} Book;

// Prac 18: Structure for Multiple Student Records
typedef struct {
    int rollNo;
    char name[50];
    float marks;
} StudentRecord;

// Prac 19: Union for Student Result
// Marks 'athva' Grade bane ek jagya e store thase 
typedef union {
    int marks;
    char grade;
} ResultData;

// Prac 20: Structure vs Union Size Comparison
struct SizeStruct {
    int i;      
    float f;    
    char c;     
};

union SizeUnion {
    int i;      
    float f;    
    char c;     
};
// Prac 21: Structure for Login Credentials
typedef struct {
    char username[30];
    char password[20];
} UserAuth;

#endif