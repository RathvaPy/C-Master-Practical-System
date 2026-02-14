#include <stdio.h>
#include <string.h>
#include "modules.h"
#include "../globals.h"
#include <stdlib.h>

void practical_1_data_types() {
    system("cls");
    StudentData s;
    system("cls");
    printf("\n--- [Practical 1] Student Data Entry ---\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Full Name : ");
    scanf(" %[^\n]s", s.name); 

    printf("Enter Percentage : ");
    scanf("%f", &s.percentage);

    printf("Enter Monthly Fees : ");
    scanf("%lf", &s.fees);

    printf("Enter Age : ");
    scanf("%u", &s.age);

    printf("Enter 10-digit Phone Number : ");
    scanf("%lld", &s.phone);

    // OutPut 
    printf("\n==========================================\n");
    printf("     STUDENT RECORD   \n");
    printf("==========================================\n");
    printf("Roll No    : %d\n", s.rollNo);
    printf("Full Name  : %s\n", s.name);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Fees Paid  : %.2lf INR\n", s.fees);
    printf("Age        : %u Years\n", s.age);
    printf("Contact    : %lld\n", s.phone);
    printf("==========================================\n");

    while (getchar() != '\n'); 
}
void practical_2_store_name() {
    system("cls");
    char userName[50];

    printf("\n--- [Practical 2] Store and Display Name ---\n");

    printf("Enter your name: ");
    scanf(" %[^\n]s", userName);

    // OutPut
    printf("\n------------------------------------\n");
    printf("  Hello, %s!\n", userName);
    printf("  Welcome to C Programming Module.\n");
    printf("------------------------------------\n");

    

    while (getchar() != '\n');
}
void practical_3_welcome_msg() {
    system("cls");
    //Character Array Initialization
    char welcomeMsg[] = "Welcome to the C Programming !";
    
    // Biji Rit 
    char labName[] = {'B', 'C', 'A', ' ', 'L', 'a', 'b', '\0'};

    printf("\n--- [Practical 3] Display Predefined Message ---\n");

    printf("\nMessage 1: %s\n", welcomeMsg);
    printf("Message 2: %s\n", labName);


}
void practical_4_count_char() {
    system("cls");
    char str[100];
    int count = 0;

    printf("\n--- [Practical 4] Count Characters in String ---\n");

    printf("Enter a string : ");
   //For Read Full Sentance 
    scanf(" %[^\n]s", str);


    printf("\n------------------------------------\n");
    printf("  Input String   : %s\n", str);
    printf("  Total Characters: %d\n", strlen(str));
    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_5_reverse_string() {
    system("cls");
    char str[100];
    int len, i;

    printf("\n--- [Practical 5] Reverse a String ---\n");

    printf("Enter a string to reverse: ");
    scanf(" %[^\n]s", str);

    // Lambai shodhva mate 
    len = strlen(str);

    printf("\n------------------------------------\n");
    printf("  Original String : %s\n", str);
    printf("  Reversed String : ");

    // Logic: lats index thi (len-1) thi start karo 0 shudhi 
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n------------------------------------\n");

    
    while (getchar() != '\n');
}
void practical_6_copy_string() {
    system("cls");
    char source[100]; 
    char target[100]; 

    printf("\n--- [Practical 6] Copy One String to Another ---\n");

    printf("Enter the source string: ");
    scanf(" %[^\n]s", source);

    //Logic : strcpy(kya copy karvu, shu copy karvu)
    strcpy(target, source);

    printf("\n------------------------------------\n");
    printf("  Source String : %s\n", source);
    printf("  Target String : %s (Copied Successfully)\n", target);
    printf("------------------------------------\n");

    printf("Theory: strcpy() copies the string including null terminator.\n");

    while (getchar() != '\n');
}
void practical_7_compare_strings() {
    system("cls");
    char str1[100], str2[100];
    int result;

    printf("\n--- [Practical 7] Compare Two Strings ---\n");

    printf("Enter the first string: ");
    scanf(" %[^\n]s", str1);
    printf("Enter the second string: ");
    scanf(" %[^\n]s", str2);

    // Logic: strcmp(string1, string2)
    // Jo banne Sarkhi haseto 0 (Zero) return thase.
    result = strcmp(str1, str2);

    printf("\n------------------------------------\n");
    if (result == 0) {
        printf("  Result: Both strings are EQUAL.\n");
    } else {
        printf("  Result: Strings are NOT EQUAL.\n");
    printf("------------------------------------\n");

    while (getchar() != '\n');
}}
void practical_8_concatenate_strings() {
    system("cls");
    char str1[100], str2[50];

    printf("\n--- [Practical 8] Concatenate Two Strings ---\n");

    printf("Enter the first string: ");
    scanf(" %[^\n]s", str1);
    printf("Enter the second string to join: ");
    scanf(" %[^\n]s", str2);

    // Logic: strcat(target_string, source_string)

    strcat(str1, str2);

    printf("\n------------------------------------\n");
    printf("  Resulting String: %s\n", str1);
    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_9_string_length() {
    system("cls");
    char str[100];
    int length;

    printf("\n--- [Practical 9] Find String Length using strlen() ---\n");

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    // Logic: strlen(string_name)
    // Function int value Lambai return kare chhe 
    length = strlen(str);

    printf("\n------------------------------------\n");
    printf("  Input String : %s\n", str);
    printf("  Total Length : %d characters\n", length);
    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_10_vowel_consonant() {
    system("cls");
    char ch;

    printf("\n--- [Practical 10] Check Vowel or Consonant ---\n");

    printf("Enter any character: ");
    // "%c" ni Agad ek space add rakhavi jaruri chhe jethi junu Enter ignore thay 
    scanf(" %c", &ch);

    printf("\n------------------------------------\n");


    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        // Logic (Uppercase and Lowercase )
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("  Result: '%c' is a VOWEL.\n", ch);
        } else {
            printf("  Result: '%c' is a CONSONANT.\n", ch);
        }
        
    } else {
        printf("  Error: '%c' is not an alphabet letter.\n", ch);
    }
    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_11_multiple_names() {
    system("cls");    
    // 2-D Array: 10 names, par name max 50 char
    char names[10][50]; 
    int n, i;

    printf("\n--- [Practical 11] Store Multiple Names (2-D Array) ---\n");

    printf("How many student names you want to enter (max 10)? ");
    scanf("%d", &n);

    // input Loop 
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]s", names[i]); 
    }

    // Display Loop 
    printf("\n------------------------------------\n");
    printf("  List of Students:\n");
    printf("------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("  %d. %s\n", i + 1, names[i]);
    }
    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_12_count_words() {
    system("cls");  
    char str[200];
    int i, words = 1; 

    printf("\n--- [Practical 12] Count Words in a Sentence ---\n");

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);
    for(i = 0; str[i] != '\0'; i++) {

        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            words++;
        }
    }

    // if no sentance 0 show
    if(strlen(str) == 0) {
        words = 0;
    }

    printf("\n------------------------------------\n");
    printf("  Your Sentence : %s\n", str);
    printf("  Total Words   : %d\n", words);
    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_13_enum_days() {
    // Enum varibal
    system("cls");
    enum Weekday today;
    int dayNum;

    printf("\n--- [Practical 13] Enum for Days of Week ---\n");
    printf("0:SUN, 1:MON, 2:TUE, 3:WED, 4:THU, 5:FRI, 6:SAT\n");
    printf("Enter day number (0-6): ");
    scanf("%d", &dayNum);

    today = (enum Weekday)dayNum;

    printf("\n------------------------------------\n");
    
    switch(today) {
        case SUN: printf("It's Sunday! Time to relax."); break;
        case MON: printf("It's Monday! Back to work."); break;
        case TUE: printf("It's Tuesday!"); break;
        case WED: printf("It's Wednesday!"); break;
        case THU: printf("It's Thursday!"); break;
        case FRI: printf("It's Friday! "); break;
        case SAT: printf("It's Saturday!"); break;
        default:  printf("Invalid Day Number!");
    }
    printf("\n------------------------------------\n");


    while (getchar() != '\n');
}
void practical_14_traffic_signal() {
    system("cls");
    enum SignalColor signal;
    int choice;

    printf("\n--- [Practical 14] Traffic Signal Action using Enum ---\n");
    printf("Select Signal Color:\n");
    printf("0: RED\n");
    printf("1: YELLOW\n");
    printf("2: GREEN\n");
    printf("Enter choice (0-2): ");
    scanf("%d", &choice);

    // યુઝરના ઇનપુટને Enum માં કાસ્ટ કર્યું
    signal = (enum SignalColor)choice;

    printf("\n------------------------------------\n");
    printf("  Action: ");

    switch(signal) {
        case RED:
            printf("STOP! The signal is RED.");
            break;
        case YELLOW:
            printf("WAIT / BE READY! The signal is YELLOW.");
            break;
        case GREEN:
            printf("GO! The signal is GREEN.");
            break;
        default:
            printf("INVALID SIGNAL! Please follow traffic rules.");
    }
    printf("\n------------------------------------\n");

    // બફર સાફ કરો
    while (getchar() != '\n');
}
void practical_15_student_structure() {
    // Structure varibal
    StudentDetail s1;
    system("cls");
    printf("\n--- [Practical 15] Student Details using Structure ---\n");

    // Input
    printf("Enter Roll Number : ");
    scanf("%d", &s1.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", s1.name);

    printf("Enter Course Name : ");
    scanf(" %[^\n]s", s1.course);

    printf("Enter Semester    : ");
    scanf("%d", &s1.semester);

    printf("Enter Current CGPA: ");
    scanf("%f", &s1.cgpa);

    // આઉટપુટ ડિસ્પ્લે
    printf("\n==========================================\n");
    printf("          STUDENT ACADEMIC RECORD          \n");
    printf("==========================================\n");
    printf("  Roll No.  : %d\n", s1.rollNo);
    printf("  Name      : %s\n", s1.name);
    printf("  Course    : %s\n", s1.course);
    printf("  Semester  : %d\n", s1.semester);
    printf("  CGPA      : %.2f / 10.0\n", s1.cgpa);
    printf("==========================================\n");

    // બફર સાફ કરો
    while (getchar() != '\n');
}
void practical_16_employee_struct() {
   system("cls");
    Employee e;

    printf("\n--- [Practical 16] Employee Details Entry ---\n");

    printf("Enter Employee ID      : ");
    scanf("%d", &e.empId);

    printf("Enter Employee Name    : ");
    scanf(" %[^\n]s", e.name);

    printf("Enter Designation      : ");
    scanf(" %[^\n]s", e.designation);

    printf("Enter Department       : ");
    scanf(" %[^\n]s", e.department);

    printf("Enter Monthly Salary   : ");
    scanf("%f", &e.salary);
    
    //Output
    printf("\n==========================================\n");
    printf("           EMPLOYEE PAYROLL SLIP           \n");
    printf("==========================================\n");
    printf("  ID          : %d\n", e.empId);
    printf("  Name        : %s\n", e.name);
    printf("  Designation : %s\n", e.designation);
    printf("  Department  : %s\n", e.department);
    printf("  Basic Salary: %.2f INR\n", e.salary);
    printf("==========================================\n");

    while (getchar() != '\n');
}
void practical_17_typedef_struct() {
    system("cls");
    Book b1; 

    printf("\n--- [Practical 17] Library Book Entry (Typedef) ---\n");

    printf("Enter Book ID     : ");
    scanf("%d", &b1.bookId);

    printf("Enter Book Title  : ");
    scanf(" %[^\n]s", b1.title);

    printf("Enter Author Name : ");
    scanf(" %[^\n]s", b1.author);

    printf("Enter Book Price  : ");
    scanf("%f", &b1.price);

    // આઉટપુટ ડિસ્પ્લે
    printf("\n==========================================\n");
    printf("            LIBRARY BOOK DETAILS           \n");
    printf("==========================================\n");
    printf("  Book ID   : %d\n", b1.bookId);
    printf("  Title     : %s\n", b1.title);
    printf("  Author    : %s\n", b1.author);
    printf("  Price     : %.2f INR\n", b1.price);
    printf("==========================================\n");

    // બફર સાફ કરો
    while (getchar() != '\n');
}
void practical_18_array_of_structs() {
    // max 20 Students
    system("cls");
    StudentRecord list[20]; 
    int n, i;

    printf("\n--- [Practical 18] Store Multiple Student Records ---\n");
    printf("How many students' data you want to store (max 20)? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\n--- Entering Details for Student %d ---\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &list[i].rollNo);
        printf("Enter Name   : ");
        scanf(" %[^\n]s", list[i].name);
        printf("Enter Marks  : ");
        scanf("%f", &list[i].marks);
    }

    printf("\n============================================\n");
    printf("           STUDENT REPORT CARD LIST          \n");
    printf("============================================\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------\n");
    
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", list[i].rollNo, list[i].name, list[i].marks);
    }
    printf("============================================\n");


    while (getchar() != '\n');
}
void practical_19_union_result() {
    system("cls");
    ResultData res;
    int choice;

    printf("\n--- [Practical 19] Student Result System (Union) ---\n");
    printf("1. Enter Marks (Integer)\n");
    printf("2. Enter Grade (Character)\n");
    printf("Select your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("\n------------------------------------\n");

    if (choice == 1) {
        printf("Enter Marks (0-100): ");
        scanf("%d", &res.marks);
        printf("Saved Result: %d Marks\n", res.marks);

    } 
    else if (choice == 2) {
        printf("Enter Grade (A, B, C, D, F): ");
        scanf(" %c", &res.grade);
        printf("Saved Result: Grade %c\n", res.grade);
 
    } 
    else {
        printf("Invalid Choice!\n");
    }

    printf("------------------------------------\n");

    while (getchar() != '\n');
}
void practical_20_struct_union_size() {
    struct SizeStruct s;
    union SizeUnion u;

    printf("\n--- [Practical 20] Memory Size: Structure vs Union ---\n");

    printf("Structure Members: int(4), float(4), char(1)\n");
    printf("Union Members    : int(4), float(4), char(1)\n");

    printf("\n------------------------------------\n");
    // sizeof() 
    printf("  Size of Structure: %zu bytes\n", sizeof(s));
    printf("  Size of Union    : %zu bytes\n", sizeof(u));
    printf("------------------------------------\n");

    printf("\nLogic Explanation:\n");
    printf("1. Structure size is the SUM of all members (plus padding).\n");
    printf("2. Union size is equal to the LARGEST member's size.\n");

    while (getchar() != '\n');
}
void practical_21_login_system() {
    // Username And Password 
    UserAuth master = {"admin", "bca123"}; 
    UserAuth input; // 

    printf("\n--- [Practical 21] Secure Login System ---\n");

    printf("Enter Username: ");
    scanf("%s", input.username);

    printf("Enter Password: ");
    scanf("%s", input.password);

    printf("\n------------------------------------\n");
    printf("  Authenticating...\n");

    // strcmp() Function no Upyog kari Password ane Username ni chek karva mate
    if (strcmp(input.username, master.username) == 0 && 
        strcmp(input.password, master.password) == 0) {
        
        printf("  ACCESS GRANTED! Welcome, %s.\n", master.username);
    } else {
        printf("  ACCESS DENIED! Invalid credentials.\n");
    }
    printf("------------------------------------\n");

    while (getchar() != '\n');
}