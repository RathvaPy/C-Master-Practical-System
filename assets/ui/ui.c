#include <stdio.h>
#include <stdlib.h>
#include "ui.h"
#include "../modules.h"
 
void clear_buffer() {
    while (getchar() != '\n');
}

void start_app() {
    int choice;
    do {
        system("cls");
        printf("==========================================\n");
        printf("     C PRACTICAL MANAGEMENT SYSTEM (SEM-2)        \n");
        printf("==========================================\n");
        printf(" 1. Student Info (Data Types)\n");
        printf(" 2. Store & Display Name\n");
        printf(" 3. Display Welcome Message\n");
        printf(" 4. Count Characters in String\n");
        printf(" 5. Reverse a string \n");
        printf(" 6. Copy one string to another  \n");
        printf(" 7. Compare two strings\n");
        printf(" 8. Concatenate two strings \n");
        printf(" 9. Find string length  \n");
        printf(" 10. Check vowel or consonant  \n");
        printf(" 11. Store multiple names (2-D array) \n");
        printf(" 12. Count words in a sentence\n");
        printf(" 13. Enum for days\n");
        printf(" 14. Enum for traffic signal\n");
        printf(" 15. Structure for student details \n");
        printf(" 16. Structure with user input \n");
        printf(" 17. Typedef with Structure\n");
        printf(" 18. Array of Structures (Multiple Students)\n");
        printf(" 19. Student Result Card System (Union)\n");
        printf(" 20. Structure vs Union size \n");
        printf(" 21. Login system using structure\n");
        printf(" 0. Exit\n");
        printf("==========================================\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            clear_buffer();
            continue;
        }
        clear_buffer();

        switch(choice) {
            case 1:practical_1_data_types(); break;// Funcation Calling modules.c 
            case 2:practical_2_store_name(); break;
            case 3: practical_3_welcome_msg(); break;
            case 4: practical_4_count_char(); break;
            case 5: practical_5_reverse_string(); break;
            case 6: practical_6_copy_string(); break;
            case 7: practical_7_compare_strings(); break; 
            case 8: practical_8_concatenate_strings(); break;
            case 9: practical_9_string_length(); break; 
            case 10: practical_10_vowel_consonant(); break;
            case 11: practical_11_multiple_names(); break;
            case 12: practical_12_count_words(); break;
            case 13: practical_13_enum_days(); break; 
            case 14: practical_14_traffic_signal(); break;
            case 15: practical_15_student_structure(); break;
            case 16: practical_16_employee_struct(); break;
            case 17: practical_17_typedef_struct(); break; 
            case 18: practical_18_array_of_structs(); break;
            case 19: practical_19_union_result(); break;
            case 20: practical_20_struct_union_size(); break;
            case 21: practical_21_login_system(); break;
            case 0: printf("Exiting..."); break;
            default: printf("Invalid Choice!");
        }

        if(choice != 0) {
            printf("\nPress Enter to continue...");
            getchar();
        }
    } while(choice != 0);
}