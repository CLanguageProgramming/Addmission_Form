#include <stdio.h> 
#include <string.h> 

struct Student 
{
    char Full_Name[70];
    char Mother_Name[70];
    char Father_Name[70];
    char eMail[40];
    char cc[10];
    char phone[40];
    char Student_Id[10];
    int class;
    char Section;
    char DOB[20];
    int age;
    char Blood_Group[5];
    char Addmission_Date[20];
    char Addmission_Id[30];
    char Country[40];
    char State[40];
    char District[40];
    char Locality[40];
    char PinCode[20];
    char School_Branch[100];
}s;

int main() 
{
    printf("Enter the Student's Name\n>>");
    fgets(s.Full_Name, sizeof(s.Full_Name), stdin);
    printf("Enter the Mother's Name\n>>");
    fgets(s.Mother_Name, sizeof(s.Mother_Name), stdin);
    printf("Enter the Father's Name\n>>");
    fgets(s.Father_Name, sizeof(s.Father_Name), stdin);
    printf("Enter the Email\n>>");
    fgets(s.eMail, sizeof(s.eMail), stdin);
    printf("Enter the Student's Country Code within Brackets ex- US = (+1)\n>>");
    fgets(s.cc, sizeof(s.cc), stdin);
    printf("Enter the Student's Phone Number\n>>");
    fgets(s.phone, sizeof(s.phone), stdin);
    printf("Enter the Student's Id\n>>");
   // strcat(s.cc, s.phone);
    fgets(s.Student_Id, sizeof(s.Student_Id), stdin);
    getchar();
    printf("Enter Class [ex - 8 for 8th std; 10 for 10th std]\n>>");
    scanf("%d", &s.class);
    getchar();
    printf("Enter Section [ex - C for Section C]\n>>");
    scanf("%c", &s.Section);
    printf("Enter the Student's DOB\n>>");
    fgets(s.DOB, sizeof(s.DOB), stdin);
    getchar();
    printf("Enter Student's Age\n>>");
    scanf("%d", &s.age);
    getchar();
    printf("Enter the Student's Blood Group\n>>");
    fgets(s.Blood_Group, sizeof(s.Blood_Group), stdin);
    printf("Enter the Student's Addmission Date\n>>");
    fgets(s.Addmission_Date, sizeof(s.Addmission_Date), stdin);
    printf("Enter the Student's Addmission ID\n>>");
    fgets(s.Addmission_Id, sizeof(s.Addmission_Id), stdin);
    printf("Enter the Student's Country Of Living\n>>");
    fgets(s.Country, sizeof(s.Country), stdin);
    printf("Enter the Student's State/territory of Living\n>>");
    fgets(s.State, sizeof(s.State), stdin);
    printf("Enter the Student's District of Living\n>>");
    fgets(s.District, sizeof(s.District), stdin);
    printf("Enter the Student's Locality of Living\n>>");
    fgets(s.Locality, sizeof(s.Locality), stdin);
    printf("Enter the Student's Area Pincode\n>>");
    fgets(s.PinCode, sizeof(s.PinCode), stdin);
    printf("Enter the Student's School Branch\n>>");
    fgets(s.School_Branch, sizeof(s.School_Branch), stdin);
    
    printf("Student Details:\n");
    printf("Student Name: %s", s.Full_Name);
    printf("Student Mother's Name: %s", s.Mother_Name);
    printf("Student Father's Name: %s", s.Father_Name);
    printf("Student Email: %s", s.eMail);
    printf("Student Country Code: %s", s.cc);
    printf("Student Phone Number: %s", s.phone);
    printf("Student ID: %s", s.Student_Id);
    printf("Student Class And Section: %d%c", s.class, s.Section);
    printf("\n");
    printf("Student Date Of Birth: %s", s.DOB);
    printf("Student Age: %d", s.age);
    printf("\n");
    printf("Student Blood Group: %s", s.Blood_Group);
    printf("Student Admission Date: %s", s.Addmission_Date);
    printf("Student Admission ID: %s", s.Addmission_Id);
    printf("Student Country: %s", s.Country);
    printf("Student State: %s", s.State);
    printf("Student District: %s", s.District);
    printf("Student Locality: %s", s.Locality);
    printf("Student Pincode: %s", s.PinCode);
    printf("Student School Branch: %s", s.School_Branch);
    
    return 0;
}
