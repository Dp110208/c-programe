#include<stdio.h>
typedef struct students
{
    int rollno;
    char name[100];
    char course[100];
    char Majorsub[100];
    char minorsub[100];
}stu;
void b(struct students a){
printf("%s\n",a.name);

}


int main(){
  stu s1={52,"DAKSH","CSBS","MATHS","AI"};  
stu s2={54,"DRAGO","CSBS","PHYSICS","AI"};
b(s1);
b(s2);
    return 0;
}
